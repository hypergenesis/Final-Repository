#ifndef ROK_H
#define ROK_H

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class RocketShip
{
    protected:
    string name;
    unsigned int fuel;
    
    //jupiter
    vector<unsigned int> fuelCells;
    // each element of the vector represents a fuel cell --
    // with a specific amount (unsigned int) of fuel --
    
    public:
    RocketShip();
    void setName(string name_);
    string getName() const;
    void setFuel(unsigned int fuel_);
    unsigned int getFuel() const;
    
    //jupiter
    void addFuelCell(unsigned int fuelAmount);
    // add a new element to fuelCells to contain fuelAmount
    bool removeFuelCell(unsigned int cellNumber);
    // removes the specified cell (0-indexed) from fuelCells
    // add a new element to fuelCells to contain fuelAmount
    bool addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount);
    // add fuelAmount to the specified fuelCell (0-indexed)
    string burnFuel(unsigned int cellNumber);
    // zero out/burn all of the fuel in the specified cell (0-indexed) --
    // returns a string of asterisks representing the fuel in the cell --
    
    //Mars
    
    //new public function interface
    RocketShip(string newName, unsigned int newFuel);
    
};


#endif