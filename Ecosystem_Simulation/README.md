# 🤖 C++ Advanced Project — Autonomous Ecosystem Simulation: Polymorphism Meets Intelligence

An advanced C++ project simulating an evolving ecosystem where organisms interact intelligently through **runtime polymorphism**, **abstract base classes**, and **pure virtual interfaces** — all without using `dynamic_cast`, manual type-checking, or factory patterns.

This project demonstrates how **virtual functions** and **abstract interfaces** can build a flexible, extensible system that models life-like behavior.

---

## 📂 Project Structure

Ecosystem_Simulation/
├── main.cpp
├── include/
│   ├── Entities.hpp
│   └── Entity.hpp
├── src/
│   └── Entities.cpp
└── README.md

---

## ⚙️ Build & Run

```bash
cd Ecosystem_Simulation
Then compile and run using g++ (C++17):
g++ -std=c++17 -Iinclude src/Entities.cpp main.cpp -o program
./program
