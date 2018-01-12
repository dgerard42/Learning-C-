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

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

class	FragTrap
{
	private:
		int			_hp;
		int			_max_hp;
		int			_energy;
		int			_max_energy;
		int			_level;
		int			_attack_dmg;
		int			_ranged_dmg;
		int			_armor_rating;

		std::string	_name;

	public:
		FragTrap(std::string name);
		FragTrapCopy(const FragTrap & obj);
		~FragTrap(void);

		rangedAttack(std::string const & target);
		meleeAttack(std::string const & target);
		takeDamage(unsigned int amount);
		beRepaired(unsigned int amount);
};

# endif
