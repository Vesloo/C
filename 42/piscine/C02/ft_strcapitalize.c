/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: longlongwp <long.long.wp@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:19:14 by longlongwp        #+#    #+#             */
/*   Updated: 2025/11/29 13:19:14 by longlongwp       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;

    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (count == 0)
                str[i] -= 32;
            count = 1;
        }
        else
            count = 0;
        if ((str[i] >= '0' && str[i] <= '9'))
            count = 1;
        i++;
    }
}