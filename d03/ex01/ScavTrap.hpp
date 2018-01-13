/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:17:39 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/12 16:17:40 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class	ScavTrap
{
	private:
		unsigned int	_hp;
		unsigned int	_max_hp;
		unsigned int	_energy;
		unsigned int	_max_energy;
		unsigned int	_level;
		unsigned int	_attack_dmg;
		unsigned int	_ranged_dmg;
		unsigned int	_armor_rating;

		std::string		_name;

	public:
		ScavTrap(void); //constructor (should take no parameters)
		ScavTrap(std::string const name); //named constructor
		ScavTrap(ScavTrap const &obj); //copy constructor
		~ScavTrap(void); //destructor

		ScavTrap &	operator=(ScavTrap const &obj); //assignation operator
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(std::string const & target);
};

# endif
