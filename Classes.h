#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
#include <random>
#include <algorithm>
#include "Servant.h"
#include "Element.h"
#include "Player.h"
#include "test.h"
#include "function.h"

class Servant;
class Element;
class Saber;
class Archer;
class Lancer;
class Player;
class NoblePhantasm;
class PixelClass;
struct PixelStruct;

void displayTeam_ref(const Player &a);
void displayArray(Player p[3]);
void reduction(int& b);


#endif // CLASSES_H_INCLUDED
