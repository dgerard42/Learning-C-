/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonebuk.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:41:30 by daniella          #+#    #+#             */
/*   Updated: 2018/01/10 16:41:31 by daniella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FONEBUK_CLASS_H
# define FONEBUK_CLASS_H

class     fonebuk {

public:

      fonebuk(void);
      ~fonebuk(void);
      void	fonebuk::print_contact(void);
      void  fonebuk::add_contact(void);

      int           contact_number;
      std::string   first_name;
      std::string   last_name;
      std::string   nickname;

private:

      std::string   _login;
      std::string   _address;
      std::string   _email;
      std::string   _phone;
      std::string   _birthday;
      std::string   _fav_meal;
      std::string   _underwear;
      std::string   _secret;
};

#endif
