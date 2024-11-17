/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:10:07 by knacer            #+#    #+#             */
/*   Updated: 2024/11/17 12:14:50 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain& copy)
{
    std::cout << "Brain copy contructor called" << std::endl;
    *this = copy;
}

Brain& Brain::operator=(const Brain& copy)
{
    if (this != &copy)
    {
        *this = copy;
    }
    return *this;
}
