#ifndef SERVANT_H_INCLUDED
#define SERVANT_H_INCLUDED

#include "Classes.h"
class Element;

/// Class Servant
class Servant
{
private:
    /// Attributes
    std::string m_name;
    int m_rarity; // 1-5 stars
    double m_PV; // PV hero
    double m_PVMAX;
    double m_coeffDEF=1.0; // Coefficient of the attack and DEF
    double m_coeffATK=1.0;
    std::string m_type;
    /// Associative link
    Element *m_e;
public:
    /// Constructor
    Servant();
    Servant(std::string name,int rarity,double PVMAX,std::string type); //Element *e
    /// Destructor
    ~Servant();
    /// Methods
    void display();
    /// Getters and setters
    std::string getName();
    std::string getType();
    int getRarity();
    double getPV();
    double getPVMax();
    void modifyPV(double PV);
    double getCoeffATK();
    double getCoeffDEF();
    void setCoeffATK(double EA);
    void setCoeffDEF(double ED);
};

#endif // SERVANT_H_INCLUDED
