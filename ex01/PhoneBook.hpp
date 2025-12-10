/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:47:17 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/10 13:07:06 by ocviller         ###   ########.fr       */
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


int add_contact(PhoneBook *phone);
int printbook(PhoneBook *phone);
long ft_atol(const char *str);
int allowed(std::string str);
int string_nbr(std::string str);
int check_sp(std::string str);

#endif