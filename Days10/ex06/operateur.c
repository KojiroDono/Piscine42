/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operateur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:31:30 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/19 13:18:22 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		mult(int a, int b)
{
	return (a * b);
}

int		add(int a, int b)
{
	return (a + b);
}

int		sous(int a, int b)
{
	return (a - b);
}

int		div(int a, int b)
{
	return (a / b);
}

int		mod(int a, int b)
{
	return (a % b);
}
