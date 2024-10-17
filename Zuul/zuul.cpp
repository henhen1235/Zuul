#include <iostream>;
#include "room.h";
#include <cstring>;
#include <vector>;

using namespace std;

struct Item {
    char name[20];
    char description[50];
};

void setup(vector<Room*> &rooms, vector<Item> &items);

int main(){
    vector<Room*> rooms;
    vector<Item> items;
    setup(rooms, items);






    return 0;
}


void setup(vector<Room*> &rooms, vector<Item> &items){
    //init the rooms
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
    Entrance->setName("Entrance");
    Livingroom->setName("Livingroom");
    Bathroom->setName("Bathroom");
    Backyard->setName("Backyard");
    Garage->setName("Garage");
    Closet->setName("Closet");
    Stairway1->setName("Stairway1");
    Kitchen->setName("Kitchen");
    Diningroom->setName("Pantry");
    Pantry->setName("Pantry");
    Stairway2->setName("Stairway2");
    Hallway->setName("Hallway");
    Bedroom2->setName("Bedroom2");
    Bedroom1->setName("Bedroom1");
    Balcony->setName("Balcony");
    //give rooms description
    Entrance->setDescription("A large doorway with simple stone floors, welcoming you into the house");
    Livingroom->setDescription("A bright room with a couch, some chairs, and a fireplace");
    Bathroom->setDescription("A small room with a sink, toilet, and an old tub");
    Backyard->setDescription("A grassy area with a few trees and a stone path leading around the yard");
    Garage->setDescription("A dusty room with a parked car and some shelves filled with tools");
    Closet->setDescription("A small closet with coats hanging and boxes stacked on the floor");
    Stairway1->setDescription("A wooden staircase leading up to the next floor");
    Kitchen->setDescription("A simple kitchen with a counter, a stove, and some pots hanging on the wall.");
    Diningroom->setDescription("A dining room with a long table and several chairs");
    Pantry->setDescription("A narrow space filled with shelves of cans, jars, and dry goods");
    Stairway2->setDescription("A staircase leading to another floor");
    Hallway->setDescription("A plain hallway with doors leading to other rooms");
    Bedroom2->setDescription("A cozy bedroom with a small bed and a dresser");
    Bedroom1->setDescription("A larger bedroom with a big bed and a window");
    Balcony->setDescription("A small balcony with a railing, overlooking the backyard");
    //set exits
    Balcony->setexits("south", Bedroom1);

    Bedroom1->setexits("north", Balcony);
    Bedroom1->setexits("east", Bedroom2);
    Bedroom1->setexits("south", Stairway1);

    Bedroom2->setexits("east", Hallway);
    Bedroom2->setexits("west", Bedroom1);

    Hallway->setexits("west", Bedroom2);
    Hallway->setexits("south", Stairway2);

    Stairway2->setexits("north", Hallway);
    Stairway2->setexits("south", Diningroom);

    Diningroom->setexits("north", Stairway2);
    Diningroom->setexits("east", Pantry);
    Diningroom->setexits("west", Kitchen);
    
    Pantry->setexits("west", Diningroom);

    Kitchen->setexits("east", Diningroom);
    Kitchen->setexits("south", Livingroom);

    Livingroom->setexits("north", Kitchen);
    Livingroom->setexits("east", Bathroom);
    Livingroom->setexits("south", Backyard);
    Livingroom->setexits("west", Entrance);

    Stairway1->setexits("north", Bedroom1);
    Stairway1->setexits("south", Entrance);

    Entrance->setexits("east", Livingroom);
    Entrance->setexits("north", Stairway1);

    Bathroom->setexits("west", Livingroom);

    Backyard->setexits("north", Livingroom);
    Backyard->setexits("west", Garage);

    Garage->setexits("east", Backyard);
    Garage->setexits("west", Closet);

    Closet->setexits("east", Garage);

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

    items.push_back({"beans", "What is this??"});
    items.push_back({"rightwing", "Maybe with the other one you can fly"});
    items.push_back({"leftwing", "Maybe with the other one you can fly"});
    items.push_back({"spatula", "Kitchen utensil or murder weapon?"});
    items.push_back({"toothbrush", "Yummy"});

    Hallway->addItem(items[0].name);
    Pantry->addItem(items[1].name);
    Closet->addItem(items[2].name);
    Kitchen->addItem(items[3].name);
    Bathroom->addItem(items[4].name);
}