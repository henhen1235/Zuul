/*
Henry Xu
10/14/24
Room.cpp file
*/

#include <iostream>;
#include <cstring>;
#include "room.h";
#include <vector>;

using namespace std;

Room::Room() {
    name = new char[50];
    description = new char[100];
    strcpy(name, "");
    strcpy(description, ""); 
}