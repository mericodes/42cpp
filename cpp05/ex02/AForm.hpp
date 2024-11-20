
#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;
	public:
		AForm();
		AForm(std::string const &name, int signGrade, int execGrade);
		AForm(const AForm &copy);
		AForm& operator=(const AForm &other);
		virtual ~AForm();


		std::string const getName() const;
		int	getSignGrade() const;
		int	getExecGrade() const;
		bool	getSigned() const;
		std::string returnSigned() const;


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
		class AFormSignedException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		void beSigned(const Bureaucrat &bur);

		
};

std::ostream &operator<<(std::ostream &out, const AForm &AForm);

#endif