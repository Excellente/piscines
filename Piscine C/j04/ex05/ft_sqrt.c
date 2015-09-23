/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpirsch <jpirsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 14:06:45 by jpirsch           #+#    #+#             */
/*   Updated: 2014/09/03 11:39:09 by jpirsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;
	int square;

	i = 0;
	square = 0;
	while (i < nb / 2)
	{
		square = i * i;
		if (square == nb)
		   return (i);
		i++;
	}
	return (-1);
}