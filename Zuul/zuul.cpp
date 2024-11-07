#include <iostream>
#include "room.h"
#include <cstring>
#include <vector>

using namespace std;
//set up functions
void cleanup(vector<Room*> &rooms);

int main(){
    vector<Room*> rooms;//set up vectors
    vector<char*> items;
    vector<char*> inventory;
//_____________________________________________________________________________________________ set up
    Room* Entrance = new Room;
    Room* Livingroom = new Room;
    Room* Bathroom = new Room;
    Room* Backyard = new Room;
    Room* Garage = new Room;
    Room* Closet = new Room;
    Room* Stairway1 = new Room;
    Room* Kitchen = new Room;
    Room* Diningroom = new Room;
    Room* Pantry = new Room;
    Room* Stairway2 = new Room;
    Room* Hallway = new Room;
    Room* Bedroom2 = new Room;
    Room* Bedroom1 = new Room;
    Room* Balcony = new Room;
    //give rooms name
    char* Entrancen = new char[12];
    strcpy(Entrancen,"Entrance");
    char* Livingroomn = new char[12];
    strcpy(Livingroomn,"Livingroom");
    char* Bathroomn = new char[12];
    strcpy(Bathroomn,"Bathroom");
    char* Backyardn = new char[12];
    strcpy(Backyardn,"Backyard");
    char* Garagen = new char[12];
    strcpy(Garagen,"Garage");
    char* Closetn = new char[12];
    strcpy(Closetn,"Closet");
    char* Stairway1n = new char[12];
    strcpy(Stairway1n,"Stairway1");
    char* Kitchenn = new char[12];
    strcpy(Kitchenn,"Kitchen");
    char* Diningroomn = new char[12];
    strcpy(Diningroomn,"Diningroom");
    char* Pantryn = new char[12];
    strcpy(Pantryn,"Pantry");
    char* Stairway2n = new char[12];
    strcpy(Stairway2n,"Stairway2");
    char* Hallwayn = new char[12];
    strcpy(Hallwayn,"Hallway");
    char* Bedroom2n = new char[12];
    strcpy(Bedroom2n,"Bedroom2");
    char* Bedroom1n = new char[12];
    strcpy(Bedroom1n, "Bedroom1");
    char* Balconyn = new char[12];
    strcpy(Balconyn, "Balcony");

    
    Entrance->setName(Entrancen);
    Livingroom->setName(Livingroomn);
    Bathroom->setName(Bathroomn);
    Backyard->setName(Backyardn);
    Garage->setName(Garagen);
    Closet->setName(Closetn);
    Stairway1->setName(Stairway1n);
    Kitchen->setName(Kitchenn);
    Diningroom->setName(Pantryn);
    Pantry->setName(Pantryn);
    Stairway2->setName(Stairway2n);
    Hallway->setName(Hallwayn);
    Bedroom2->setName(Bedroom2n);
    Bedroom1->setName(Bedroom1n);
    Balcony->setName(Balconyn);

    //give rooms description
    char* entranced = new char[100];
    strcpy(entranced, "A large doorway with simple stone floors welcoming you into the house");
    Entrance->setDescription(entranced);
    char* livingroomd = new char[100];
    strcpy(livingroomd, "A bright room with a couch, some chairs, and a fireplace");
    char* bathroomd = new char[100];
    strcpy(bathroomd,"A small room with a sink, toilet, and an old tub");
    char* backyardd = new char[100];
    strcpy(backyardd,"A grassy area with a few trees and a stone path leading around the yard");
    char* garaged = new char[100];
    strcpy(garaged,"A dusty room with a parked car and some shelves filled with tools");
    char* closetd = new char[100];
    strcpy(closetd,"A small closet with coats hanging and boxes stacked on the floor");
    char* stairway1d = new char[100];
    strcpy(stairway1d,"A wooden staircase leading up to the next floor");
    char* kitchend = new char[100];
    strcpy(kitchend,"A simple kitchen with a counter, a stove, and some pots hanging on the wall.");
    char* diningroomd = new char[100];
    strcpy(diningroomd,"A dining room with a long table and several chairs");
    char* pantryd = new char[100];
    strcpy(pantryd,"A narrow space filled with shelves of cans, jars, and dry goods");
    char* stairway2d = new char[100];
    strcpy(stairway2d,"A staircase leading to another floor");
    char* hallwayd = new char[100];
    strcpy(hallwayd,"A plain hallway with doors leading to other rooms");
    char* bedroom2d = new char[100];
    strcpy(bedroom2d,"A cozy bedroom with a small bed and a dresser");
    char* bedroom1d = new char[100];
    strcpy(bedroom1d,"A larger bedroom with a big bed and a window");
    char* balconyd = new char[100];
    strcpy(balconyd,"A small balcony with a railing, overlooking the backyard");

    Livingroom->setDescription(livingroomd);
    Bathroom->setDescription(bathroomd);
    Backyard->setDescription(backyardd);
    Garage->setDescription(garaged);
    Closet->setDescription(closetd);
    Stairway1->setDescription(stairway1d);
    Kitchen->setDescription(kitchend);
    Diningroom->setDescription(diningroomd);
    Pantry->setDescription(pantryd);
    Stairway2->setDescription(stairway2d);
    Hallway->setDescription(hallwayd);
    Bedroom2->setDescription(bedroom2d);
    Bedroom1->setDescription(bedroom1d);
    Balcony->setDescription(balconyd);

//set exits
    char* south = new char[6];
    char* west = new char[5];
    char* north = new char[6];
    char* east = new char[5];
    strcpy(east, "east");
    strcpy(south, "south");
    strcpy(west, "west");
    strcpy(north, "north");
    Balcony->setexits(south, Bedroom1);

    Bedroom1->setexits(north, Balcony);
    Bedroom1->setexits(east, Bedroom2);
    Bedroom1->setexits(south, Stairway1);

    Bedroom2->setexits(east, Hallway);
    Bedroom2->setexits(west, Bedroom1);

    Hallway->setexits(west, Bedroom2);
    Hallway->setexits(south, Stairway2);

    Stairway2->setexits(north, Hallway);
    Stairway2->setexits(south, Diningroom);

    Diningroom->setexits(north, Stairway2);
    Diningroom->setexits(east, Pantry);
    Diningroom->setexits(west, Kitchen);
    
    Pantry->setexits(west, Diningroom);

    Kitchen->setexits(east, Diningroom);
    Kitchen->setexits(south, Livingroom);

    Livingroom->setexits(north, Kitchen);
    Livingroom->setexits(east, Bathroom);
    Livingroom->setexits(south, Backyard);
    Livingroom->setexits(west, Entrance);

    Stairway1->setexits(north, Bedroom1);
    Stairway1->setexits(south, Entrance);

    Entrance->setexits(east, Livingroom);
    Entrance->setexits(north, Stairway1);

    Bathroom->setexits(west, Livingroom);

    Backyard->setexits(north, Livingroom);
    Backyard->setexits(west, Garage);

    Garage->setexits(east, Backyard);
    Garage->setexits(west, Closet);

    Closet->setexits(east, Garage);

    rooms.push_back(Entrance);
    rooms.push_back(Livingroom);
    rooms.push_back(Bathroom);
    rooms.push_back(Backyard);
    rooms.push_back(Garage);
    rooms.push_back(Closet);
    rooms.push_back(Stairway1);
    rooms.push_back(Kitchen);
    rooms.push_back(Diningroom);
    rooms.push_back(Pantry);
    rooms.push_back(Stairway2);
    rooms.push_back(Hallway);
    rooms.push_back(Bedroom2);
    rooms.push_back(Bedroom1);
    rooms.push_back(Balcony);
   
    char* bean = new char[10];
    strcpy(bean, "bean");
    Hallway->addItem(bean);

    char* rightwing = new char[10];
    strcpy(rightwing, "rightwing");
    Pantry->addItem(rightwing);

    char* leftwing = new char[10];
    strcpy(leftwing, "leftwing");
    Closet->addItem(leftwing);

    char* spatula = new char[10];
    strcpy(spatula, "spatula");
    Kitchen->addItem(spatula);

    char* toothbrush = new char[11];
    strcpy(toothbrush, "toothbrush");
    Kitchen->addItem(toothbrush);
//_____________________________________________________________________________________________ set up

    //introduction
    cout << "___________________________________________________________________________________________________________________________________________________________" 
    << endl << "Welcome to Henry's awesome Zuul game. Your goal is to explore the rooms, find the wings, then ultimatly escape through the balcony." 
    << endl << "Type: help if you need it." << endl << "All of the prompts are case sensitive, do not use any uppercase! Thanks!" 
    << endl << "___________________________________________________________________________________________________________________________________________________________" << endl;
    
    Room* currentroom = Entrance;//currentroom

    while(true){
      //current room + description
      cout << "Currently you are on room: " << endl << currentroom->getName() << " - " << currentroom->getDescription() << endl;
	    cout << "The room has items: " << endl;
      //current items
	    vector<char*> items = currentroom->getItems();
        for (int x = 0; x < items.size(); x++) {
          cout << items[x] << ", ";
        }
      cout << endl;
      //current exits
      cout << "There are exits:" << endl;
      map<char*, Room*> tempexits = currentroom->getExits();
      for (auto it = tempexits.begin(); it != tempexits.end(); ++it) {
        cout << it->first << " ";
      }
      cout << endl;
      //the command they give
      char move[10];
      cout << "Input: ";
      cin >> move;
      cout << "___________________________________________________________________________________________________________________________________________________________" << endl;
      
      //help
      if(strcmp(move, "help") == 0){
	      cout << "These are the moves that you can do: " 
        << endl << "help - you are on this page" 
        << endl << "north - nove to the north if it exists" 
        << endl << "west - move to the west if it exists" 
        << endl << "east - move to the east if it exists" 
        << endl << "south - move to the south if it exists." 
        << endl << "bean - pick up the bean"
        << endl << "spatula - pick up the spatula"
        << endl << "rightwing - pick up the rightwing"
        << endl << "leftwing - pick up the leftwing"
        << endl << "toothbrush - pick up the toothbrush"
        << endl << "___________________________________________________________________________________________________________________________________________________________" << endl;
      }
     
      //going north
      else if(strcmp(move, "north") == 0){
        if(currentroom->getexit(north) != nullptr){
          cout << "north" << endl;
          currentroom = currentroom->getexit(north);
          cout << "You moved north" << endl;
      }
      else { 
        cout << "You can't go that way." << endl;
        cout << "north" << endl;
      }
      cout << "___________________________________________________________________________________________________________________________________________________________" << endl;
      }
      
      //going south
      else if(strcmp(move, "south") == 0){
        if(currentroom->getexit(south) != nullptr){
          cout << "south" << endl;
          currentroom = currentroom->getexit(south);
          cout << "You moved south" << endl;
      }
      else { 
        cout << "You can't go that way." << endl;
        cout << "south" << endl;
        }
      cout << "___________________________________________________________________________________________________________________________________________________________" << endl;
      }
      
      //going west
      else if(strcmp(move, "west") == 0){
        if(currentroom->getexit(west) != nullptr){
          cout << "west" << endl;
          currentroom = currentroom->getexit(west);
          cout << "You moved west" << endl;
      }
      else { 
        cout << "You can't go that way." << endl;
        cout << "west" << endl;
        }
      cout << "___________________________________________________________________________________________________________________________________________________________" << endl;
      }
      
      //going east
      else if(strcmp(move, "east") == 0){
        if(currentroom->getexit(east) != nullptr){
          cout << "east" << endl;
          currentroom = currentroom->getexit(east);
          cout << "You moved east" << endl;
      }
      else { 
        cout << "You can't go that way." << endl;
        cout << "east" << endl;
        }
      cout << "___________________________________________________________________________________________________________________________________________________________" << endl;
      }

      else if(strcmp(move, "bean") == 0){
        if(currentroom->removeItem(bean) == true){
        inventory.push_back(bean);
        cout << "You picked up the bean" << endl;
        }
        else{
          cout << "There is no bean" << endl;
        }
      }
      
    }
    cleanup(rooms);
    return 0;
}

void cleanup(vector<Room*> &rooms) {
    for (Room* room : rooms) {
        delete[] room->getName();  // Free room name
        delete[] room->getDescription();  // Free room description

        vector<char*> items = room->getItems();
        for (char* item : items) {
            delete[] item;  // Free each item name
        }

        delete room;  // Free the room itself
    }
}
