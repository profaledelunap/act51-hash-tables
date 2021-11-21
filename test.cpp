#define CATCH_CONFIG_MAIN
#include <iostream>
#include <string>
#include "HashTable.h"
#include "catch.h"
using namespace std;

TEST_CASE("testing read", "[List]")
{
    HashTable<int, string> myTable(3);

    myTable.insert(5, "Monterrey");
    myTable.insert(7, "Santa Catarina");
    myTable.insert(3, "Santiago");
    myTable.insert(2, "San Pedro");
    myTable.insert(6, "Hola");
    myTable.insert(58, "Cienega de Gonzalez");
    myTable.insert(38, "Mitras");

    SECTION("myTable.insert()")
    {
        REQUIRE(myTable.toString() == "[6, 3]\n[58, 7]\n[38, 2, 5]\n");
    }

    SECTION("myTable.getSize()")
    {
        REQUIRE(myTable.getSize() == 7);
    }

    SECTION("myTable.erase()")
    {
        myTable.erase(38);
        REQUIRE(myTable.toString() == "[6, 3]\n[58, 7]\n[2, 5]\n");
    }

    SECTION("myTable.get()")
    {
        REQUIRE(myTable.get(38) == "Mitras");
    }
}