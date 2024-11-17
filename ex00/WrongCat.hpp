/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:27:04 by knacer            #+#    #+#             */
/*   Updated: 2024/11/17 10:28:00 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat& copy);
    WrongCat& operator=(const WrongCat& copy);
    void makeSound() const;
};

#endif