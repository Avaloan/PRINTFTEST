/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 00:37:00 by fdidelot          #+#    #+#             */
/*   Updated: 2017/06/08 03:09:47 by snedir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h> //printf use
# include <stdarg.h>
# include <unistd.h>
# include <wchar.h>
# include "../libft/libft.h"

/* FLAGS */
# define MINUS elem->minus
# define PLUS elem->plus
# define SPACE elem->space
# define HASH elem->hashtag
# define ZERO elem->zero

/* WIDTH */
# define NUM elem->number
# define STAR elem->asterix

/* PRECISION */
# define ACC elem->accuracy
# define NACC elem->num_acc
# define STARAC elem->starcuracy

/* LENGHT */
# define LEN elem->lenght

/* SPECIFIER */
# define SPEC elem->specifier

/* MISCELLANEOUS */
# define STOCK elem->stock
# define DOLL elem->priority
# define SIZE elem->content_size
# define SIZEF elem->size_flags
# define SIZEW elem->wide_size
# define RUSTINE elem->rustine

/* LIST */
# define LST elem->list
# define START elem->start
# define NEXT elem->next

// Pas OUBLIER DE FREE TAMER (la liste) !!!!!!!!!!!!!!!!!!!!!!
typedef	struct		s_print
{
	int				minus;
	int				plus;
	int				space;
	int				hashtag;
	int				zero;
	int				number;
	int				asterix;
	int				accuracy;
	int				num_acc;
	int				starcuracy;
	int				priority; //RAJOUT INIT
	int				size_flags;
	int				wide_size;
	int				rustine;
	char			specifier;
	char			lenght;
	char			*stock;
	size_t			content_size;
	struct s_print	*next;
}					t_print;

/* ft_printf.c */
size_t					ft_printf(const char *format, ...);

/* parser.c */
int					num_width(char *format, t_print *elem);
int					num_acc(char *format, t_print *elem);
int					create_elem(t_print *elem, char *format);
t_print				*analyse(char *format, t_print *elem);

/* check.c */
char				specifier(t_print *elem, char format);
int					flags(char format, t_print *elem);
int					length(char *format, t_print *elem);
int					da_check(char format);

/* struct.c */
t_print				*init();
void				join(t_print *elem, t_print *news);

/* apply_width.c */
char				*apply_width_string(t_print *elem);
char				*get_pointer(t_print *elem, va_list ap);
int					wide_string(t_print *elem, va_list ap);
int					wide_str_trans(t_print *elem, wchar_t wide);

/* apply_flags.c */
void				add_plus_space(t_print *elem, int id);
void				field(t_print *elem);
void   				field_p(t_print *elem, char c, int size);
void   				field_neg(t_print *elem, char c, int size);
void				field_zero(t_print *elem);
void				precision(t_print *elem);
int					apply_hash(t_print *elem);

/* char.c */
char				*create_mask(int len);
char				*fill_mask(char *mask, char *fill);
char				*wide_char(t_print *elem, va_list ap);
char				*binary_to_dec(char **split, int sizetab);
char				*arg_char(t_print *elem, va_list ap);
int					*tabnum();
int					zero_fill(int len);
int					countspace(char *mask);

/* get_spec.c */
char				*string(t_print *elem, va_list ap);
char				*get_o_u_args(t_print *elem, va_list ap);
char				*get_hexa_args(t_print *elem, va_list ap);
char				*get_signed_number(t_print *elem, va_list ap);
char				*da_string(t_print *elem, char *str);

/* format.c */
t_print				*create_stock(t_print *elem, va_list ap);
int					get_arg(t_print *elem, va_list ap);
void				apply_flags(t_print *elem);
int					print_list(t_print *elem, char *format);
size_t				da_print(t_print *elem, char *format);

#endif
