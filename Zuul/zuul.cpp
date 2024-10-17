#include <iostream>;
#include "room.h";
#include <cstring>;
#include <vector>;

using namespace std;

void setup(vector<Room*> &rooms);

int main(){
    vector<Room*> rooms;
    setup(rooms);






    return 0;
}


void setup(vector<Room*> &rooms){
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







}