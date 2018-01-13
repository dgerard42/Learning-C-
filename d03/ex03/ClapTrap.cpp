/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:05:35 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/12 17:05:36 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _level(1){
	int index = std::rand() % (11 - 0 + 1);
	std::string names[12] = {"Old Reginald", "Alice", "Vladislav", "Murt",
		"Ebony Darkness Dementia Raven Way", "Blue", "Carob Chip", "Luke",
		"Noodle", "Feynman", "Elon", "Susan"};
	this->_name = names[index];
	std::cout << "an adorable new robot named " << this->_name << " was built"
		<< std::endl;
	return;
};

ClapTrap::ClapTrap(std::string const name) : _level(1), _name(name){
	std::cout << "an adorable new robot named " << this->_name << " was built"
		<< std::endl;
	return;
};

ClapTrap::ClapTrap(ClapTrap const &obj) : _hp(obj._hp), _max_hp(obj._max_hp),
										_energy(obj._energy),
										_max_energy(obj._max_energy),
										_level(obj._level),
										_attack_dmg(obj._attack_dmg),
										_ranged_dmg(obj._ranged_dmg),
										_armor_rating(obj._armor_rating),
										_name(obj._name){
	std::cout << "robot " << this->_name << " has been duplicated" << std::endl;
	return;
};

ClapTrap &	ClapTrap::operator=(ClapTrap const & obj){
	this->_hp = obj._hp;
	this->_max_hp = obj._max_hp;
	this->_energy = obj._energy;
	this->_max_energy = obj._max_energy;
	this->_level = obj._level;
	this->_attack_dmg = obj._attack_dmg;
	this->_ranged_dmg = obj._ranged_dmg;
	this->_armor_rating = obj._armor_rating;
	std::cout << "robot " << this->_name << " has been born again as ";
	this->_name = obj._name;
	std::cout << this->_name << std::endl;
	return *this;
};

void	ClapTrap::rangedAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
		" at range for " << this->_ranged_dmg <<
		std::endl;
	return;
};

void	ClapTrap::meleeAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
		" at close range for " << this->_ranged_dmg <<
		std::endl;
	return;
};

void	ClapTrap::takeDamage(unsigned int amount){
	if (amount - this->_armor_rating <= this->_hp){
		this->_hp -= amount - this->_armor_rating;
		std::cout << this->_name << " took " << amount - this->_armor_rating <<
			" damage but still has " << this->_hp << " hp"
			<< std::endl;
	}
	else {
		this->_hp = 0;
		std::cout << this->_name << " took " << amount - this->_armor_rating <<
			" damage and has no hp left" << std::endl;
		std::cout << "ashes return to ashes, your robot returns to scrap"
			<< std::endl;
	}
	return;
};

void	ClapTrap::beRepaired(unsigned int amount){
	if (amount + this->_hp <= this->_max_hp){
		this->_hp += amount;
		std::cout << this->_name << " was healed for " << amount <<
			" hp and is now at " << this->_hp << " hp" << std::endl;
	}
	else {
		this->_hp = this->_max_hp;
		std::cout << "Your robot is healed to max hp, it looks sturdy and ready to take on the world"
			<< std::endl;
	}
	return;
};

ClapTrap::~ClapTrap(void){
	std::cout << this->_name << "'s remains become a hip succulent planter at a local Gastropub"
		<< std::endl;
	return;
};
