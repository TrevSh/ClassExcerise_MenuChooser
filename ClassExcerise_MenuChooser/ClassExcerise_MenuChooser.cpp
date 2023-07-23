//Completed Exercise as shown on page 80 if Beginning C++ Through Game Programming

#include <iostream>

int main()
{
    enum difficulty{EASY=1,MEDIUM=2,HARD=3};
    int choice;

    std::cout << "Choose you difficulty(Enter a number)\n\n";
    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "Easy? Pfft.. I mean good choice!\n";
        break;
    case 2:
        std::cout << "Medium. Alright, thats cool.";
        break;
    case 3:
        std::cout << "HARD!! LETS GOOOO!";
        break;
    }
}
