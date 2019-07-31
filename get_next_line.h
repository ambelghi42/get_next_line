/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelghi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:15:12 by ambelghi          #+#    #+#             */
/*   Updated: 2019/07/10 20:32:55 by ambelghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 5

# include <fcntl.h>
# include "libft/libft.h"

int				get_next_line(const int fd, char **line);

typedef struct	s_gnl
{
	char	*stat_line;
	int		fd;
}				t_gnl;

#endif
