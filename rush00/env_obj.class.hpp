/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_obj.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:55:37 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/13 14:55:38 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_OBJ_HPP
# define ENV_OBJ_HPP

#include "game_env.class.hpp"

class	env_obj
{
	protected:

		unsigned int	_color;
		unsigned int	_size;
		unsigned int	_speed;
		int				_x;
		int				_y;
		char			_symbol;

	public:

		env_obj(void);
		env_obj(env_obj const &obj);
		env_obj &	operator=(env_obj const &obj);
		~env_obj(void);

		unsigned int	get_color(void);
		unsigned int	get_size(void);
		unsigned int	get_speed(void);
		int 			get_x(void);
		int 			get_y(void);
		char			get_symbol(void);

		void			set_x(int x);
		void			set_y(int y);
};

# endif
