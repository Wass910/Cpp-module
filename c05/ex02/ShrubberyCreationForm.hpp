#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public AForm {
    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( std::string const & target);
        ShrubberyCreationForm( ShrubberyCreationForm const & src );
        ~ShrubberyCreationForm(void);

        
        ShrubberyCreationForm & operator=( ShrubberyCreationForm const & src );
        std::string getTarget( void ) const;
        virtual void    execute (Bureaucrat const & executor) const;
        void    drawThree( void ) const;
        
    private:
        std::string _target;
};

#endif