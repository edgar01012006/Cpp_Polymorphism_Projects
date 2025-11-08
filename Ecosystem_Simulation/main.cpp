#include "include/Entity.hpp"
#include "include/Entities.hpp"
#include <vector>

int main() {
    Animal* animal = new Animal{"Wolf", 100};
    Drone* drone = new Drone{"Drononot", 200};
    Robot* robot = new Robot{"RobotBobot", 400};
    std::vector<Entity*> entities;
    entities.push_back(animal);
    entities.push_back(drone);
    entities.push_back(robot);
    for (Entity* const entity: entities) {
        entity->act();
        entity->move();
        entity->info();
    }

    std::vector<Serializable*> serializables;
    serializables.push_back(animal);
    serializables.push_back(drone);
    //serializables.push_back(robot);
    std::cout << "\n\tSerializeable methods\n";
    for (Serializable* const serializeable: serializables) {
        std::cout << serializeable->serialize() << "\n";
    }
}