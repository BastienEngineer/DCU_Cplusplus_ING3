#include "Classes.h"
class Player;

/// POINT 6
/// Calling a method on an object that is const qualified and passing the
/// same object to a function by constant reference
void displayTeam_ref(const Player &a)
{
    a.displayTeam_c();
}

/// POINT 8
/// Create an array of pointers to objects
/// Function to display
void displayArray(Player p[3])
{
    for(int i=0;i<3;i++)
    {
        p[i].displayTeam();
    }
}

/// POINT 15
/// Use of two different C++ explicit style casts
/// Function for the second cast
void reduction(int& b)
{
    b--;
    std::cout << "b has value " << b << std::endl;
}
