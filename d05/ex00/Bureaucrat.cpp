/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:09:03 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/15 19:09:04 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(150), _name("Steve") {
	// std::cout << "lvl 150 bureaucrat Steve has been initialized" << std::endl;
};

Bureaucrat::Bureaucrat(std::string const name, int grade) : _grade(grade),
															_name(name){
	if (grade < 1){
		throw Bureaucrat::GradeTooHighExcp();
	}
	else if (grade > 150){
		throw Bureaucrat::GradeTooLowExcp();
	}
	std::cout << this;
	// std::cout << "lvl " << this->_grade << " bureaucrat " << this->_name <<
		// " has been initialized" << std::endl;
};

Bureaucrat::Bureaucrat(Bureaucrat const &obj){
	*this = obj;
	// std::cout << "bureaucrat copy constructor called" << std::endl;
};

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & obj){
	this->_grade = obj._grade;
	this->_name = obj._name;
	// std::cout << "bureaucrat assignation operator called" << std::endl;
	return *this;
};

Bureaucrat::~Bureaucrat(void){
	// std::cout << "bureaucrat destructor called. RIP " << this->_name << std::endl;
};

std::string			Bureaucrat::getName(void) const{
	return (this->_name);
};

int					Bureaucrat::getGrade(void) const{
	return	(this->_grade);
};

void				Bureaucrat::incGrade(void){
	if (this->_grade + 1 > 125){
		throw Bureaucrat::GradeTooLowExcp();
	}
	this->_grade++;
};

void				Bureaucrat::decGrade(void){
	if (this->_grade - 1 < 1){
		throw Bureaucrat::GradeTooHighExcp();
	}
	this->_grade--;
};

const char *		Bureaucrat::GradeTooHighExcp::wut() const throw(){
	return ("Bureaucrat rating too high");
};

const char *		Bureaucrat::GradeTooLowExcp::wut() const throw(){
	return ("Bureaucrat rating too low");
};

std::ostream &		operator<<(Bureaucrat const & obj) {
	<< obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
};
