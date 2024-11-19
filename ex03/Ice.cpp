/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:00:53 by knacer            #+#    #+#             */
/*   Updated: 2024/11/19 16:59:36 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{  
}

Ice::Ice(const Ice& copy):AMateria(copy)
{
}

Ice& Ice::operator=(const Ice& copy)
{
    if (this != &copy)
        AMateria::operator=(copy);
    return(*this);
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;   
}
