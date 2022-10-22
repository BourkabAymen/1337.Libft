/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:00:35 by abourkab          #+#    #+#             */
/*   Updated: 2022/10/22 15:29:32 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// cette fonction vérifie si c == a ou non
static int	check_sep(char a, char c)
{
	if (c == a)
		return (1);
	return (0);
}

// cette fonction compte le nombre des sous chaines existantes dans s et qui
// sont séparées au sein de s par c soit à droite soit à gauche soit les deux
static int	count_strings_in_str(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && check_sep(s[i], c))
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && !check_sep(s[i], c))
			i++;
	}
	return (count);
}

// cette fonction determine l'indice où
// il faut 
// s'arreter pour pouvoir retirer la sous chaine de caractère (word) 
// juste avant
// le séparateur
static char	*ft_word(char const *s, char c)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = 0;
	while (s[len_word] && !check_sep(s[len_word], c))
		len_word++;
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (NULL);
	while (i < len_word)
	{
		word[i] = (char)s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

// On remedie au probleme d'allocation de la memoire
static char	**memory_err(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (NULL);
}

// cette fonction retourne an array de sous chaines de caractères de s 
// séparées par c dans s
char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			*(count_strings_in_str(s, c) + 1));
	if (!strings)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && check_sep(*s, c))
			s++;
		if (*s != '\0')
		{
			strings[i] = ft_word(s, c);
			if (!strings[i])
				return (memory_err(strings));
			i++;
		}
		while (*s && !check_sep(*s, c))
			s++;
	}
	strings[i] = 0;
	return (strings);
}
