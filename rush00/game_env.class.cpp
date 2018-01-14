/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_env.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:56:08 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 14:56:10 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "game_env.hpp"

game_env::game_env() {
	std::cout << "game_env constructor called" <<  std::endl;
};

game_env::game_env(game_env const &obj) : _time(obj._time), _frame(_frame),
										_speed(obj._speed),
										_obstacles(obj._obstacles) {
	std::cout << "game_env copy constructor called" << std::endl;
};

game_env &	game_env::operator=(game_env const & obj){
	this->_time = obj._time;
	this->_frame = obj._frame;
	this->_obstacles = obj._obstacles;
	std::cout << "game_env assignation operator called" << std::endl;
	return *this;
};

game_env::~game_env(void){
	std::cout << "game_env destructor called" << std::endl;
};

void	game_env::curses_init(void){
	initscr(void);
	clear(void);
	printw("NCURSES INITIALIZED. PRESS ANY KEY TO CONT.\n");
	getch(void);
	endwin(void);
};
