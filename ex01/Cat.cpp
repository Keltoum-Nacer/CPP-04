/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:05:21 by knacer            #+#    #+#             */
/*   Updated: 2024/11/17 10:22:40 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
    std::cout << "Cat copy assignment operator" << std::endl;
    if (this != &copy)
    {
        *this = copy;
    }
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}