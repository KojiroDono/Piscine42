/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arfohrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:46:03 by arfohrer          #+#    #+#             */
/*   Updated: 2018/02/24 16:32:37 by arfohrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H
# include <stdlib.h>
# include <unistd.h>

int	rec_all(char *str, int *i);
int	eval_expr(char *expr);
char*delete_spaces(char *str);

#endif
