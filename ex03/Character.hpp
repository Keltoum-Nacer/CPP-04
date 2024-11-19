/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:42:00 by knacer            #+#    #+#             */
/*   Updated: 2024/11/19 15:55:55 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include"AMateria.hpp"

class Character : public ICharacter
{
    protected:
        std::string Name;
        AMateria* inventory[4];
    public:
        Character();
        Character(const std::string& name);
        virtual ~Character();
        Character(const Character& copy);
        Character& operator=(const Character& copy);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
