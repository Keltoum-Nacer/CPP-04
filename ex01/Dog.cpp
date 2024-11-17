/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:57:42 by knacer            #+#    #+#             */
/*   Updated: 2024/11/17 13:16:11 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain();
    this->brain = copy->brain;
}

Dog& Dog::operator=(const Dog& copy)
{
    std::cout << "Dog copy assignment operator" << std::endl;
    if (this != &copy)
    {
        *this = copy;
    }
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}
