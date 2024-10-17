#ifndef ELEMENT_H_INCLUDED
#define ELEMENT_H_INCLUDED

#include "Classes.h"
class Servant;

/// Class Element (protected: POINT 4)
/// One abstract class with an abstract method
class Element
{
protected:
    /// Attributes
    std::string m_name;
    std::string m_specification; /// Attribute for POINT 3
    std::vector<std::string> moreStrong; // effective for all elements
    std::vector<std::string> lessStrong; // ineffective for all elements
    double coeffATK=1;
    double coeffDEF=1;
public:
    /// Constructor
    Element();
    /// Destructor
    virtual ~Element();
    /// Methods and Getters
    virtual void coefficientElement(Servant* enemy);
    virtual std::string getName();
    virtual void display();
    virtual std::vector<std::string>* getMoreStrong();
    virtual std::vector<std::string>* getLessStrong();
    void setMoreStrong(std::vector<std::string> deltaFOC);
    void setLessStrong(std::vector<std::string> deltaFAC);
    /// POINT 3 : abstract method
    virtual std::string getSpecification()=0;
};

/// Class Saber
class Saber : public Element
{
private:
    /// Attributes
    std::string m_name="Saber"; // name
    std::vector<std::string> moreStrong={"Lancer"}; // effective
    std::vector<std::string> lessStrong={"Archer"}; // ineffective
    double coefficientATKElement=1;
    double coefficientDEFElement=1;
public:
    /// Constructor
    Saber();
    /// Destructor
    ~Saber();
    /// Methods and getters
    void coefficientElement(Servant* enemy);
    std::string getName();
    void display();
    std::vector<std::string>* getMoreStrong();
    std::vector<std::string>* getLessStrong();
    void setMoreStrong(std::vector<std::string> deltaFOC);
    void setLessStrong(std::vector<std::string> deltaFAC);
    /// POINT 3
    /// implemented in a child class
    std::string getSpecification(){return "this element is a saber type";}
};

//=============================== ARCHER =======================
/// An other class inherited from element
class Archer : public Element
{
private:
    std::string m_name="Archer";
    std::vector<std::string> moreStrong={"Saber"};
    std::vector<std::string> lessStrong={"Lancer"};
    double coefficientATKElement=1;
    double coefficientDEFElement=1;
public:
    Archer();
    ~Archer();
    void coefficientElement(Servant* enemy);
    std::string getName();
    std::vector<std::string>* getMoreStrong();
    std::vector<std::string>* getLessStrong();
    void setMoreStrong(std::vector<std::string> deltaFOC);
    void setLessStrong(std::vector<std::string> deltaFAC);
};

//================================= LANCER ======================
/// An other class inherited from element
class Lancer : public Element
{
private:
    std::string m_name="Lancer";
    std::vector<std::string> moreStrong={"Archer"};
    std::vector<std::string> lessStrong={"Saber"};
    double coefficientATKElement=1;
    double coefficientDEFElement=1;
public:
    Lancer();
    ~Lancer();
    void coefficientElement(Servant* enemy);
    std::string getName();
    std::vector<std::string>* getMoreStrong();
    std::vector<std::string>* getLessStrong();
    void setMoreStrong(std::vector<std::string> deltaFOC);
    void setLessStrong(std::vector<std::string> deltaFAC);
};

/*
/// Class NoblePhantasm : inherited from servant and element
/// Inheritance POINT 1
class NoblePhantasm : public Servant, public Element /// multiple class
{
private:
    /// Attributes
    std::string m_name; // a name
    bool m_NoblePhantasm=true; // Special ATK
public:
    /// Getters
    std::string getName();
    bool getNoblePhantasm();
    /// Methods
    void display();
};
*/

#endif // ELEMENT_H_INCLUDED
