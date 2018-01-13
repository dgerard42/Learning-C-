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

ScavTrap::ScavTrap() : _hp(100), _max_hp(100), _energy(50), _max_energy(50),
						_level(1), _attack_dmg(20), _ranged_dmg(15),
						_armor_rating(3){
	int index = std::rand() % (4 - 0 + 1);
	std::string names[5] = {"Abe", "Marlow", "The Serge", "Gril", "Coco"};
	this->_name = names[index];
	std::cout << "a shiny new robot named " << this->_name << " was built"
		<< std::endl;
	return;
};

ScavTrap::ScavTrap(std::string const name) :  _hp(100), _max_hp(100),
											_energy(100), _max_energy(100),
											_level(1), _attack_dmg(30),
											_ranged_dmg(20), _armor_rating(5),
											_name(name){
	std::cout << "a shiny new robot named " << this->_name << " was built"
		<< std::endl;
};

ScavTrap::ScavTrap(ScavTrap const &obj) : _hp(obj._hp), _max_hp(obj._max_hp),
										_energy(obj._energy),
										_max_energy(obj._max_energy),
										_level(obj._level),
										_attack_dmg(obj._attack_dmg),
										_ranged_dmg(obj._ranged_dmg),
										_armor_rating(obj._armor_rating),
										_name(obj._name){
	std::cout << "robot " << this->_name << " has been cloned" << std::endl;
	return;
};

void	ScavTrap::rangedAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
		" at range with a strength of " << this->_ranged_dmg <<
		std::endl;
	return;
};

void	ScavTrap::meleeAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
		" at close range with an attack stength of " << this->_ranged_dmg <<
		std::endl;
	return;
};

void	ScavTrap::takeDamage(unsigned int amount){
	if (amount - this->_armor_rating <= this->_hp){
		this->_hp -= amount - this->_armor_rating;
		std::cout << this->_name << " took " << amount - this->_armor_rating <<
			" points of damage but still lives with " << this->_hp << " hp"
			<< std::endl;
	}
	else {
		this->_hp = 0;
		std::cout << this->_name << " took " << amount - this->_armor_rating <<
			" points of damage and is at 0 hp" << std::endl;
		std::cout << "Your robot died, RIP in pieces" << std::endl;
	}
	return;
};

void	ScavTrap::beRepaired(unsigned int amount){
	if (amount + this->_hp <= this->_max_hp){
		this->_hp += amount;
		std::cout << this->_name << " was healed " << amount <<
			" hp and how has " << this->_hp << " hp" << std::endl;
	}
	else {
		this->_hp = this->_max_hp;
		std::cout << "Your robot is at max hp and looks fresh as heck" << std::endl;
	}
	return;
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
