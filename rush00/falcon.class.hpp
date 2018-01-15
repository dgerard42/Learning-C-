/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   falcon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:51:04 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 13:51:06 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FALCON_CLASS_HPP
# define FALCON_CLASS_HPP

#include "env_obj.class.hpp"
#include <ncurses.h>
#include <iostream>

class	falcon : public env_obj
{
	protected:

		unsigned int	_hp;

	public:

		falcon(void);
		falcon(falcon const &obj);
		falcon &	operator=(falcon const &obj);
		~falcon(void);

		// lazer &		fire_lazer(int const x, int const y);
		void		user_control();
};

# endif
