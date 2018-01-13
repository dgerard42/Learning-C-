/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 22:26:33 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/12 22:26:34 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap() {
	this->_hp = 60;
	this->_max_hp = 60;
	this->_energy = 120;
	this->_max_energy = 120;
	this->_attack_dmg = 60;
	this->_ranged_dmg = 5;
	this->_armor_rating = 0;
	std::cout << "a dangerous looking new robot named " << this->_name <<
		" was built" << std::endl;
	return;
};

NinjaTrap::NinjaTrap(std::string const name) : ClapTrap(name) {
	this->_hp = 60;
	this->_max_hp = 60;
	this->_energy = 120;
	this->_max_energy = 120;
	this->_attack_dmg = 60;
	this->_ranged_dmg = 5;
	this->_armor_rating = 0;
	std::cout << "a dangerous looking new robot named " << this->_name <<
		" was built" << std::endl;
	return;
};

NinjaTrap::NinjaTrap(NinjaTrap const &obj) : ClapTrap(obj){
	*this = obj;
	std::cout << "robot " << this->_name << " has been replicated" << std::endl;
	return;
};

NinjaTrap &	NinjaTrap::operator=(NinjaTrap const & obj){
	this->_hp = obj._hp;
	this->_max_hp = obj._max_hp;
	this->_energy = obj._energy;
	this->_max_energy = obj._max_energy;
	this->_level = obj._level;
	this->_attack_dmg = obj._attack_dmg;
	this->_ranged_dmg = obj._ranged_dmg;
	this->_armor_rating = obj._armor_rating;
	std::cout << "Ninja robot " << this->_name << " has been trained";
	this->_name = obj._name;
	std::cout << " to become like " << this->_name << std::endl;
	return *this;
};

void	NinjaTrap::ninjaShoebox(std::string const & target){
	int index = std::rand() % (4 - 0 + 1);
	std::string moves[5] = {"a flying star", "a stealth blow", "a flying kick",
		"a sneaky stab", "a gun with a silencer"};
	std::cout << this->_name << " attacks " << target << " with " <<
		moves[index] << std::endl;
	return;
};

NinjaTrap::~NinjaTrap(void){
	std::cout << this->_name << " rusts away into dust" << std::endl;
	return;
};
