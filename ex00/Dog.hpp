/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:25:10 by knacer            #+#    #+#             */
/*   Updated: 2024/11/17 10:22:55 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"

class Dog : public Animal
{
    public:
    Dog();
    ~Dog();
    Dog(Dog& copy);
    Dog& operator=(const Dog& copy);
    void makeSound() const;
};

#endif