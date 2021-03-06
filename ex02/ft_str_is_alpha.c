/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avachero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 14:38:31 by avachero          #+#    #+#             */
/*   Updated: 2021/07/04 14:52:16 by avachero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	while(*str)
		if ( (*str < 'A' && *str > 'Z') ||( *str < 'a' && *str >'z'))
			return (1);
		else 
			return (0);
}
