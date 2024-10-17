#include "Servant.h"

/// Method implementations for class Servant
Servant::Servant()
{

}

Servant::Servant(std::string name,int rarity,double PVMAX,std::string type):m_name(name),m_rarity(rarity),m_PV(PVMAX),m_PVMAX(PVMAX),m_type(type)
{

}

Servant::~Servant()
{
    /// Display for POINT 9
    std::cout << "destroy servant" << std::endl;
}

std::string Servant::getName()
{
    return m_name;
}

std::string Servant::getType()
{
    return m_type;
}

int Servant::getRarity()
{
    return m_rarity;
}

double Servant::getPV()
{
    return m_PV;
}

double Servant::getPVMax()
{
    return m_PVMAX;
}

void Servant::modifyPV(double deltaPV)
{
    m_PV-=deltaPV;
    if(m_PV>m_PVMAX)
    {
        m_PV=m_PVMAX;
    }
    if(m_PV<0)
    {
        m_PV=0;
    }
}

/// Display for POINT 7, POINT 9 and POINT 20
void Servant::display()
{
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Rarity: " << m_rarity << "\n" << "Type: " << m_type << std::endl;
    std::cout << "PV: " << m_PV <<"/"<<m_PVMAX << std::endl;
    std::cout << "" << std::endl;
}

double Servant::getCoeffATK()
{
    return m_coeffATK;
}

double Servant::getCoeffDEF()
{
    return m_coeffDEF;
}

void Servant::setCoeffATK(double EA)
{
    m_coeffATK*=EA;
}

void Servant::setCoeffDEF(double ED)
{
    m_coeffDEF*=ED;
}


