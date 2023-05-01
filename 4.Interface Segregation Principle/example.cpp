#include <iostream>

//Violation: An interface that has too many methods, some of which are not relevant to all its clients.

class Printer {
public:
    virtual void print() = 0;
    virtual void scan() = 0;
};

class DesktopPrinter : public Printer {
public:
    virtual void print() override {
        // code to print from desktop printer
    }

    virtual void scan() override {
        throw std::runtime_error("Desktop printers can't scan");
    }
};

class SmartphonePrinter : public Printer {
public:
    virtual void print() override {
        // code to print from smartphone printer
    }

    virtual void scan() override {
        // code to scan from smartphone printer
    }
};

//The Printer interface has too many methods, some of which are not relevant to all its clients 
//(e.g., the scan method is not relevant to desktop printers). 
//This violates the ISP because the interface should not force its clients to implement methods that they don't need.
//Solution: Split the interface into smaller interfaces.