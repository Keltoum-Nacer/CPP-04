/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:50:13 by knacer            #+#    #+#             */
/*   Updated: 2024/11/19 15:57:50 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        virtual ~Cure();
        Cure(const Cure& copy);
        Cure& operator=(const Cure& copy);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
