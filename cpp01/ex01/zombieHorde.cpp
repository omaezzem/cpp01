/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:46:46 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/08 14:23:56 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i;

    i = 0;
    Zombie *hordZombie = new Zombie[N];
    while (N > i)
    {
        hordZombie[i].reset_name(name);
        hordZombie[i].msg();
        i++;
    }
    return hordZombie;
}