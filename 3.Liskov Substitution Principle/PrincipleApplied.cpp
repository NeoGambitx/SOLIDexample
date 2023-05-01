#include <iostream>

class Flyable {
public:
    virtual void fly() = 0;
};

class Bird : public Flyable {
public:
    virtual void fly() override {
        // code to fly
    }
};

class Penguin : public Flyable {
public:
    virtual void fly() override {
        throw std::runtime_error("Penguins can't fly");
    }
};

void makeObjectFly(Flyable& flyableObj) {
    flyableObj.fly();
}

//Here, we use interfaces instead of inheritance (Flyable interface) to separate the behaviors of the Bird 
//and Penguin classes. The makeObjectFly function now takes any Flyable object, 
//and the Penguin class can still be used as long as it implements the Flyable interface correctly.