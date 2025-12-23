/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:14:16 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/23 15:03:35 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getFirstName(void)
{
    return (this->_first_name);
}

void Contact::setFirstName(std::string name)
{
    this->_first_name = name;
}

std::string Contact::getLastName(void)
{
    return (this->_last_name);
}

void Contact::setLastName(std::string name)
{
    this->_last_name = name;
}
    
std::string Contact::getNickname(void)
{
    return (this->_nickname);
}

void Contact::setNickname(std::string name)
{
    this->_nickname = name;
}

std::string Contact::getPhoneNumber(void)
{
    return (this->_phone_number);
}

void Contact::setPhoneNumber(std::string name)
{
    this->_phone_number = name;
}
    
std::string Contact::getDarkestSecret(void)
{
    return (this->_darkest_secret);
}

void Contact::setDarkestSecret(std::string name)
{
    this->_darkest_secret = name;
}
