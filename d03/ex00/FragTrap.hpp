/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 19:26:14 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/11 19:26:16 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class	FragTrap
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
		FragTrap(void); //constructor (should take no parameters)
		FragTrap(std::string const name); //named constructor
		FragTrap(FragTrap const &obj); //copy constructor
		~FragTrap(void); //destructor

		FragTrap &	operator=(FragTrap const &obj); //assignation operator
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const & target);
};

# endif
