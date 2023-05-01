#include <iostream>

//Violation: A subclass that violates the behavior of its superclass.

class Bird {
public:
    virtual void fly() {
        // code to fly
    }
};

class Penguin : public Bird {
public:
    virtual void fly() override {
        throw std::runtime_error("Penguins can't fly");
    }
};

void makeBirdFly(Bird& bird) {
    bird.fly();
}


//The penguinclass violates the behavior of its superclassBird` by throwing an exception instead of actually flying. This violates the LSP because the subclass should not change the behavior of its superclass in a way that causes client code to break.
//Solution: Refactor the code to use interfaces instead of inheritance.