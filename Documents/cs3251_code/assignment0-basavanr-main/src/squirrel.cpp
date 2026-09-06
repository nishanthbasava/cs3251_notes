// @author Graham Hemingway @copyright 2026 - All rights reserved
#include "squirrel.h"

// Implementation of the Squirrel constructor
Squirrel::Squirrel(const std::string name)
    : name(name)
    , foodCount(0)
{
}

// Add the nut's nutrition to the squirrel
void Squirrel::eat(Nut nut)
{
    foodCount += nut.nutrition;
}


Squirrel::Squirrel(const Squirrel& rhs)
    : name(rhs.name + "_copy")
    , foodCount(0)
{
}

int Squirrel::getNutrition()
{
    return static_cast<int>(foodCount);
}

std::string Squirrel::getName()
{
    return name;
}

Squirrel::~Squirrel() = default;
Squirrel& Squirrel::operator=(const Squirrel& rhs) = default;