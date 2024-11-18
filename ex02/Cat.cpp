/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:05:21 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 18:24:56 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include "Brain.hpp"
Cat::Cat()
{
    std::cout << "Cat default constructor called!" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
    delete brain;
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    type = copy.type;
    brain = new Brain();
    *brain = *(copy.brain);
}

Cat& Cat::operator=(const Cat& copy)
{
    std::cout << "Cat copy assignment operator" << std::endl;
    if (this != &copy)
    {
        type = copy.type;
        delete brain;
        brain = new Brain();
        *brain = *(copy.brain);
    }
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}


