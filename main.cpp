#include "Classes.h"
class Player;

/// POINT 12
/// Implement a non-member operator in class Player
/*
Player operator + (const Player & left, const Player & right)
{
    return Player(left.getName(), left.getId() + right.getId());
}
*/

int main()
{
    /// POINT 3
    /// One abstract class Element with an abstract method (getSpecification)
    /// that is implemented in a child class (Saber)
    Saber s1=Saber(); // to create a saber
    std::cout << s1.getSpecification() << std::endl; // to call the abstract method

    /// POINT 5
    /// Passing an object to a function by value and by reference
    Player p1("Antoine",1); // to create a player
    p1.displayTeam(); // by value
    std::string n="Theophile";
    p1.setName(&n); // by reference
    p1.displayTeam();

    /// POINT 6
    /// Calling a method on an object that is const qualified and
    /// passing the same object to a function by constant reference
    Player p2("Antoine",1); // to create a player who called Antoine and id is 1
    p2.displayTeam(); // to display the player

    const Player p3("Theophile",2);
    p3.displayTeam_c();
    displayTeam_ref(p3); // passing by constant reference

    /// POINT 7
    /// Correct use of new and delete for the allocation of an object/objects,
    /// with operations on the object using pointers
    Player *p4=new Player("Antoine",1);
    Servant *s2=new Servant("Gilgamesh",5,1200,"Archer"); // to create a servant with pointer (use new)
    p4->displayTeam();
    s2->display();
    s2->getPV();
    delete p4; // using delete for the allocation
    delete s2;

    /// POINT 8
    /// Create an array of pointers to objects (minimum 3 elements) of one of
    /// your classes and pass this array to a function that displays all elements
    Player p5[3]={Player("Antoine",1),Player("Theophile",2),Player("Manu",3)};
    displayArray(p5); // to display the array of the players

    /// POINT 9
    /// A simple destructor with some basic functionality
    Player *p6=new Player("Antoine",1);
    Servant *s3=new Servant("Gilgamesh",5,1200,"Archer");
    p6->addServant(s3);
    p6->displayTeam();
    s3->modifyPV(20); // to change the PV of the servant
    p5->displayTeam();
    p5->~Player(); // destructor
    s3->~Servant(); // destructor

    /// POINT 10
    /// Dynamic binding with virtual & non-virtual methods
    Saber sa1=Saber();
    sa1.display(); // dynamic blinding with virtual

    /// POINT 12
    /// non-member operator
    Player pA("Antoine",1);
    Player p7("Theophile",2);

//    pA=pA+p7; // operator + (non-member)
//    pA.displayTeam(); // to display the player

    /// POINT 14
    /// a modified copy constructor and demonstrate the effect of this on pass-by-value
    /// and pass-by-reference calls
    Player p8("Antoine",1);
    p8.displayTeam();
    Player p9(p8);
    p9.displayTeam();
    const Player p10("Theophile",2); // class Player with constant
    Player p11(p10); // to copy the constructor
    p11.displayTeam(); // to pass-by-value

    /// POINT 15
    /// Use of two different C++ explicit style casts
    float f=100.5;
    int x=static_cast<int>(f); // to use the first cast: static_cast
    std::cout << x << std::endl;

    const int z=10;
    reduction(*const_cast<int*>(&z)); // to use the second cast
    std::cout << "z has value " << z << std::endl; // this function decrement
/*
    /// POINT 17
    /// Demonstrates the difference between a C++ class and a C++ struct
    PixelStruct px1;
    px1.x=1920; // the attributes in the structure are public
    px1.y=1080; // that's okay !
    std::cout << px1.x << " x " << px1.y << " pixels" << std::endl;
    PixelClass px2;
    px2.x=1920; // compiler error
    px2.y=1080; // because x and y are privates in a class
    std::cout << px2.x << " x " << px2.y << " pixels" << std::endl;
*/
    /// POINT 18
    /// class template
    test<char> carac('q');
    test<float> nb(10.1);
    std::cout << carac.getConstVal() << std::endl;
    std::cout << nb.getConstVal() << std::endl;

    /// POINT 20
    /// Use of an algorithm on your container
    Player p12("Antoine",1); // to create a player
    Servant *art=new Servant("Artoria",5,2000,"Saber");
    Servant *gil=new Servant("Gilgamesh",5,1200,"Archer");
    Servant *karn=new Servant("Karna",5,1350,"Lancer");
    // to create 3 servants
    p12.addServant(art); // to add my servant in my vector
    p12.addServant(gil);
    p12.addServant(karn);
    p12.displayTeam(); // to display the team of the player
    p12.shuffleTeam(); // to sort the vector
    std::cout << "-----Sort-----" << std::endl;
    p12.displayTeam();

    return 0;
}
