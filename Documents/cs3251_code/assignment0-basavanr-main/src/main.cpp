/* @author G. Hemingway, copyright 2026 - All rights reserved */
#include "squirrel.h"
#include <cstdint>
#include <gtest/gtest.h>

// The fixture for testing our simple classes
class SquirrelTest : public ::testing::Test { };

TEST_F(SquirrelTest, BasicConstructor)
{
    // What does this test check for?
    EXPECT_NO_THROW({ Squirrel a("Bob"); });
    Squirrel jane("jane");
    // What about these?
    EXPECT_EQ(jane.getName(), "jane");
    EXPECT_EQ(jane.getNutrition(), 0);
}

TEST_F(SquirrelTest, Big3)
{
    Squirrel bob("Bob");
    Nut nut; // Should have a non-zero nutrition
    bob.eat(nut); // Should give

    Squirrel bobCopy(bob);
    // Maybe not the behavior your were expecting - but you have to pass the tests
    EXPECT_EQ(bobCopy.getName(), "Bob_copy");
    EXPECT_EQ(bobCopy.getNutrition(), 0);
}

TEST_F(SquirrelTest, Eating)
{
    Squirrel mary("Mary");
    Nut nut; // Should have a non-zero nutrition

    // Carefully understand what behavior these tests are really asking for
    EXPECT_EQ(mary.getNutrition(), 0);
    mary.eat(nut);
    EXPECT_GE(mary.getNutrition(), 0);
}

/* If you uncomment any one of these lines, your code should fail to compile */
TEST_F(SquirrelTest, AntiCompilationTest)
{
    Squirrel test("test");
    Nut nut;
    // Squirrel a; // No such constructor
    // std::cout << test.foodCount << std::endl; // foodCount is private
    // std::cout << nut.nutrition << std::endl; // nutrition is private
    test.eat(nut);
    EXPECT_GE(test.getNutrition(), 0);
}

int main(int argc, char** argv)
{
    // use current time as seed for random generator - for Nut construction
    std::srand(std::time(nullptr));

    // Run the automated tests
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
