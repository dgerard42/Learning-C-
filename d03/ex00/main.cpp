/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 19:26:27 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/11 19:26:29 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int				main(){

	srand(time(0));
	FragTrap	robot_0;
	FragTrap	robot_2("caroline");

	robot_0.rangedAttack("ROWBOAT");
	robot_0.meleeAttack("XATHRON, DESTROYER OF WORLDS");
	robot_0.takeDamage(42);
	robot_0.beRepaired(13);
	FragTrap	robot_1  = robot_0;
	robot_0.beRepaired(420);
	robot_0.vaulthunter_dot_exe("WINTERGREEN");
	robot_0.takeDamage(420);
	return (0);
}
