/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-oli <cade-oli@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:13:58 by cade-oli          #+#    #+#             */
/*   Updated: 2024/10/18 12:10:03 by cade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "file_handler.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "File name missing.", 18);
	else if (argc > 2)
		write(1, "Too many arguments.", 19);
	else
		ft_display_file(argv[1]);
	return (0);
}
