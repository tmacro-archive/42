/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaudet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 00:10:10 by fgaudet           #+#    #+#             */
/*   Updated: 2016/08/28 23:10:40 by tmckinno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_H
# define EVAL_H

# include <stdlib.h>

typedef int				(*t_aop)(int, int);
typedef struct			s_frame
{
	int					type;
	void				*item;
	struct s_frame		*next;
	struct s_frame		*prev;
}						t_frame;

typedef struct			s_operator
{
	char				*symbol;
	int					presedence;
	t_aop				func;
}						t_operator;

typedef struct			s_operand
{
	int					value;
}						t_operand;

void					enq_frame(t_frame **stack, t_frame *frame);
void					push_frame(t_frame **stack, t_frame *frame);
t_frame					*pop_frame(t_frame **stack);
t_frame					*create_frame(void *node, int presc);
char					*allocate_buffer(int size);
char					**tokenize(char *s);
int						ft_mul(int x, int y);
int						ft_add(int x, int y);
int						ft_sub(int x, int y);
int						ft_div(int x, int y);
int						ft_mod(int x, int y);
int						ft_atoi(char *c);
int						count_digits(int num);
t_frame					**shunt(char *s);
t_frame					**create_stack(void);
int						polish(t_frame **queue);
void					ft_putnbr(int x);
int						eval_expr(char *s);
void					ft_putchar(char c);
#endif
