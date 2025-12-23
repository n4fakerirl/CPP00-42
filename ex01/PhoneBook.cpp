/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:36:33 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/23 15:19:03 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _nbr_contact(0)
{
}

PhoneBook::~PhoneBook()
{
}

Contact *PhoneBook::getList(void)
{
    return (this->_contact_list);
}

int PhoneBook::getNbr(void)
{
    return (this->_nbr_contact);
}

void PhoneBook::incNbr(int i)
{
    this->_nbr_contact += i;
}

void PhoneBook::setNbr(int i)
{
    this->_nbr_contact = i;
}

int compare(std::string str, PhoneBook *phone)
{
    int i = 0;
    
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
        i = printbook(phone);
        if (i == 0)
            return (0);
        else if (i == 1)
        {
            if (add_contact(phone) == 0)
                return (0);
            return (1);
        }
    }
    return (2);
}

int main(void)
{
    std::string str;

    PhoneBook phone;
    std::cout << "---Welcome to the Phonebook !---\n\n[ADD] : save a new contact\n[SEARCH] : display a specific contact\n[EXIT] : exit the phonebook\nPlease, type a command to start\n\n";
    while (1)
    {
        std::cout << "cmd> ";
        std::getline(std::cin, str);
        if (!compare(str, &phone))
            return (0);
    }
}
