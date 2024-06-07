/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneekhra <aneekhra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:04:05 by aneekhra          #+#    #+#             */
/*   Updated: 2024/04/23 11:10:48 by aneekhra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <string.h>
# include <sys/wait.h>
# include <errno.h>
# include <fcntl.h>

void	ft_perror(char *str);
int		print_error(char *str1, char *str2, char *str3, int erno);
void	pipex(char *argv[], char *envp[]);
void	child1(int *fd, char *argv[], char *envp[]);
void	child2(int *fd, char *argv[], char *envp[]);
void	executer(char *argv, char *envp[]);

char	**splitting_paths(char *envp[]);
char	*ft_strjoin_mod(char const *s1, char connector, char const *s2);
void	liberator(char **free_me);
void	ft_error_exit(char *str, char *str2, int status);
int		ft_strcmp(char *a, char *b);

#endif
