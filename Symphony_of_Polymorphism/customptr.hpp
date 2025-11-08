#ifndef CUSTOMPTR_HPP
#define CUSTOMPTR_HPP

#include "Instrument.hpp"

class CustomPtr {
    private:
        Instrument* instrument;
    public:
        //Copy & copy assign deleted
        CustomPtr(const CustomPtr&) = delete;
        CustomPtr& operator=(const CustomPtr&) = delete;

        CustomPtr(CustomPtr&& other) noexcept : instrument(other.instrument) {
            other.instrument = nullptr;
        }
        CustomPtr& operator=(CustomPtr&& oth) noexcept {
            if(this != &oth) {
                clear();
                instrument = oth.instrument;
                oth.instrument = nullptr;
            }
            return *this;
        }

        CustomPtr(int opcode) : instrument { nullptr } {
            if(!opcode) {
                addPiano();
            } else if(opcode == 1) {
                addViolin();
            } else {
                addDrum();
            }
        }
        void clear() { 
            delete instrument; 
            instrument = nullptr; // for safety
        }
        void addPiano() { 
            clear();
            instrument = new Piano{}; 
        }
        void addViolin() {
            clear();
            instrument = new Violin{};
        };
        void addDrum() {
            clear();
            instrument = new Drum{};
        }
        Instrument* operator->() const {
            return instrument;
        }
        /*
        void play() const {
            instrument->play();
        }
        */
        ~CustomPtr() { clear(); }
};

#endif /* CUSTOMPTR_HPP */