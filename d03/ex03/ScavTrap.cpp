/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:17:32 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/12 16:17:33 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->_hp = 100;
	this->_max_hp = 100;
	this->_energy = 50;
	this->_max_energy = 50;
	this->_attack_dmg = 20;
	this->_ranged_dmg = 15;
	this->_armor_rating = 3;
	std::cout << "a shiny new robot named " << this->_name << " was built"
		<< std::endl;
	return;
};

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
	this->_hp = 100;
	this->_max_hp = 100;
	this->_energy = 50;
	this->_max_energy = 50;
	this->_attack_dmg = 20;
	this->_ranged_dmg = 15;
	this->_armor_rating = 3;
	std::cout << "a shiny new robot named " << this->_name << " was built"
		<< std::endl;
	return;
};

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj){
	*this = obj;
	std::cout << "robot " << this->_name << " has been cloned" << std::endl;
	return;
};

ScavTrap &	ScavTrap::operator=(ScavTrap const & obj){
	this->_hp = obj._hp;
	this->_max_hp = obj._max_hp;
	this->_energy = obj._energy;
	this->_max_energy = obj._max_energy;
	this->_level = obj._level;
	this->_attack_dmg = obj._attack_dmg;
	this->_ranged_dmg = obj._ranged_dmg;
	this->_armor_rating = obj._armor_rating;
	std::cout << "robot " << this->_name << " has been rebuilt";
	this->_name = obj._name;
	std::cout << " to be like " << this->_name << std::endl;
	return *this;
};


void	ScavTrap::challengeNewcomer(std::string const & target){
	int index = std::rand() % (4 - 0 + 1);
	std::string challenges[5] = {"a game of chess", "a dance off",
		"go vegan for one hour", "a pun off", "edward fortyhands"};
	std::cout << this->_name << " challenges " << target << " to " <<
		challenges[index] << std::endl;
	return;
};

ScavTrap::~ScavTrap(void){
	std::cout << this->_name << "'s remains were sold for $14 on craigslist"
		<< std::endl;
	return;
};
