/* @author G. Hemingway, copyright 2026 - All rights reserved */
#ifndef SQUIRREL_H
#define SQUIRREL_H

// Standard libraries we need to have access to
#include <cstdint>
#include <string>

class Nut {
public:
    // clang-format off
    // Nuts have a random amount of nutrition
    Nut() : nutrition(std::rand() + 1) { }; // this way it is greater than 1 always
    // clang-format on

    friend class Squirrel;

private:
    uint32_t nutrition;
};

class Squirrel {
public:
    // Squirrels must have names
    Squirrel(const std::string name);
    // Complete the Big 3 - used in testing
    Squirrel(const Squirrel& rhs);
    Squirrel& operator=(const Squirrel& rhs);
    ~Squirrel();

    // What methods do we need according to the tests?
    void eat(Nut food);
    std::string getName();
    int getNutrition();

private:
    // Per Squirrel member variables
    std::string name;
    uint32_t foodCount;
};

#endif // SQUIRREL_H
