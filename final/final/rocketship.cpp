#include "rocketship.h"

RocketShip::RocketShip()
{
name = "RS NullPointer";
fuel = 1000;
}

void RocketShip::setName(string name_)
{
    name = name_;
}
string RocketShip::getName() const
{
    return name;
}

void RocketShip::setFuel(unsigned int fuel_)
{
    fuel = fuel_;
}
unsigned int RocketShip::getFuel() const
{
    return fuel;
}

//jupiter
void RocketShip::addFuelCell(unsigned int fuelAmount)
{
    fuelCells.push_back(fuelAmount);
}
// add a new element to fuelCells to contain fuelAmount
bool RocketShip::removeFuelCell(unsigned int cellNumber)
{
    if (cellNumber >= 0 && cellNumber < fuelCells.size())
    {
        fuelCells.erase(fuelCells.begin()+cellNumber);
        return true;
    }
    return false;
}
// removes the specified cell (0-indexed) from fuelCells
bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount)
{
    if (cellNumber >= 0 && cellNumber < fuelCells.size())
    {
        fuelCells[cellNumber] = fuelCells[cellNumber] + fuelAmount;
        return true;
    }
    return false;
}
// add fuelAmount to the specified fuelCell (0-indexed)
string RocketShip::burnFuel(unsigned int cellNumber)
{
    stringstream ss;
    for (int i = 0;  i < fuelCells[cellNumber]; i++)
    {
        ss << "*";
    }
    fuelCells[cellNumber] = 0;
    return ss.str();
}
// zero out/burn all of the fuel in the specified cell (0-indexed) --
// returns a string of asterisks representing the fuel in the cell --