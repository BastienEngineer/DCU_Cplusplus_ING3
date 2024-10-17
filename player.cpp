#include "Player.h"

/// Method implementations for class Player
Player::Player()
{

}

Player::~Player()
{
    /// Display for POINT 9
    std::cout << "destroy player" << std::endl;
}

Player::Player(std::string name, int id1):m_name(name),id(id1)
{

}

/// POINT 14
/// A class with a modified copy constructor and demonstrate the effect of
/// this on pass-by-value and pass-by-reference calls
Player::Player(const Player &p):m_name(p.m_name),id(p.id)
{

}

std::string Player::getName()
{
    return m_name;
}

int Player::getId()
{
    return id;
}

/// Change the name for POINT 5
/// Passing an object to a function by reference
void Player::setName(std::string *a)
{
    m_name=*a; // by pointer
}

/// Algorithm on my container vector for POINT 20
void Player::shuffleTeam()
{
    /// Sort the vector
	std::shuffle(m_teamPlayer.begin(),m_teamPlayer.end(),std::default_random_engine());
}

std::vector<Servant*> Player::getTeamPlayer()
{
    return m_teamPlayer;
}

/// Implement for POINT 19 (vector)
void Player::addServant(Servant *a)
{
    m_teamPlayer.push_back(a);
}

/// Display for POINT 5,6,7,9,12,14 and 20
void Player::displayTeam()
{
    std::cout << "Player: " << getName() << " id: " << getId() << std::endl;
    for(unsigned int i=0; i<m_teamPlayer.size(); i++)
    {
        m_teamPlayer[i]->display();
    }
}

/// Display for POINT 6
/// Calling a method on an object that is const qualified and passing the
/// same object to a function by constant reference
void Player::displayTeam_c() const
{
    std::cout << "Player: " << m_name << std::endl;
}


