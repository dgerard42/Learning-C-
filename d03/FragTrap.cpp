/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 19:26:05 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/11 19:26:06 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name)
{
	this->_hp = 100;
	this->_max_hp = 100;
	this->_energy = 100;
	this->_max_energy = 100;
	this->_level = 1;
	this->_attack_dmg = 30;
	this->_ranged_dmg = 20;
	this->_armor_rating = 5;
	std::cout << "Fresh new robot named " << this->_name << " was built"
		<< std::endl;
	return;
};

FragTrap::FragTrapCopy(const FragTrap &obj)
{
	
};

FragTrap::rangedAttack(std::string, const & target)
{

};

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << "went to the scrap yard" << std::endl;
	return;
};
