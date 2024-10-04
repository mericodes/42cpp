/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:17:40 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/10/04 16:20:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAFT_HPP
# define BUREAUCRAFT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Bureaucrat();
		/*	NAME CONSTRUCTOR	*/
		Bureaucrat(std::string const &name, int grade);
		/*	COPY CONSTRUCTOR	*/
		Bureaucrat(const Bureaucrat &copy);
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Bureaucrat& operator=(const Bureaucrat &other);

		/*	GETERS AND SETERS	*/
		const std::string &getName() const;
		const int &getGrade() const;

		/*	MEMBER FUNCTIONS	*/
		void incrementGrade();
		void decrementGrade();

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		/*	METHODS	*/
		void signForm(Form &form);

		/*	DESTRUCTOR	*/
		~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);

#endif