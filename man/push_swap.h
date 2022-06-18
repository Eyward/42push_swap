/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:56:34 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/15 02:39:50 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
int		ft_count(int *i, char *tab[]);
int		issorted(t_list *stack);
void	*ft_error(t_list *st, int ac, char *av[]);
int		ft_isdigit(int c);
int		ft_isint(long n);
int		ft_isnbr(char *str);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *det, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		min(t_list *stack);
void	push(t_list **sa, t_list **sb);
void	pa(t_list **sa, t_list **sb);
void	pb(t_list **sa, t_list **sb);
void	swap(t_list **stack);
void	sa(t_list **sta);
void	sb(t_list **stb);
void	ss(t_list **sta, t_list **stb);
void	rotate(t_list **stack);
void	ra(t_list **sta);
void	rb(t_list **stb);
void	rr(t_list **sta, t_list **stb);
void	r_rotate(t_list **stack);
void	rra(t_list **sta);
void	rrb(t_list **stb);
void	rrr(t_list **sta, t_list **stb);
void	find_min_a(t_list **sta, int i, int size);
void	find_min_b(t_list **sta, int i, int size);
void	sort_stack(t_list **stack_a, t_list **stack_b);
void	ft_index(t_list **sta);
void	sort_2(t_list **sta);
void	sort_3(t_list **sta);
void	sort_4(t_list **sta, t_list **stb);
void	sort_5(t_list **sta, t_list **stb);
void	ft_sort(t_list **sta, t_list **stb);

#endif
