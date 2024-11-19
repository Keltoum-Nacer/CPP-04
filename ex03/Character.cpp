/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:48:32 by knacer            #+#    #+#             */
/*   Updated: 2024/11/19 17:05:50 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    Name ="";
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const std::string& name)
{
    Name = name;
    for (int i = 0; i < 4 ; i++)
        inventory[i] = NULL;
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
        delete inventory[i];
}

Character::Character(const Character& copy)
{
    Name = copy.Name;
    for (int i = 0; i < 4; i++)
        inventory[i] = copy.inventory[i]->clone();
}

Character& Character::operator=(const Character& copy)
{
    if (this != &copy)
    {
        Name = copy.Name;
        for(int i = 0; i < 4; i++)
        {
            if (inventory[i])
                delete inventory[i];
            if (copy.inventory[i])
                inventory[i] = copy.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
    return Name;
}

void Character::equip(AMateria* m)
{
    int i = 0;
    while(inventory[i] && i < 4)
        i++;
    if (i < 4)
        inventory[i] = m;
    else
    {
        std::cout << "inventory is full!" << std::endl;
    }
}

void Character::unequip(int idx)
{
    if (!inventory[idx] || (idx < 0 || idx >= 4))
    {
        std::cout << "unavailable materia!" << std::endl;
        return;
    }
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
        std::cerr << "Invalid index!" << std::endl;
    else if(!inventory[idx])
        std::cerr << "unavailable materia!" << std::endl;
    else
        inventory[idx]->use(target);    
}
