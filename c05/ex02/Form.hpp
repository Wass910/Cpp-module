#ifndef AFORM_H
# define AFORM_H

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat ;

class AForm {
    public:
        AForm( void );
        AForm( std::string const & name, int const Tosign, int const Toexecute);
        AForm( AForm const & src );
        virtual ~AForm(void);
        
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

        class Unsign : public std::exception {
            public:
                virtual const char* what() const throw()
                {
                    return ("Form is unsign.");
                }
        };

        class ExecuteFail : public std::exception {
            public:
                virtual const char* what() const throw()
                {
                    return ("the bureaucrat can't execute the form.");
                }
        };

        std::string getName( void ) const;
        virtual void        beSigned( Bureaucrat const & src);
        virtual int         getGradeToSign( void ) const;
        virtual int         getGradeToExecute( void ) const;
        virtual bool        getSign( void ) const;
        AForm & operator=( AForm const & src );
        virtual void    execute (Bureaucrat const & executor) const = 0;
        
    private:
        const std::string _name;
        bool _sign;
        const int _gradeToSign;
        const int _gradeToExecute;
};

std::ostream &  operator<<( std::ostream & o, AForm const & i );

#endif