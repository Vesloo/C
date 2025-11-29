/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: longlongwp <long.long.wp@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:51:42 by longlongwp        #+#    #+#             */
/*   Updated: 2025/11/29 12:51:42 by longlongwp       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = -1;

    while (str[++i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            continue;
        else
            return (0);
    }
    return (1);
}