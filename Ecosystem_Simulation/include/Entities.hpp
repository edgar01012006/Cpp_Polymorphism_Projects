#ifndef ENTITIES_HPP
#define ENTITIES_HPP

#include "../include/Entity.hpp"

class Animal : public Entity, public Serializable {
    public:
        Animal(const std::string& name, int energy) : Entity { name, energy } {}
        void act() const override;
        void move() override;
        void info() const override;
        std::string serialize() const override;
};

class Drone : public Entity, public Serializable {
    public:
        Drone(const std::string& name, int energy) : Entity { name, energy } {}
        void act() const override;
        void move() override;
        void info() const override;
        std::string serialize() const override;
};

class Robot : public Entity {
    public:
        Robot(const std::string& name, int energy) : Entity { name, energy } {}
        void act() const override;
        void move() override;
        void info() const override;
};

#endif /* ENTITIES_HPP */