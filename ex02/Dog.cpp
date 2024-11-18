/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:57:42 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 18:28:13 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called!" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
    delete brain;
}

Dog::Dog(Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    type = copy.type;
    brain = new Brain();
    *brain = *(copy.brain);
}

Dog& Dog::operator=(const Dog& copy)
{
    std::cout << "Dog copy assignment operator" << std::endl;
    if (this != &copy)
    {
        type = copy.type;
        delete brain;
        brain = new Brain();
        *brain = *(copy.brain);
    }
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}

void Dog::printDogThoughts() const
{
    brain->printIdea(2);
}

Brain* Dog::getBrain() const
{
    return brain;
}
