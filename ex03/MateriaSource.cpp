/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:05:47 by knacer            #+#    #+#             */
/*   Updated: 2024/11/19 17:12:03 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
        delete inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
    for(int i = 0; i < 4; i++)
        inventory[i] = copy.inventory[i]->clone();
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++)
        {
            if (inventory[i])
                delete inventory[i];
            if (copy.inventory[i])
                inventory[i] = copy.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return(*this);
}

void MateriaSource::learnMateria(AMateria* Materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = Materia;
            return;
        }
    }
    std::cout << "Inventory is full!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i] && inventory[i]->getType() ==type)
            return inventory[i]->clone();
    }
    std::cout << "enventory is empty!" << std::endl;
    return NULL;
}
