#include "Element.h"

/// Mother class
/// Method implementations for class Element
Element::Element()
{

}

Element::~Element()
{

}

void Element::coefficientElement(Servant* enemy)
{

}

std::string Element::getName()
{
    return m_name;
}

/// Display for POINT 10 (dynamic binding)
void Element::display()
{
    std::cout << "Element " << m_name << std::endl;
}

std::vector<std::string>* Element::getMoreStrong()
{
    return &moreStrong;
}

std::vector<std::string>* Element::getLessStrong()
{
    return &lessStrong;
}

void Element::setMoreStrong(std::vector<std::string> deltaFOC)
{
    moreStrong=deltaFOC;
}

void Element::setLessStrong(std::vector<std::string> deltaFAC)
{
    lessStrong=deltaFAC;
}

//======================== SABER ==================
/// Daughter class
/// Method implementations for class Saber
Saber::Saber():Element()
{

}

Saber::~Saber()
{

}

void Saber::coefficientElement(Servant* enemy)
{

}

std::string Saber::getName()
{
    return m_name;
}

/// Display for POINT 10 (dynamic binding)
void Saber::display()
{
    Element::display();
    std::cout << "Type " << m_name << std::endl;
}

std::vector<std::string>* Saber::getMoreStrong()
{
    return &moreStrong;
}

std::vector<std::string>* Saber::getLessStrong()
{
    return &lessStrong;
}

//======================== ARCHER ==================
/// 2nd Daughter class
/// Method implementations for class Archer
Archer::Archer():Element()
{

}

Archer::~Archer()
{

}

void Archer::coefficientElement(Servant* enemy)
{

}

std::string Archer::getName()
{
    return m_name;
}

std::vector<std::string>* Archer::getMoreStrong()
{
    return &moreStrong;
}

std::vector<std::string>* Archer::getLessStrong()
{
    return &lessStrong;
}

//======================== LANCER ==================
/// 3rd Daughter class
/// Method implementations for class Lancer
Lancer::Lancer():Element()
{

}

Lancer::~Lancer()
{

}

std::string Lancer::getName()
{
    return m_name;
}

void Lancer::coefficientElement(Servant* enemy)
{

}

std::vector<std::string>* Lancer::getMoreStrong()
{
    return &moreStrong;
}

std::vector<std::string>* Lancer::getLessStrong()
{
    return &lessStrong;
}
