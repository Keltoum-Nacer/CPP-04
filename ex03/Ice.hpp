/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:56:32 by knacer            #+#    #+#             */
/*   Updated: 2024/11/19 15:57:44 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include"AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        virtual ~Ice();
        Ice(const Ice& copy);
        Ice& operator=(const Ice& copy);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
