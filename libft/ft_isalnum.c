/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakerkao <oakerkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:50:35 by oakerkao          #+#    #+#             */
/*   Updated: 2022/10/22 09:45:18 by oakerkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 48 && a <= 57) || (a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	else
		return (0);
}
