/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:50:22 by kristori          #+#    #+#             */
/*   Updated: 2022/10/20 10:33:19 by kristori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int	main()
{
	int	fd;
	char	*line;
	
	fd = open("42", O_RDONLY);
	line = "";
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
	}
	//line = get_next_line(fd);
	// printf("%s", line);
	fd = close(fd);
	return (0);
}

