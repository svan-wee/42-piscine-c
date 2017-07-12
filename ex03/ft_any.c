/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:21:40 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/11 19:17:44 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i] == 1))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
