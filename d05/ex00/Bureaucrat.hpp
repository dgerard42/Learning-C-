/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:09:16 by dgerard           #+#    #+#             */
/*   Updated: 2018/01/15 19:09:39 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Bureaucrat
{
	protected:

		int			_grade;
		std::string	_name;

	public:

		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &obj);
		Bureaucrat &	operator=(Bureaucrat const &obj);
		~Bureaucrat(void);

		std::string		getName(void) const;
		int				getGrade(void) const;
		void			incGrade(void);
		void			decGrade(void);
		std::ostream &	operator<<(Bureaucrat const & obj);

		class	GradeTooHighExcp: public std::exception {

			public:

				virtual const char *wut() const throw();

		};

		class	GradeTooLowExcp: public std::exception {

			public:

				virtual const char *wut() const throw();

		};

};

# endif
