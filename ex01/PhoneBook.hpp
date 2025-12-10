/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:47:17 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/10 12:05:48 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class Contact
{
    public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

class PhoneBook
{
    public:
    Contact contact_list[8];
    int     nbr_contact;
};


int ft_strcmp(std::string str1, std::string str2);
std::string ft_strdup(std::string src);
int add_contact(PhoneBook *phone);
int printbook(PhoneBook *phone);
long ft_atol(const char *str);
int allowed(std::string str);
int string_nbr(std::string str);

#endif