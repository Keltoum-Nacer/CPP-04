/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:27:10 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 21:36:26 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>

class AMateria
{
    protected:
        std::string AM_type;
    public:
        AMateria(std::string const & type);
        AMateria();
        virtual ~AMateria();
        AMateria(const AMateria& copy);
        AMateria& operator=(const AMateria& copy);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        //virtual void use(ICharacter& target);
};

#endif
