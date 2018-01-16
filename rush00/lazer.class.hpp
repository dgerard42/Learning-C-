/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lazer.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 15:05:16 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/14 19:05:29 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAZER_CLASS_HPP
# define LAZER_CLASS_HPP

#include "env_obj.class.hpp"
#include <ncurses.h>

class	lazer : public env_obj
{
	public:

		lazer(void);
		lazer(int x, int y);
		lazer(lazer const &obj);
		lazer &	operator=(lazer const &obj);
		~lazer(void);
};

# endif
