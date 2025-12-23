/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddContacts.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:02:35 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/23 15:03:11 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void print_title(int i)
{
    if (i == 0)
        std::cout << "First name :\n";
    if (i == 1)
        std::cout << "Last Name :\n";
    if (i == 2)
        std::cout << "Nickname :\n";
    if (i == 3)
        std::cout << "Phone Number :\n";
    if (i == 4)
        std::cout << "Darkest secret :\n"; 
}

void fill_contact(int i, PhoneBook *phone, std::string str)
{
    if (i == 0)
        phone->getList()[phone->getNbr() - 1].setFirstName(str);
    if (i == 1)
        phone->getList()[phone->getNbr() - 1].setLastName(str);
    if (i == 2)
        phone->getList()[phone->getNbr() - 1].setNickname(str);
    if (i == 3)
        phone->getList()[phone->getNbr() - 1].setPhoneNumber(str); 
    if (i == 4)
        phone->getList()[phone->getNbr() - 1].setDarkestSecret(str);
}

int add_contact(PhoneBook *phone)
{
    std::string str;
    
    std::cout << "\n---Contact registration :---\n\n";
    phone->incNbr(1);
    for (int i = 0; i < 5; i++)
    {
        if (str == "EXIT" || std::cin.eof())
            return (0); 
        print_title(i);
        std::getline(std::cin, str);
        while (str.empty() || str[0] == '\0' || !check_sp(str))
        {
            std::cout << "This field can't be blank\n";
            std::getline(std::cin, str);
            if (str == "EXIT" || std::cin.eof())
                    return (0);
        }
        if (i == 3)
        {
            while (!string_nbr(str))
            {
    
                std::cout << "Only digits are allowed, please enter the phone number again.\n";
                std::getline(std::cin, str);
                if (str == "EXIT" || std::cin.eof())
                    return (0);
            }
        }
        else
        {
            while (!allowed(str))
            {
                std::cout << "Only letters, digits, spaces and hyphens are allowed, please try again.\n";
                std::getline(std::cin, str);
                if (str == "EXIT" || std::cin.eof())
                    return (0);
            }
        }
        if (phone->getNbr() == 9)
            phone->setNbr(1);
        fill_contact(i, phone, str);
    }
    std::cout << "\n---Contact created!---\n\n";
    return (1);
}
