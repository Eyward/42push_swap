/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 02:37:53 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/18 04:10:08 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct list
{
	int				data;
	int				index;
	struct list		*next;
}			t_list;

long	ft_atoi(const char *str);
t_list	*ft_checkstack(int ac, char *av[]);
t_list	*ft_checkdup(t_list *stack);
void	*ft_error(t_list *st, int ac, char *av[]);
int		ft_isdigit(int c);
int		ft_isint(long n);
int		ft_isnbr(char *str);
int		ft_count(int *i, char *tab[]);
int		issorted(t_list *stack);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	push(t_list **sa, t_list **sb);
void	swap(t_list **stack);
void	rotate(t_list **stack);
void	r_rotate(t_list **stack);
int		swap_b(char *line, t_list **sta, t_list **stb);
int		pr_bonus(char *line, t_list **sta, t_list **stb);
int		rr_bonus(char *line, t_list **sta, t_list **stb);
char	*get_next_line(int fd);

#endif