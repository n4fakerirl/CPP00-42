/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:36:33 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/10 11:52:40 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int compare(std::string str, PhoneBook *phone)
{
    if (!ft_strcmp(str, "EXIT"))
        return (0);
    else if (!ft_strcmp(str, "ADD"))
    {
        if (add_contact(phone) == 0)
            return (0);
        return (1);
    }
    else if (!ft_strcmp(str, "SEARCH"))
    {
        if (printbook(phone) == 0)
            return (0);
        return (1);
    }
    else
        return (2);
}

void freephone(PhoneBook *phone)
{
    delete phone;
}

int main(void)
{
    std::string str;

    PhoneBook *phone = new PhoneBook;
    std::cout << "---Welcome to the Phonebook !---\n\n[ADD] : save a new contact\n[SEARCH] : display a specific contact\n[EXIT] : exit the phonebook\nPlease, type a command to start\n\n";
    while (1)
    {
        std::cout << "cmd> ";
        std::getline(std::cin, str);
        if (!compare(str, phone))
            return (freephone(phone), 0);
    }
}
