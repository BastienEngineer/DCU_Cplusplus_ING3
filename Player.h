#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Classes.h"
class Servant;

/// Class Player (private: POINT 4)
class Player
{
private:
    /// Attributes
    std::string m_name; // a name of the player
    int id; // an id of the player
    /// POINT 19
    /// Vector container in my class Player
    std::vector<Servant*> m_teamPlayer; // the player have a team of servant (hero)
public:
    /// Constructor
    Player();
    Player(std::string name, int id1);
    Player(const Player &p); /// POINT 14
    /// Destructor
    ~Player();
    /// Getters and setters
    std::string getName();
    int getId();
    void setName(std::string *a); /// POINT 5
    std::vector<Servant*> getTeamPlayer();
    /// Methods
    void shuffleTeam(); /// POINT 20
    void addServant(Servant *a);
    void displayTeam();
    void displayTeam_c() const; /// POINT 6
};

#endif // PLAYER_H_INCLUDED
