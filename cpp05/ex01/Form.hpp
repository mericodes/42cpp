
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;
	public:
		/*	DEFAULT CONSTRUCTOR	*/
		Form();
		/*	NAME CONSTRUCTOR	*/
		Form(std::string const &name, int signGrade, int execGrade);
		/*	COPY CONSTRUCTOR	*/
		Form(const Form &copy);
		/*	COPY ASSIGNMENT OPERATOR OVERLOAD	*/
		Form& operator=(const Form &other);

		/*	GETERS AND SETERS	*/
		std::string const getName() const;
		int	getSignGrade() const;
		int	getExecGrade() const;
		bool	getSigned() const;
		std::string returnSigned() const;

		/*	EXCEPTIONS	*/
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
		class FormSignedException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		/*	METHODS	*/
		void beSigned(const Bureaucrat &bur);
		/*	DESTRUCTOR	*/
		~Form();
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif