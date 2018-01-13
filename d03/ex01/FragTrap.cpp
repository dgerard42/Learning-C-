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

FragTrap::FragTrap() : _hp(100), _max_hp(100), _energy(100), _max_energy(100),
						_level(1), _attack_dmg(30), _ranged_dmg(20),
						_armor_rating(5){
	int index = std::rand() % (4 - 0 + 1);
	std::string names[5] = {"Nug", "Zoop", "Lena", "Chorrito", "Mr.Robot"};
	this->_name = names[index];
	std::cout << "a fresh new robot named " << this->_name << " was built"
		<< std::endl;
	return;
};

FragTrap::FragTrap(std::string const name) :  _hp(100), _max_hp(100),
											_energy(100), _max_energy(100),
											_level(1), _attack_dmg(30),
											_ranged_dmg(20), _armor_rating(5),
											_name(name){
	std::cout << "a fresh new robot named " << this->_name << " was built"
		<< std::endl;
};

FragTrap::FragTrap(FragTrap const &obj) : _hp(obj._hp), _max_hp(obj._max_hp),
										_energy(obj._energy),
										_max_energy(obj._max_energy),
										_level(obj._level),
										_attack_dmg(obj._attack_dmg),
										_ranged_dmg(obj._ranged_dmg),
										_armor_rating(obj._armor_rating),
										_name(obj._name){
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

void	FragTrap::rangedAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
		" from a distance with an attack strength of " << this->_ranged_dmg <<
		std::endl;
	return;
};

void	FragTrap::meleeAttack(std::string const & target){
	std::cout << this->_name << " attacks " << target <<
		" from up close with an attack stength of " << this->_ranged_dmg <<
		std::endl;
	return;
};

void	FragTrap::takeDamage(unsigned int amount){
	if (amount - this->_armor_rating <= this->_hp){
		this->_hp -= amount - this->_armor_rating;
		std::cout << this->_name << " took " << amount - this->_armor_rating <<
			" points of damage and is currently at " << this->_hp << " hp"
			<< std::endl;
	}
	else {
		this->_hp = 0;
		std::cout << this->_name << " took " << amount - this->_armor_rating <<
			" points of damage and is at 0 hp" << std::endl;
		std::cout << "your robot is fuckin dead kiddo" << std::endl;
	}
	return;
};

void	FragTrap::beRepaired(unsigned int amount){
	if (amount + this->_hp <= this->_max_hp){
		this->_hp += amount;
		std::cout << this->_name << " was healed for " << amount <<
			" points and is currently at " << this->_hp << " hp" << std::endl;
	}
	else {
		this->_hp = this->_max_hp;
		std::cout << "Your robot is healed, and is now as healthy as a chunk of non-organic matter could ever be"
			<< std::endl;
	}
	return;
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
