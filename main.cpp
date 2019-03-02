#include <iostream>
#include "employee.h"
using namespace std;

void display(Employee emp) {
    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee Number: " << emp.getEmployeeNumber() << endl;
    cout << "Address: " << emp.getAddr() << endl;
    cout << "Phone: " << emp.getPhone() << endl;

    emp.printCheck();
}

int main() {
    
    Employee emp1(37, "Joe Brown", "123 Main St.", "123-6788", 10.00, 45.00);
    Employee emp2(37, "Sam Jones", "45 East State", "661-9000", 12.50, 30.00);

    display(emp1);
    display(emp2);
}