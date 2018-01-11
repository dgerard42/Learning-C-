/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonebuk.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:41:40 by daniella          #+#    #+#             */
/*   Updated: 2018/01/10 16:41:42 by daniella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream.h>
#include "sample.class.hpp"

int	Phonebook::_numContacts = 0;

fonebuk::fonebuk(void)
{
    std::cout << "Constructor called" << std::endl;
    return;
};

fonebuk::~fonebuk(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
};

void	fonebuk::print_contact(void)
{
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "login: " << this->_login << std::endl;
	std::cout << "postal address: " << this->_address << std::endl;
	std::cout << "email: " << this->_email << std::endl;
	std::cout << "phone number: " << this->_phone << std::endl;
	std::cout << "birthday: " << this->_birthday << std::endl;
	std::cout << "favorite meal: " << this->_fav_meal << std::endl;
	std::cout << "underwear color: " << this->_underwear << std::endl;
	std::cout << "darkest secret: " << this->_secret << std::endl;
};

void   fonebuk::add_contact(void)
{
  if (fonebuk::contact_number == 8)
	{
		std::cout << "Error : Phonebook is Full." << std::endl;
		return ;
	}

	fonebuk::contact_number += 1;

	std::cout << "Enter your first name: ";
	std::getline (std::cin, this->first_name, '\n');

	std::cout << "Enter your last name: ";
	std::getline (std::cin, this->last_name);

	std::cout << "Enter your nickname: ";
	std::getline (std::cin, this->nickname);

	std::cout << "Enter your login: ";
	std::getline (std::cin, this->_login);

	std::cout << "Enter your postal address: ";
	std::getline (std::cin, this->_address);

	std::cout << "Enter your email: ";
	std::getline (std::cin, this->_email);

	std::cout << "Enter your phone number: ";
	std::getline (std::cin, this->_phone);

	std::cout << "Enter your birthday: ";
	std::getline (std::cin, this->_birthday);

	std::cout << "What is your favorite meal? ";
	std::getline (std::cin, this->_fav_meal);

	std::cout << "What is your underwear color? ";
	std::getline (std::cin, this->_underwear);

	std::cout << "What is your darkest secret? ";
  std::getline (std::cin, this->_secret);
};

void    fonebuk::() 
{
	std::cout << std::setfill (' ') << std::setw (10);
	if (this->firstname.size() > 10)
		std::cout << this->firstname.substr(0, 9) + ".";
	else
		std::cout << this->firstname;
	std::cout << "|";

	std::cout << std::setfill (' ') << std::setw (10);
	if (this->lastname.size() > 10)
		std::cout << this->lastname.substr(0, 9) + ".";
	else
		std::cout << this->lastname;
	std::cout << "|";

	std::cout << std::setfill (' ') << std::setw (10);
	if (this->nickname.size() > 10)
		std::cout << this->nickname.substr(0, 9) + ".";
	else
		std::cout << this->nickname;

	std::cout << std::endl;
}
