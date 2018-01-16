/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_env.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:56:08 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/14 20:43:53 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_env.class.hpp"

game_env::game_env() : _time(0), _frame(0), nbLazers(0) {
	this->player = new falcon();
	this->obstacles = new asteroid[MAX_OBS];
	this->lazers = new lazer[MAX_LAZ];
	//this->stars = new stars[50];
	std::cout << "game_env constructor called" <<  std::endl;
};

game_env::game_env(game_env const &obj) : _time(obj._time), _frame(obj._frame){
	*this = obj;
	std::cout << "game_env copy constructor called" << std::endl;
};

game_env &	game_env::operator=(game_env const & obj){
	this->_time = obj._time;
	this->_frame = obj._frame;
	for (int i = 0; i < MAX_OBS; i++)
		obstacles[i] = obj.obstacles[i];
	std::cout << "game_env assignation operator called" << std::endl;
	return *this;
};

game_env::~game_env(void){
	delete this->player;
	delete [] this->obstacles;
	delete [] this->lazers;
	std::cout << "game_env destructor called" << std::endl;
};

int		game_env::check_laz_coll(void){
	int x_check;
	int	y_check;

	for (int j = 0; j < MAX_LAZ; j++){
		for (int i = 0; i < MAX_OBS; i++){
			x_check = this->obstacles[i].get_x();
			y_check = this->obstacles[i].get_y();
			if (this->lazers[j].get_x() == x_check && this->lazers[j].get_y() == y_check)
				return (1);
		}
	}
	return (0);
};

int		game_env::check_ship_coll(void){
	int x_check;
	int	y_check;

	for (int i = 0; i < MAX_OBS; i++){
		x_check = this->obstacles[i].get_x();
		y_check = this->obstacles[i].get_y();
		if (this->player->get_x() == x_check && this->player->get_y() == y_check)
			return (1);
	}
	return (0);
};
