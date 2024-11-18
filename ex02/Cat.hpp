/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:04:23 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 20:15:55 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"
class Brain;

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(Cat& copy);
        Cat& operator=(const Cat& copy);
        void makeSound() const;
};

#endif