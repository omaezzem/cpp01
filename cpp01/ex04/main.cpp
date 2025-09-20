/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 16:42:19 by omaezzem          #+#    #+#             */
/*   Updated: 2025/09/20 18:39:15 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    std::string line;
    if (ac != 4)
        return (std::cout << "usage : ./change filname s1 s2", 1);

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream infile(filename);
    if (!infile)
        return (std::cout << "Error: cannot open file " << filename << std::endl, 1);
    while (std::getline(infile, line))
    {
        std::cout << line << std::endl;
    }
    
}