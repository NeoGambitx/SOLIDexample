class SalaryCalculator {
public:
    void calculateSalary();
};

class ReportPrinter {
public:
    void printReport();
};

class DataSaver {
public:
    void saveData();
};

class Employee {
public:
    Employee(SalaryCalculator& calculator, ReportPrinter& printer, DataSaver& saver)
        : calculator_(calculator), printer_(printer), saver_(saver) {}

    void processEmployeeData();

private:
    SalaryCalculator& calculator_;
    ReportPrinter& printer_;
    DataSaver& saver_;
};

//Here, we separate the responsibilities into different classes (SalaryCalculator, ReportPrinter, and DataSaver). 
//The Employee class now has a single responsibility of processing employee data, 
//which it does by delegating the responsibilities to the other classes.