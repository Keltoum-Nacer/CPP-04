#include"AMateria.hpp"

AMateria::AMateria()
{
    AM_type = "";
}

AMateria::AMateria(std::string const& type)
{
    AM_type = type;
}

AMateria::~AMateria()
{
    //std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
    AM_type = copy.AM_type;
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

void AMateria::use(ICharacter& target)
{
    (void) target;
    std::cout << "unused function!!" << std::endl;
}
