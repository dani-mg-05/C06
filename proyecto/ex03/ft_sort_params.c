/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:25:28 by damedina          #+#    #+#             */
/*   Updated: 2023/07/20 13:16:05 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*ptr;
	int		longitud;

	ptr = str;
	longitud = 0;
	while (*ptr != '\0')
	{
		longitud++;
		ptr++;
	}
	write(1, str, longitud);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	indice;

	indice = 0;
	while (s1[indice] != '\0' && s2[indice] != '\0')
	{
		if (s1[indice] != s2[indice])
			return (s1[indice] - s2[indice]);
		indice++;
	}
	return (s1[indice] - s2[indice]);
}

int	main(int argc, char **argv)
{
	char	*arg;
	char	**sort;
	int		i;
	int		j;

	i = 0;
	sort = argv;
	while (++i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(sort[j], sort[j + 1]) > 0)
			{
				arg = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = arg;
			}
			++j;
		}
	}
	i = 0;
	while (++i < argc)
		ft_putstr(sort[i]);
}
