//Violation: A class that needs to be modified every time a new functionality is added.

class Shape {
public:
    virtual void draw() = 0;
};

class Rectangle : public Shape {
public:
    virtual void draw() override {
        // code to draw a rectangle
    }
};

class Circle : public Shape {
public:
    virtual void draw() override {
        // code to draw a circle
    }
};

class ShapeDrawer {
public:
    void drawShape(Shape& shape) {
        shape.draw();
    }
};

//Here, every time a new shape needs to be added, the Shape class needs to be modified. This violates the OCP because the class should be open for extension but closed for modification.
//Solution: Use a factory pattern to create new shapes.