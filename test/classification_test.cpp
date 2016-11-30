#define CATCH_CONFIG_MAIN 
#include "catch.hpp"
#include <bits/stdc++.h>
#include "../src/bayes.h"

TEST_CASE( "Gives a legitimate binary classification" ) {
    Bayes b;
    
    b.add_observation("Best sentence ever!", "Good");
    b.add_observation("I love school!", "Good");
    b.add_observation("good stuff guys", "Good");
    b.add_observation("bad guy", "Bad");

    REQUIRE(b.classify("this is a good sentence") == "Good");

}