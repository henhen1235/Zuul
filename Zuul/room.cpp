/*
Henry Xu
10/14/24
Room.cpp file
*/

#include <iostream>
#include <cstring>
#include "room.h"
#include <vector>

using namespace std;

Room::Room() {
    name = new char[50];
    description = new char[100];
    strcpy(name, "");
    strcpy(description, ""); 
}

char* Room::getName(){
    return name;
}

char* Room::getDescription(){
    return description;
}

void Room::setexits(char* side, Room* newroom){
    exits[side] = newroom;
    //using maps link the char side to the pointer newroom and store it in the vector of maps called exits
}

Room* Room::getexit(char* direction){
    if (exits.find(direction) != exits.end()) {
        return exits[direction];
    }
    else{
        return nullptr;
    }
}

void Room::addItem(char* item){
    items.push_back(item);
}

bool Room::removeItem(char* item){
    for(auto it = items.begin(); it != items.end(); it++){
        if(strcmp(*it, item) == 0){
            items.erase(it);
            return true;
        }
    }
    return false;
}

bool Room::checkItem(char* item){
     for(auto it = items.begin(); it != items.end(); it++){
        if(strcmp(*it, item) == 0){
            return true;
        }
    }
    return false;
}

vector<char*> Room::getItems(){
    return items;
}

map<char*, Room*> Room::getExits(){
    return exits;
}
