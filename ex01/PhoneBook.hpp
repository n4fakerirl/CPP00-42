/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:47:17 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/23 15:10:25 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
    Contact _contact_list[8];
    int     _nbr_contact;

    public:
    PhoneBook();
    ~PhoneBook();
    Contact *getList(void);
    int getNbr(void);
    void incNbr(int i);
    void setNbr(int i);
};


int add_contact(PhoneBook *phone);
int printbook(PhoneBook *phone);
long ft_atol(const char *str);
int allowed(std::string str);
int string_nbr(std::string str);
int check_sp(std::string str);

#endif