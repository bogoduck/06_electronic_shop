#pragma once
#include <iostream>
#include "electronic.h"


int main() {

	IElectronics * elects[5];

	elects[0] = new Phone("nokia", 999);
	elects[1] = new Phone("iphone", 10);
	elects[2] = new Tv("telefunken", 32);
	elects[3] = new Player("ipod", 5, 1);
	elects[4] = new Player("mp3", 2, 1);

    bool open = true;
    while (open)
    {
        std::cout << "Choose Product : 1 - Nokia, 2 - IPhone, 3 - Telefunken TV, 4 - IPod Player, 5 - Mp3 Player, 0 exit" << std::endl;
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            elects[0]->getData();
            break;

        case 2:
            elects[1]->getData();
            break;

        case 3:
            elects[2]->getData();
            break;

        case 4:
            elects[3]->getData();
            break;

        case 5:
            elects[4]->getData();
            break;

        case 0:
            open = false;
            break;

        default:
            std::cout << "Choose product from 1 to 5 or 0 to leave" << std::endl;
            break;
        }
    }
    delete elects[0];
    delete elects[1];
    delete elects[2];
    delete elects[3];
    delete elects[4];

    return 0;
}