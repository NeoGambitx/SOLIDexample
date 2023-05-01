#include <iostream>
#include <memory>

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

class ShapeFactory {
public:
    static std::unique_ptr<Shape> createShape(std::string shapeType) {
        if (shapeType == "rectangle") {
            return std::make_unique<Rectangle>();
        }
        else if (shapeType == "circle") {
            return std::make_unique<Circle>();
        }
        else {
            throw std::runtime_error("Invalid shape type");
        }
    }
};

class ShapeDrawer {
public:
    void drawShape(std::unique_ptr<Shape>& shape) {
        shape->draw();
    }
};

//We use a factory pattern to create new shapes (ShapeFactory). 
//The ShapeDrawer class can now draw any shape without modifying the Shape class.