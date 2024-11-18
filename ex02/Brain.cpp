/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:10:07 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 17:38:30 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = "thought";
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain& copy)
{
    std::cout << "Brain copy contructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
}

Brain& Brain::operator=(const Brain& copy)
{
    if (this != &copy)
    {
        for(int i = 0; i < 100; i++)
            ideas[i] = copy.ideas[i];
    }
    return *this;
}

void Brain::setIdea(int i, const std::string& idea)
{
    if (i >= 0 && i <= 100)
        ideas[i] = idea;
    else
        std::cerr << "error, unvailable index!" << std::endl;    
}

void Brain::printIdea(int i) const
{
    if (i >= 0 && i < 100)
        std::cout << ideas[i] << std::endl;
    else
        std::cerr << "error, unvailable index!" << std::endl; 
}

