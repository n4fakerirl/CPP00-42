/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:18:58 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/10 13:06:58 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int check_sp(std::string str)
{
    int i = 0;

    while (str[i])
    {
        if (!isspace(str[i]))
            return (1);
        i++;
    }
    return (0);
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
