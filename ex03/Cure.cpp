/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:08:32 by knacer            #+#    #+#             */
/*   Updated: 2024/11/19 16:59:22 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"
#include"Character.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure& copy): AMateria(copy)
{
}

Cure& Cure::operator=(const Cure& copy)
{
    if (this != &copy)
        AMateria::operator=(copy);
    return(*this);
}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<" s wounds *" << std::endl;
}
