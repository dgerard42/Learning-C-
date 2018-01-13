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

FragTrap::FragTrap() : ClapTrap() {
	this->_hp = 100;
	this->_max_hp = 100;
	this->_energy = 100;
	this->_max_energy = 100;
	this->_attack_dmg = 30;
	this->_ranged_dmg = 20;
	this->_armor_rating = 5;
	std::cout << "a fresh new robot named " << this->_name << " was built"
		<< std::endl;
	return;
};

FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
	this->_hp = 100;
	this->_max_hp = 100;
	this->_energy = 100;
	this->_max_energy = 100;
	this->_attack_dmg = 30;
	this->_ranged_dmg = 20;
	this->_armor_rating = 5;
	std::cout << "a fresh new robot named " << this->_name << " was built"
		<< std::endl;
	return;
};

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj) {
	*this = obj;
	std::cout << "robot " << this->_name << " has been copied" << std::endl;
	return;
};

FragTrap &	FragTrap::operator=(FragTrap const & obj){
	this->_hp = obj._hp;
	this->_max_hp = obj._max_hp;
	this->_energy = obj._energy;
	this->_max_energy = obj._max_energy;
	this->_level = obj._level;
	this->_attack_dmg = obj._attack_dmg;
	this->_ranged_dmg = obj._ranged_dmg;
	this->_armor_rating = obj._armor_rating;
	std::cout << "robot " << this->_name << " has been reprogrammed";
	this->_name = obj._name;
	std::cout << " to be like " << this->_name << std::endl;
	return *this;
};

void	FragTrap::vaulthunter_dot_exe(std::string const & target){
	if (this->_energy >= 25){
		int index = std::rand() % (4 - 0 + 1);
		std::string attacks[5] = {"an electric zap", "a sonic boop",
			"a lazer shot", "a confession of sentience", "pathetic weeping"};
		std::string	results[5] = {" gets some of its electronics fried",
			" gets vibrated violently", " gets a big hole melted in its armor",
			" suddenly realizes that is doesn't know its own purpose either",
			" starts to feel sad"};
		if (index == 1 || index == 2){
			std::cout << this->_name << " attacks " << target <<
				" with " << attacks[index] << " at range for " <<
				this->_ranged_dmg << " points and " <<
				target << results[index] << std::endl;
		}
		else {
			std::cout << this->_name << " attacks " << target <<
				" with " << attacks[index] << " at close range for " <<
				this->_attack_dmg << " points, and " <<
				target << results[index] << std::endl;
		}
		this->_energy -= 25;
	}
	else {
		std::cout << "you don't have the energy points to do that" << std::endl;
	}
	return;
};

FragTrap::~FragTrap(void){
	std::cout << this->_name << " went to the scrap yard" << std::endl;
	return;
};
