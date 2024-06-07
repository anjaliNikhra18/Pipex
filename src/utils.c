/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneekhra <aneekhra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:00:56 by aneekhra          #+#    #+#             */
/*   Updated: 2024/04/23 14:39:33 by aneekhra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "../libft/libft.h"

void	ft_error_exit(char *str, char *str2, int status)
{
	int	i;

	i = 0;
	if (str2 == NULL)
	{
		write(2, "pipex: ", 7);
		write(2, str, ft_strlen(str));
		exit(127);
	}
	write(2, "pipex: ", 7);
	write(STDERR_FILENO, str, ft_strlen(str));
	write(2, str2, ft_strlen(str2));
	write(2, "\n", 1);
	exit(status);
}

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i])
	{
		if (a[i] == b[i])
			i++;
		else
			return (0);
	}
	return (i);
}
