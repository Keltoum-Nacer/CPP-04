/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:24:57 by knacer            #+#    #+#             */
/*   Updated: 2024/11/17 10:37:18 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& copy);
        std::string getType() const;
        void makeSound() const;
};

#endif
