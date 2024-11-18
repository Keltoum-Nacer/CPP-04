/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:42:00 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 21:49:14 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include"ICharacter.hpp"
#include<iostream>
#include<string>

class Character : public ICharacter
{
    private:
        std::string Name;
    public:
        Character();
        Character(std::string& name);
        ~Character();
        Character(const Character& copy);
        Character& operator=(const Character& copy);
        virtual std::string const & getName();
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
}

#endif
