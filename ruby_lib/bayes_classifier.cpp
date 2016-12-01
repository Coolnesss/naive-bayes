#include "rice/Class.hpp"
#include "rice/Constructor.hpp"
#include "../src/bayes.h"

using namespace Rice;
// This is a dummy class that gets wrapped into a Ruby class

class BayesClassifier {
    private:
        Bayes b;

    public:

        BayesClassifier() {};

        void observe(string label, string data) {
            b.observe(data, label);
        }

        string classify(string data) {
            return b.classify(data);
        }
};


extern "C"

void Init_bayes_classifier() {  
    Data_Type<BayesClassifier> rb_cbayes =
    define_class<BayesClassifier>("BayesClassifier")
    .define_constructor(Constructor<BayesClassifier>())
    .define_method("observe", &BayesClassifier::observe)
    .define_method("classify", &BayesClassifier::classify);
}
