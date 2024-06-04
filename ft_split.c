/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:17:47 by antandre          #+#    #+#             */
/*   Updated: 2024/06/04 16:53:37 by antandre         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdlib.h>

/*
1. 'while' se ejecutará hasta que se alcance el final de la cadena 's' 

2. Dentro del bucle, se verifica si el carácter actual 's[i]'
es diferente del carácter delimitador 'c'.

3. Si 's[i]' no es igual a 'c', significa que se ha encontrado una palabra.
incrementa 'count' en 1 y luego avanza 'i' hasta el siguiente carácter
que no sea 'c' o hasta el final de la cadena.

4. Si 's[i]' es igual a 'c', significa que se ha encontrado 
un carácter delimitador, se avanza 'i' al siguiente carácter.

5. Una vez que se ha recorrido toda la cadena 's', se devuelve 
el valor de 'count', que representa el número total de palabras encontradas.
*/

static int	count_words(char const *s, char c)
{
    int	count;
    int	i;

    count = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
        else
            i++;
    }
    return (count);
}

/*
1. Inicializa una variable i con el valor de *start. Esto se hace para
asegurarse de que la búsqueda de la siguiente palabra comience desde
la posición correcta en la cadena.

2. 'while' para omitir cualquier delimitador 'c' al comienzo de la palabra.

3. Después del bucle, 'i' apuntará al primer carácter de la siguiente
palabra en la cadena. Guardamos su valor en 'start.

4. Otro 'while' para encontrar el final de la palabra ('/0' o c).

5. ft_substr para extraer la palabra de la cadena 's'.

6. Se actualiza el valor de '*start' con el valor de 'i', para que la próxima
llamada a get_next_word comience desde la posición correcta en la cadena.
*/

static char	*get_next_word(char const *s, char c, int *start)
{
    int		i;
    char	*word;

    i = *start;
    while (s[i] && s[i] == c)
        i++;
    *start = i;
    while (s[i] && s[i] != c)
        i++;
    word = ft_substr(s, *start, i - *start);
    *start = i;
    return (word);
}

/*
Dividir una cadena de caracteres en palabras separadas por un 
carácter delimitador.

1. Se verifica si la cadena de caracteres 's' es nula. Si es así,
la función devuelve NULL para indicar un error.

2. Función 'count_words' para contar el número de palabras en la cadena 's'.

3. Se asigna memoria para el array 'result' utilizando la función malloc.

4. 'while' que se ejecuta word_count veces. En cada iteración:

Función 'get_next_word' para obtener la siguiente palabra de la cadena 's'.
Si devuelve NULL, significa que ocurrió un error al obtener la palabra. 
En este caso, se libera la memoria asignada para las palabras anteriores 
y para el arreglo result, y se devuelve NULL para indicar un error.

Si devuelve una palabra válida, se asigna esa palabra al elemento result[i]
del array.
Se incrementa el contador 'i' para pasar a la siguiente posición del array.

5. Se asigna NULL al último elemento del arreglo result para
marcar el final del arreglo.
*/

char	**ft_split(char const *s, char c)
{
    char	**result;
    int		word_count;
    int		i;
    int		start;

    if (!s)
        return (NULL);
    word_count = count_words(s, c);
    result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    i = 0;
    start = 0;
    while (i < word_count)
    {
        result[i] = get_next_word(s, c, &start);
        if (!result[i])
        {
            while (i >= 0)
                free(result[i--]);
            free(result);
            return (NULL);
        }
        i++;
    }
    result[i] = NULL;
    return (result);
}