/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:31:27 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 18:24:40 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal& copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
    std::cout << "Animal copy assignement operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return(*this);
}

std:: string Animal::getType() const
{
    return(type);
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

