/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:18:58 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/10 12:05:38 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int ft_strcmp(std::string str1, std::string str2)
{
    int i = 0;
    
    while (str1[i] && str1[i] == str2[i])
        i++;
    return (str1[i] - str2[i]);
}

std::string ft_strdup(std::string src)
{
    std::string dest;
    int len = src.length();
    int i = 0;
    
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

long ft_atol(const char *str)
{
    long nbr = 0;
    size_t i = 0;
    int min = 0;
    
    while (isspace(str[i]))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            min = 1;
        i++;
    }
    while (isdigit(str[i]))
    {
        nbr =  nbr * 10 + str[i] - '0';
        i++;
    }
    if (min == 1)
        nbr *= -1;
    return (nbr);
}

int allowed(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (!isalnum(str[i]) && str[i] != '-' && str[i] != ' ')
            return (0);
        i++;
    }
    return (1);
}

int string_nbr(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}
