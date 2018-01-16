/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_env.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:56:15 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/14 20:33:33 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_ENV_CLASS_HPP
# define GAME_ENV_CLASS_HPP

# include <iostream>
# include <ncurses.h>
# include <time.h>
# include "asteroid.class.hpp"
# include "falcon.class.hpp"

# define MAP_X		50
# define MAP_Y		50
# define MAX_OBS	25
# define MAX_LAZ	10

class	game_env
{
	protected:

		unsigned int	_time;
		unsigned int	_frame;

	public:

		game_env(void);
		game_env(game_env const &obj);
		game_env &	operator=(game_env const &obj);
		~game_env(void);

		void	game_start(void);
		int		check_laz_coll(void);
		int		check_ship_coll(void);

		unsigned int	nbLazers;
		asteroid *		obstacles;
	//	stars *			stars;
		falcon *		player;
		lazer *			lazers;
		unsigned int	nbasteroid;
};

# endif
