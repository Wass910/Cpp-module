#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat ;

class Form {
    public:
        Form( void );
        Form( std::string const & name, int const Tosign, int const Toexecute);
        Form( Form const & src );
        ~Form(void);
        
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw()
                {
                    return ("Level is too high.");
                }
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw()
                {
                    return ("Level is too low.");
                }
        };

        
        std::string getName( void ) const;
        void        beSigned( Bureaucrat const & src);
        int         getGradeToSign( void ) const;
        int         getGradeToExecute( void ) const;
        bool        getSign( void ) const;
        Form & operator=( Form const & src );
        
    private:
        const std::string _name;
        bool _sign;
        const int _gradeToSign;
        const int _gradeToExecute;
};

std::ostream &  operator<<( std::ostream & o, Form const & i );

#endif