/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:27:43 by damedina          #+#    #+#             */
/*   Updated: 2023/07/18 20:34:04 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;

	index = argc - argc;
	while (argv[0][index])
	{
		write(1, &argv[0][index], 1);
		index++;
	}
	write(1, "\n", 1);
}
