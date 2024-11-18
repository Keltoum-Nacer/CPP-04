/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:14:20 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 18:26:55 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* arr[6];
    int i = 0;
    while(i < 6)
    {
        if (i % 2)
            arr[i] = new Dog();
        else
            arr[i] = new Cat();
        i++;
    }
    i = 0;
    while(i < 6)
    {
        delete arr[i];
        i++;
    }
    Dog *a= new Dog();
    a->getBrain()->setIdea(2, "Dog idea");
    a->printDogThoughts();
    Dog *b = new Dog(*a);
    a->getBrain()->setIdea(2, "Doggg ideaaa");
    a->printDogThoughts();
    b->printDogThoughts();
    
    delete a;
    delete b;
return 0;
}
