#include <iostream>

class Parent1 {
public:
    void parent1Method() {
        std::cout << "Parent 1 method" << std::endl;
    }
};

class Parent2 {
public:
    void parent2Method() {
        std::cout << "Parent 2 method" << std::endl;
    }
};

class Derived : public Parent1, public Parent2 {
public:
    void derivedMethod() {
        std::cout << "Derived method" << std::endl;
    }
};

int main() {
    Derived derivedObj;
    
    // Accessing Parent1 members
    derivedObj.parent1Method();
    
    // Accessing Parent2 members
    derivedObj.parent2Method();
    
    // Accessing Derived members
    derivedObj.derivedMethod();
    
    // Accessing Parent1 and Parent2 members using a pointer/reference to the most derived class
    Parent1* p1 = &derivedObj;
    Parent2* p2 = &derivedObj;
    
    p1->parent1Method();
    p2->parent2Method();
    
    return 0;
}
