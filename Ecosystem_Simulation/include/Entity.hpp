#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <iostream>
#include <string>

class Entity {
    protected:
        std::string m_name;
        int m_energy;
    public:
        Entity(const std::string& name, int energy) : m_name { name }, m_energy { energy } {}
        virtual ~Entity() {}
        virtual void act() const = 0;
        virtual void move() = 0;
        virtual void info() const {
            std::cout << "Name: " << m_name << "\n";
            std::cout << "Energy: " << m_energy << "\n";
        };
};

class Serializable {
    public:
        virtual std::string serialize() const = 0;
};

#endif /* ENTITY_HPP */