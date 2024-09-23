#ifndef BUREAUCRAFT_HPP
# define BUREAUCRAFT_HPP

# include <iostream>
# include <string>

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

		/*	DESTRUCTOR	*/
		~Bureaucrat();
};

#endif