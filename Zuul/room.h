/*
Henry Xu
10/14/24
zuul room.h file
*/
#include <iostream>;
#include <cstring>;
#include <map>;
#include <vector>;
//import everything

using namespace std;

class Room {
    public:
    //all of the important functions
    Room();
    char* getName();
    char* getDescription();
    void setexits(char* side, Room* newroom);
    Room* getexits(char* direction);
    void addItem(char* item);
    bool removeItem(char* item);
    bool checkItem(char* item);
    vector<char*> getItems();
    map<char*, Room*> getExits();
    public:
    //all of the important vasrriables
    char name[100];
    char description[300];
    map<char*, Room*> exits;
    vector<char*> items;
};