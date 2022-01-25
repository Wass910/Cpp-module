#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm( void );
        RobotomyRequestForm( std::string const & target);
        RobotomyRequestForm( RobotomyRequestForm const & src );
        ~RobotomyRequestForm(void);

        
        RobotomyRequestForm & operator=( RobotomyRequestForm const & src );
        std::string getTarget( void ) const;
        virtual void    execute(Bureaucrat const & executor) const;
        void    drillNoise( void ) const;
        
    private:
        std::string _target;
};

#endif