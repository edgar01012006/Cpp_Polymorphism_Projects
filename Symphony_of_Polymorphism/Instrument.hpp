#ifndef INSTRUMENT_HPP
#define INSTRUMENT_HPP

#include <iostream>

class Instrument {
    public:
        virtual void play() const { /* empty */ }
        virtual ~Instrument() { std::cout << "Instrument dtor\n"; }
};

class Piano : public Instrument {
    public:
        virtual ~Piano() { std::cout << "Piano dtor\n"; }
        void play() const override { std::cout << "Piano is playing a classical melody.\n"; }
};

class Violin : public Instrument {
    public:
        virtual ~Violin() { std::cout << "Violin dtor\n"; }
        void play() const override { std::cout << "Violin is playing a soothing tune.\n"; }
};

class Drum : public Instrument {
    public:
        virtual ~Drum() { std::cout << "Drum dtor\n"; }
        void play() const override { std::cout << "Drum is creating a powerful rhythm.\n"; }
};

#endif /* INSTRUMENT_HPP */