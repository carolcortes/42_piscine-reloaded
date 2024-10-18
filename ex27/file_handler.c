/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:14:05 by cade-oli          #+#    #+#             */
/*   Updated: 2024/10/18 13:17:57 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *filename)
{
	int		file;
	char	c;

	file = open(filename, O_RDONLY, 0);
	if (file == -1)
		write(1, "Cannot read file.\n", 18);
	else
	{
		while (read(file, &c, 1) == 1)
			write(1, &c, 1);
		close(file);
	}
}
