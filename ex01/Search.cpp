/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:37:22 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/23 15:14:44 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void check_l(std::string str, int len)
{
    if (len < 10)
    {
        std::cout << str;
        while (len < 10)
        {
            std::cout << " ";
            len ++;
        }
    }
    else if (len == 10)
        std::cout << str;
    else
    {
        for (int i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << ".";
    }
}

void print_contact(PhoneBook *phone, int index)
{
    std::cout << "\n---CONTACT INFORMATIONS---\n\n";
    std::cout << "Index : [" << index << "]\n";
    std::cout << "First name : " << phone->getList()[index - 1].getFirstName() << "\n";
    std::cout << "Last Name : " << phone->getList()[index - 1].getLastName() << "\n";
    std::cout << "Nickname : " << phone->getList()[index - 1].getNickname() << "\n";
    std::cout << "Phone Number : " << phone->getList()[index - 1].getPhoneNumber() << "\n";
    std::cout << "Darkest secret : " << phone->getList()[index - 1].getDarkestSecret() << "\n\n> ";
}

int select_contact(PhoneBook *phone)
{
    long index = 0;
    std::string str;
    
    std::cout << "\n\nEnter the index of the contact you want to display.\n(Beetween 1 and 8 included)\n";
    std::cout << "PS: You can either type 'ADD' to add a new contact again or 'EXIT' to quit the Phonebook.\n> ";
    while (1)
    {
        std::getline(std::cin, str);
        if (str == "ADD")
            return (1);
        else if ((str == "EXIT") || std::cin.eof())
            return (0);
        index = ft_atol(str.c_str());
        if (index < 1 || index > 8)
            std::cout << "Index must be between 1 and 8. Try again please.\n> ";
        else if (phone->getList()[index - 1].getFirstName().empty() || phone->getList()[index - 1].getFirstName()[0] == '\0')
            std::cout << "This entry is currently empty. Please, select another one.\n> ";
        else
            print_contact(phone, index);
    }
}

int printbook(PhoneBook *phone)
{
    int len;
    
    if (phone->getList()[0].getFirstName().empty() || phone->getList()[0].getFirstName()[0] == '\0')
    {
        std::cout << "\nThe phonebook is currently empty. Add a contact to display the phonebook.\n\n";
        return (1);
    }
    std::cout << "\nINDEX     |FIRST NAME|LAST NAME |NICKNAME  \n\n";
    for (int i = 0; i < 8; i++)
    {
        if (phone->getList()[i].getFirstName().empty() || phone->getList()[i].getFirstName()[0] == '\0')
            break ;
        std::cout << i + 1;
        std::cout << "         ";
        len = phone->getList()[i].getFirstName().length();
        std::cout << "|";
        check_l(phone->getList()[i].getFirstName(), len);
        len = phone->getList()[i].getLastName().length();
        std::cout << "|";
        check_l(phone->getList()[i].getLastName(), len);
        len = phone->getList()[i].getNickname().length();
        std::cout << "|";
        check_l(phone->getList()[i].getNickname(), len);
        std::cout << "\n";
    }
    return (select_contact(phone));
}
