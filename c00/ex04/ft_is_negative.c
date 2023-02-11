/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhoz <muhoz@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:30:39 by muhoz             #+#    #+#             */
/*   Updated: 2023/02/09 16:20:37 by muhoz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int s)
{
	if (s < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}