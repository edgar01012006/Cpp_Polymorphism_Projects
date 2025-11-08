#include "Instrument.hpp"
#include "customptr.hpp"

#include <vector>

enum Instuments {PIANO, VIOLIN, DRUM};

int main () {
    /*
    std::vector<Instrument*> instruments;
    Piano* piano = new Piano();
    Violin* violin = new Violin();
    Drum* drums = new Drum();
    instruments.push_back(piano);
    instruments.push_back(violin);
    instruments.push_back(drums);
    for (const Instrument* instrument: instruments) {
        instrument->play();
    }
    delete piano;
    delete violin;
    delete drums;
    */
    std::vector<CustomPtr> customptrs;
    customptrs.emplace_back(PIANO);
    customptrs.emplace_back(VIOLIN);
    customptrs.emplace_back(DRUM);
    for (const CustomPtr& customptr : customptrs) {
        customptr->play();
    }
}