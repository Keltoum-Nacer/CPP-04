/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:08:32 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 21:34:33 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;   
}

Cure::Cure(const Cure& copy): AMateria(copy)
{
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& copy)
{
    std::cout << "Cure copy assignment operator" << std::endl;
    if (this != &copy)
    {
        AMateria::operator=(copy);
    }
    return(*this);
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}