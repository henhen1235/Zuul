#include <iostream>;
#include <cstring>;
#include <map>;
#include <vector>;
//import everything

using namespace std;

class Room {
    public:
    Room();
    char* getName();
    char* getDescription();
    void setexits(char* side, Room* newroom);
    Room* getexits(char* direction);
    void addItem(char* item);
    bool removeItem(char* item);
    bool checkItem(char* item);
    vector<char*> getItems();
    map<char*, Room*> getExists();
    public:
    char name[100];
    char description[300];
    map<char*, Room*> exits;
    vector<char*> items;
};