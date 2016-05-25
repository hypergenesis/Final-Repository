#ifndef SPC_H_
#define SPC_H_

#include"rocketship.h"

class SpecialRocketShip : public RocketShip
{
    private:
    bool cloaked;
    
    public:
    SpecialRocketShip();//(initial values "RS Cloaky", 1000, false)
    void setCloaked(bool cloaked_);
    bool getCloaked() const;
};
#endif