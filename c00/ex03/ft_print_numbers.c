/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhoz <muhoz@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:23:31 by muhoz             #+#    #+#             */
/*   Updated: 2023/02/09 16:20:12 by muhoz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	say;

	say = 48;
	while (say <= 57)
	{
		write(1, &say, 1);
		say++;
	}
}
