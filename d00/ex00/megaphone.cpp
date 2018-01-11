/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:09:13 by daniella          #+#    #+#             */
/*   Updated: 2018/01/10 16:09:25 by daniella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int             main(int argc, char **argv)
{
  if (argc == 1)
		  std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  else if (argc > 1)
	{
		for (int i = 0; argv[1][i] != 0; i++)
      argv[1][i] = toupper(argv[1][i]);
		std::cout << argv[1] << std::endl;
  }
}
