/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knacer <knacer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:40:27 by knacer            #+#    #+#             */
/*   Updated: 2024/11/18 21:30:31 by knacer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"


int main() {
    AMateria* b = new Cure();  // This will now work because `Cure` is no longer abstract
    std::cout << b->getType() << std::endl;  // Outputs: "Cure"
    AMateria* cloneB = b->clone();  // Create a clone of `b`
    delete b;  // Clean up
    delete cloneB;  // Clean up the cloned object
    return 0;
}

