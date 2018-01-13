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
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(void); //constructor (should take no parameters)
		FragTrap(std::string const name); //named constructor
		FragTrap(FragTrap const &obj); //copy constructor
		~FragTrap(void); //destructor

		FragTrap &	operator=(FragTrap const &obj); //assignation operator
		void		vaulthunter_dot_exe(std::string const & target);
};

# endif
