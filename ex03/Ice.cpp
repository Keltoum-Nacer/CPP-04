/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:00:53 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 21:36:48 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;   
}

Ice::Ice(const Ice& copy):AMateria(copy)
{
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& copy)
{
    std::cout << "Ice copy assignment operator" << std::endl;
    if (this != &copy)
    {
        AMateria::operator=(copy);
    }
    return(*this);
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}
