/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:17:40 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/12/03 18:56:13 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAFT_HPP
# define BUREAUCRAFT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

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
		void signForm(AForm &form);
		void executeForm(AForm const &form);
		
		/*	DESTRUCTOR	*/
		~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);

#endif