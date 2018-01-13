/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 17:05:43 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/12 17:05:44 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	protected:
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
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &obj);
		~ClapTrap(void);

		ClapTrap &	operator=(ClapTrap const &obj);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

# endif
