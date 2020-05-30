#include <iostream>
#include <string>
#include "hello.h"

std::string helloPerson(std::string name) {
    return "Hello, " + name + ", I am native addon"; 
}