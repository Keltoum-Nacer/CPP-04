/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:48:32 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 21:55:13 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    Name ="";
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string& name)
{
    Name = name;
    std::cout << "Character constructor called" << std::endl;
}

Character::~Character()
{
    std::cout << "Character Destructor called" << std::endl;
}

Character::Character(const Character& copy)
{
    Name = copy.name;
    std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& copy)
{
    if (this != &copy)
    {
        Name = copy.name;
    }
    return *this;
}

std::string const & Character::getName()
{
    return Name;
}

void Character::equip(AMateria* m)
{
    
}
