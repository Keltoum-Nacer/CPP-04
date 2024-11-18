/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:25:10 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 18:25:15 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include"Animal.hpp"
class Brain;

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        ~Dog();
        Dog(Dog& copy);
        Dog& operator=(const Dog& copy);
        void makeSound() const;
        void printDogThoughts() const;
         Brain* getBrain()const;
};

#endif