/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:17:40 by mlopez-i          #+#    #+#             */
/*   Updated: 2024/11/20 19:49:49 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*	DEFAULT CONSTRUCTOR	*/
Bureaucrat::Bureaucrat() : _name("Noname"), _grade(3)
{
	// std::cout << "Bureaucrat default constructor" << std::endl;
}

/*	NAME CONSTRUCTOR	*/
Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	// std::cout << "Bureaucrat name constructor called. Name is: " << name;
	// std::cout << " and grade is: " << grade << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

/*	COPY CONSTRUCTOR	*/
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	// std::cout << "Bureaucrat copy assignment operator" << std::endl;
	*this = copy;
}

/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	// std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		// _name = other._name;
		_grade = other.getGrade();
	}
	return (*this);
}

/*	GETERS AND SETERS	*/
const std::string &Bureaucrat::getName() const
{
	return (_name);
}

const int &Bureaucrat::getGrade() const
{
	return (_grade);
}

/*	MEMBER FUNCTIONS	*/
void Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	else
		_grade--;
}
void Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	else
		_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is too high. Range goes from 150 to 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is too low. Range goes from 150 to 1");
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed form " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " couldn't sign " << form.getName() << " because " << e.what() << '\n';
	}
	
}

/*	DESTRUCTOR	*/
Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat destructor" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur)
{
	return (out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".");
}
