/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:17:47 by antandre          #+#    #+#             */
/*   Updated: 2024/06/04 16:53:37 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
 * 1. 'while' will execute until the end of the string 's' is reached.
 * 2. Inside the loop, it checks if the current character 's[i]'
 *    is different from the delimiter character 'c'.
 * 3. If 's[i]' is not equal to 'c', it means a word has been found.
 *    Increment 'count' by 1 and then move 'i' to the next character
 *    that is not 'c' or to the end of the string.
 * 4. If 's[i]' is equal to 'c', it means delimiter character has been found.
 *    Move 'i' to the next character.
 * 5. Once the entire string 's' has been traversed, return
 *    the value of 'count', which represents the total number of words found.
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
 * 1. Initialize a variable i with the value of *start. This is done to
 *    ensure that the search for the next word starts from
 *    the correct position in the string.
 * 2. 'while' loop to skip any delimiter 'c' at the beginning of the word.
 * 3. After the loop, 'i' will point to the first character of the next
 *    word in the string. Save its value in 'start'.
 * 4. Another 'while' loop to find the end of the word ('\0' or 'c').
 * 5. Use ft_substr to extract the word from the string 's'.
 * 6. Update the value of '*start' with the value of 'i', so that the next
 *    call to get_next_word starts from the correct position in the string.
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
 * Function to free the memory allocated for the words
 * in the 'result' array in case an error occurs while getting
 * a word.
 */

static void	free_result(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

/*
 * Split a string into words separated by a delimiter character.
 * 1. Check if the string 's' is NULL. If so,
 *    the function returns NULL to indicate an error.
 * 2. Use the 'count_words' function to count the number of words
 * in the string 's'.
 * 3. Allocate memory for the 'result' array using the malloc function.
 * 4. 'while' loop that executes word_count times. In each iteration:
 * - Use the 'get_next_word' function to retrieve the next word from 
 *   the string 's'.
 * - If it returns NULL, it indicates an error occurred while 
 *   fetching the word.
 *   In this case, free the memory allocated for previous words 
 *   and for the 'result'array, and return NULL to indicate an error.
 * - If it returns a valid word, assign that word to the result[i]
 *   element of the array.
 * - Increment the counter 'i' to move to the next position in the array.
 * 5. Assign NULL to the last element of the 'result' array to
 *    mark the end of the array.
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
			free_result(result);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
