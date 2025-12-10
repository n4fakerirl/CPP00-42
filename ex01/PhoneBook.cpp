/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:36:33 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/10 13:05:15 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int compare(std::string str, PhoneBook *phone)
{
    if ((str == "EXIT") || std::cin.eof())
        return (0);
    else if (str == "ADD")
    {
        if (add_contact(phone) == 0)
            return (0);
        return (1);
    }
    else if (str == "SEARCH")
    {
        if (printbook(phone) == 0)
            return (0);
        return (1);
    }
    else
        return (2);
}

int main(void)
{
    std::string str;

    PhoneBook phone;
    phone.nbr_contact = 0;
    std::cout << "---Welcome to the Phonebook !---\n\n[ADD] : save a new contact\n[SEARCH] : display a specific contact\n[EXIT] : exit the phonebook\nPlease, type a command to start\n\n";
    while (1)
    {
        std::cout << "cmd> ";
        std::getline(std::cin, str);
        if (!compare(str, &phone))
            return (0);
    }
}
