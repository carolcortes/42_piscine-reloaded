/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:14:05 by cade-oli          #+#    #+#             */
/*   Updated: 2024/10/18 12:02:36 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *filename)
{
	int		file;
	char	c;

	file = open(filename, O_RDONLY);
	if (file == -1)
		write(1, "Cannot read file.", 17);
	else
	{
		while (read(file, &c, 1))
			write(1, &c, 1);
		close(file);
	}
}
