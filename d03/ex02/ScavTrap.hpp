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
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void); //constructor (should take no parameters)
		ScavTrap(std::string const name); //named constructor
		ScavTrap(ScavTrap const &obj); //copy constructor
		~ScavTrap(void); //destructor

		ScavTrap &	operator=(ScavTrap const &obj); //assignation operator
		void		challengeNewcomer(std::string const & target);
};

# endif
