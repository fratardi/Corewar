/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubeal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:19:45 by jubeal            #+#    #+#             */
/*   Updated: 2018/11/28 17:47:21 by jubeal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int	ft_power(int nbr, int power)
{
	long long int	ret;

	ret = 1;
	while (power-- > 0)
		ret *= nbr;
	return (ret);
}
