/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 10:45:28 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/10 19:00:38 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != '\0' && *s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (nmatch(s1 + 1, s2 + 1));
	return (0);
}

int main()
 {	  
 	printf("%d\n",nmatch("abc","a**"));
  	return 0;
}
