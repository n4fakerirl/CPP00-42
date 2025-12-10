/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:14:16 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/10 13:41:51 by ocviller         ###   ########.fr       */
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
        phone->contact_list[phone->nbr_contact - 1].first_name = str;
    if (i == 1)
        phone->contact_list[phone->nbr_contact - 1].last_name = str; 
    if (i == 2)
        phone->contact_list[phone->nbr_contact - 1].nickname = str; 
    if (i == 3)
        phone->contact_list[phone->nbr_contact - 1].phone_number = str; 
    if (i == 4)
        phone->contact_list[phone->nbr_contact - 1].darkest_secret = str;
}

int add_contact(PhoneBook *phone)
{
    std::string str;
    
    std::cout << "\n---Contact registration :---\n\n";
    phone->nbr_contact++;
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
        }
        if (i == 3)
        {
            while (!string_nbr(str))
            {
                std::cout << "Only digits are allowed, please enter the phone number again.\n";
                std::getline(std::cin, str);
            }
        }
        else
        {
            while (!allowed(str))
            {
                std::cout << "Only letters, digits, spaces and hyphens are allowed, please try again.\n";
                std::getline(std::cin, str);
            }
        }
        if (phone->nbr_contact == 9)
            phone->nbr_contact = 1;
        fill_contact(i, phone, str);
    }
    std::cout << "\n---Contact created!---\n\n";
    return (1);
}
