/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 18:45:41 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/06 20:06:48 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.");
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 13.00 P.M.");
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.");
	else if (hour == 0 || hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 01.00 A.M.");
	else if (hour < 12 && hour != 11 && hour != 0)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. ", hour);
		printf("AND %d.00 A.M.", hour + 1);
	}
	else if (hour > 12 && hour != 24 && hour != 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. ", hour - 12);
		printf("AND %d.00 P.M.", hour - 11);
	}
	printf("\n");
}
