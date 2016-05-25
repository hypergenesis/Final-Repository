#include "rocketship.h"
#include "specialrocketship.h"

SpecialRocketShip::SpecialRocketShip()//(initial values "RS Cloaky", 1000, false)
{
    name = "RS Cloaky";
    fuel = 1000;
    cloaked = false;
}
void SpecialRocketShip::setCloaked(bool cloaked_)
{
    cloaked = cloaked_;
}
bool SpecialRocketShip::getCloaked() const
{
    return cloaked;
}