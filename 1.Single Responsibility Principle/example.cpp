//Violation: A class that performs multiple unrelated tasks.

class Employee {
public:
    void calculateSalary();
    void printReport();
    void saveData();
};

//The Employee class has multiple responsibilities, such as calculating the employee's salary, printing reports, and saving data. This violates the SRP because the class should have a single responsibility.
//Solution: Separate the responsibilities into different classes.