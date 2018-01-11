/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonebuk.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:41:40 by daniella          #+#    #+#             */
/*   Updated: 2018/01/10 16:41:42 by daniella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream.h>
#include "sample.class.hpp"

fonebuk::fonebuk(void){
    std::cout << "Constructor called" << std::endl;
    return;
};

fonebuk::~fonebuk(void){
    std::cout << "Destructor called" << std::endl;
    return;
};
