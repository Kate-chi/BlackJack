#pragma once
#include <string>

#include "GenericPlayer.h"

class House : public GenericPlayer
{
public:
    House(const std::string& name = "House") : GenericPlayer(name) {}

    virtual ~House();

    virtual bool IsHitting() const;

    void FlipFirstCard();
};