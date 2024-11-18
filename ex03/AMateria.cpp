#include"AMateria.hpp"

AMateria::AMateria()
{
    AM_type = "";
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type)
{
    AM_type = type;
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
    AM_type = copy.AM_type;
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& copy)
{
    if (this != &copy)
    {
        AM_type = copy.AM_type;
    }
    return(*this);
}

std::string const & AMateria::getType() const
{
    return(AM_type);
}
