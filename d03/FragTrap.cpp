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

FragTrap::FragTrap(std::string name) : _name(name), _hp(100), _max_hp(100),
									_energy(100), _max_energy(100), _level(1),
									_attack_dmg(30), _ranged_dmg(20),
									_armor_rating(5){
	std::cout << "fresh new robot named " << this->_name << " was built"
		<< std::endl;
	return;
};

FragTrap::FragTrapCopy(const FragTrap &obj) : _name(obj._name), _hp(obj._hp),
											_max_hp(obj._max_hp),
											_energy(obj._energy),
											_max_energy(obj._max_energy),
											_level(obj._level),
											_attack_dmg(obj._attack_dmg),
											_ranged_dmg(obj._ranged_dmg),
											_armor_rating(obj._armor_rating){
	std::cout << "robot " << this->_name << " has been copied" << std::endl;
	return;
};

FragTrap::rangedAttack(std::string const & target){
	std::cout << this->_name << attacks
};

FragTrap::meleeAttack(std::string const & target){

};

FragTrap::takeDamage(unsigned int amount){
	if (amount - this->_armor_rating <= this->_hp){
		this->_hp -= amount - this->_armor_rating;
		std::cout << this->_name << " the robot took " <<
			amount - this->_armor_rating <<
			" points of damage and is currently at " << this->_hp << " hp"
			<< std::endl;
	}
	else {
		this->_hp = 0;
		std::cout << "your robot is fuckin dead kiddo" << std::endl;
		//maybe call the destructor here? makes intuitive sense
	}
	return;
};

FragTrap::beRepaired(unsigned int amount){
	if (amount + this->_hp <= this->_max_hp){
		this->_hp += amount;
		std::cout << this->_name << " the robot was healed for " << amount <<
			" points and is currently at " << this->_hp << " hp" << std::endl;
	}
	else {
		this->_hp = this->_max_hp;
		std::cout << "your robot is as healthy as a chunk of non-organic matter
		could ever be" << std::endl;
	}
	return;
};

FragTrap::vaulthunter_dot_exe(std::string const & target){
	if ()
	return;
};

FragTrap::~FragTrap(void){
	std::cout << this->_name << "went to the scrap yard" << std::endl;
	return;
};
