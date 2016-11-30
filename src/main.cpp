#include <bits/stdc++.h>
#include "bayes.h"

using namespace std;
typedef long long ll;

int main() {
    Bayes b;
    
    b.add_observation("Best sentence ever!", "Good");
    b.add_observation("I love school!", "Good");
    b.add_observation("good stuff guys", "Good");
    b.add_observation("bad guy", "Bad");

    cout << b.classify("this is a good sentence") << endl;

}