#include "bayes.h"
#include "../test/test_helper.h"
#include <iostream>

using namespace std;
typedef long long ll;

int main() {
    Bayes b;
    
    auto lol = read_data("test/data/20ng-train-all-terms.txt");

    for(auto a : lol) {
        b.observe(a.second, a.first);
    }

    cout << b.classify("atheisim is the best thing ever") << endl;
    cout << b.classify("donald trump is going to build a wall") << endl;
    cout << b.classify("baseball is the laziest sport") << endl;
    cout << b.classify("football is a good sport") << endl;
    cout << b.classify("elon musk makes solid rockets that fly to space") << endl;
    cout << b.classify("make america great again") << endl;

}