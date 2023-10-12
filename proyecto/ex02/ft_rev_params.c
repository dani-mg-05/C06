/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:22:39 by damedina          #+#    #+#             */
/*   Updated: 2023/07/18 21:23:16 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	index;

	i = argc - 1;
	while (i > 0)
	{
		index = 0;
		while (argv[i][index])
		{
			write(1, &argv[i][index], 1);
			index++;
		}
		write(1, "\n", 1);
		i--;
	}
}
