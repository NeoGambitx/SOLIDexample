class Printer {
public:
    virtual void print() = 0;
};

class Scanner {
public:
    virtual void scan() = 0;
};

class DesktopPrinter : public Printer {
public:
    virtual void print() override {
        // code to print from desktop printer
    }
};

class SmartphonePrinter : public Printer, public Scanner {
public:
    virtual void print() override {
        // code to print from smartphone printer
    }

    virtual void scan() override {
        // code to scan from smartphone printer
    }
};

//Here, we split the Printer interface into two smaller interfaces (Printer and Scanner). 
//The DesktopPrinter class only needs to implement the Printer interface, 
//while the SmartphonePrinter class implements both the Printer and Scanner interfaces.