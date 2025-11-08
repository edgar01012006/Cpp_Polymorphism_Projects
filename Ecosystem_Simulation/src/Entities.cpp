#include "../include/Entities.hpp"


//Animal methods
void Animal::act() const { std::cout << "Wolf hunts for food.\n"; };

void Animal::move() {
    if (m_energy > 0)
        --m_energy;
    std::cout << "Animals has " << m_energy << " energy left\n";
}

void Animal::info() const {
    std::cout << "\tAnimal Info\n";
    Entity::info();
}

std::string Animal::serialize() const {
    return m_name;
}


//Drone methods
void Drone::act() const { std::cout << "Drone scans the area.\n"; }

void Drone::move() {
    if (m_energy > 1) 
        m_energy -= 2;
    std::cout << "Drone has " << m_energy << " energy left\n";
}

void Drone::info() const {
    std::cout << "\tDrone info\n";
    Entity::info();
}

std::string Drone::serialize() const {
    return m_name;
}


//Robot methods
void Robot::act() const { std::cout << "Robot optimizes logistics.\n"; }

void Robot::move() {
    if (m_energy > 2)
        m_energy -= 3;
    std::cout << "Robot has " << m_energy << " energy left\n";
}

void Robot::info() const {
    std::cout << "\tRobot info\n";
    Entity::info();
}