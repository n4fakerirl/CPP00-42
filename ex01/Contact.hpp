/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:36:02 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/23 15:06:13 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Contact
{
    private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;

    public:
    Contact();
    ~Contact();
    std::string getFirstName(void);
    void setFirstName(std::string name); 
    std::string getLastName(void);
    void setLastName(std::string name);
    std::string getNickname(void);
    void setNickname(std::string name);
    std::string getPhoneNumber(void);
    void setPhoneNumber(std::string name);
    std::string getDarkestSecret(void);
    void setDarkestSecret(std::string name);
};