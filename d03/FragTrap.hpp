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

# include <iosstream>

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
		FragTrap(std::string name); //constructor
		FragTrapCopy(const FragTrap &obj); //copy constructor
		~FragTrap(void); //destructor

		rangedAttack(std::string const & target);
		meleeAttack(std::string const & target);
		takeDamage(unsigned int amount);
		beRepaired(unsigned int amount);
};

# endif
