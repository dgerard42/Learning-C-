/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonebuk.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:41:51 by daniella          #+#    #+#             */
/*   Updated: 2018/01/10 16:41:52 by daniella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "fonebuk.class.hpp"

int         main()
{
  fonebuk * people = fonebuk[8];
  std::string   line;
  int           index;

  while (line != "EXIT")
  {
    std::cout << "You can, ADD, SEARCH, or EXIT." << std::endl;
    std::getline(std::cin, line);
    if (line == "ADD")
        fonebuk::add_contact();
    else if (line == "SEARCH")
    {
        fonebuk::display_index();
        std::getline(std::cin, line);
        if ()
    }
    else if (line != "EXIT")
      std::cout << "I'm sorry, I could not understand you. Try again." << std::endl;
  }
  return;
}
