/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:37:41 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/16 17:12:04 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/colle.h"

char	colle00(int x, int y, int c, int r)
{
	if ((c == 0 || c == x - 1) && (r == 0))
		return ('o');
	else if ((c == 0 || c == x - 1) && (r == y - 1))
		return ('o');
	else if ((c == 0 || c == x - 1) && (r != 0 && r != y - 1))
		return ('|');
	else if ((c != 0 && c != x - 1) && (r == 0 || r == y - 1))
		return ('-');
	else
		return (' ');
}

char	colle01(int x, int y, int c, int r)
{
	if (x == 1 && y == 1)
		return ('/');
	else if (x == 1 && (c == x - 1 && r == y - 1))
		return ('\\');
	else if (y == 1 && (c == x - 1 && r == 0))
		return ('\\');
	else if ((c == 0 && r == 0) || (c == x - 1 && r == y - 1))
		return ('/');
	else if ((c == x - 1 && r == 0) || (c == 0 && r == y - 1))
		return ('\\');
	else if ((r == 0 || r == y - 1) && (c != 0 && c != x - 1))
		return ('*');
	else if ((c == 0 || c == x - 1) && (r != 0 && r != y - 1))
		return ('*');
	else
		return (' ');
}

char	colle02(int x, int y, int c, int r)
{
	if ((c == 0 || c == x - 1) && (r == 0))
		return ('A');
	else if ((c == 0 || c == x - 1) && (r == y - 1))
		return ('C');
	else if ((c == 0 || c == x - 1) && (r != 0 || r != y - 1))
		return ('B');
	else if ((c != 0 || c != x - 1) && (r == 0 || r == y - 1))
		return ('B');
	else
		return (' ');
}

char	colle03(int x, int y, int c, int r)
{
	if (c == 0 && (r == 0 || r == y - 1))
		return ('A');
	else if (c == x - 1 && (r == 0 || r == y - 1))
		return ('C');
	else if ((r == 0 || r == y - 1) && (c != 0 && c != x - 1))
		return ('B');
	else if ((c == 0 || c == x - 1) && (r != 0 && r != y - 1))
		return ('B');
	else
		return (' ');
}

char	colle04(int x, int y, int c, int r)
{
	if (x == 1 && y == 1)
		return ('A');
	else if (x == 1 && (c == x - 1 && r == y - 1))
		return ('C');
	else if (y == 1 && (c == x - 1 && r == 0))
		return ('C');
	else if ((c == 0 && r == 0) || (c == x - 1 && r == y - 1))
		return ('A');
	else if ((c == x - 1 && r == 0) || (c == 0 && r == y - 1))
		return ('C');
	else if ((r == 0 || r == y - 1) && (c != 0 && c != x - 1))
		return ('B');
	else if ((c == 0 || c == x - 1) && (r != 0 && r != y - 1))
		return ('B');
	else
		return (' ');
}
