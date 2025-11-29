/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: longlongwp <long.long.wp@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:00:18 by longlongwp        #+#    #+#             */
/*   Updated: 2025/11/29 13:00:18 by longlongwp       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = -1;

    while (str[++i])
    {
        if (str[i] >= 33 && str[i] <= 126)
            continue;
        else
            return (0);
    }
    return (1);
}