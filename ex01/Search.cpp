/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:37:22 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/10 13:06:35 by ocviller         ###   ########.fr       */
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
    std::cout << "First name : " << phone->contact_list[index - 1].first_name << "\n";
    std::cout << "Last Name : " << phone->contact_list[index - 1].last_name << "\n";
    std::cout << "Nickname : " << phone->contact_list[index - 1].nickname << "\n";
    std::cout << "Phone Number : " << phone->contact_list[index - 1].phone_number << "\n";
    std::cout << "Darkest secret : " << phone->contact_list[index - 1].darkest_secret << "\n\n> ";
}

int select_contact(PhoneBook *phone)
{
    long index = 0;
    std::string str;
    
    std::cout << "\n\nEnter the index of the contact you want to display.\n(Beetween 1 and 8 included)\n";
    std::cout << "PS: You can type 'BACK' to leave the search mode or type 'EXIT' to quit the Phonebook.\n> ";
    while (1)
    {
        std::getline(std::cin, str);
        if (str == "BACK")
            return (1);
        else if ((str == "EXIT") || std::cin.eof())
            return (0);
        index = ft_atol(str.c_str());
        if (index < 1 || index > 8)
            std::cout << "Index must be between 1 and 8. Try again please.\n> ";
        else if (phone->contact_list[index - 1].first_name.empty() || phone->contact_list[index - 1].first_name[0] == '\0')
            std::cout << "This entry is currently empty. Please, select another one.\n> ";
        else
            print_contact(phone, index);
    }
}

int printbook(PhoneBook *phone)
{
    int len;
    
    if (phone->contact_list[0].first_name.empty() || phone->contact_list[0].first_name[0] == '\0')
    {
        std::cout << "\nThe phonebook is currently empty. Add a contact to display the phonebook.\n\n";
        return (1);
    }
    std::cout << "\nINDEX     |FIRST NAME|LAST NAME |NICKNAME  \n\n";
    for (int i = 0; i < 8; i++)
    {
        if (phone->contact_list[i].first_name.empty() || phone->contact_list[i].first_name[0] == '\0')
            break ;
        std::cout << i + 1;
        std::cout << "         ";
        len = phone->contact_list[i].first_name.length();
        std::cout << "|";
        check_l(phone->contact_list[i].first_name, len);
        len = phone->contact_list[i].last_name.length();
        std::cout << "|";
        check_l(phone->contact_list[i].last_name, len);
        len = phone->contact_list[i].nickname.length();
        std::cout << "|";
        check_l(phone->contact_list[i].nickname, len);
        std::cout << "\n";
    }
    return (select_contact(phone));
}
