require 'mkmf-rice'
$CXXFLAGS += " -std=c++11 "
create_makefile('bayes_classifier')