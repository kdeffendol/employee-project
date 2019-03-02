#include "employee.h"

using namespace std;

Employee::Employee(int empNum, string name, string address, string phone, double hourlyWage, double hoursWorked) {
    this->empNum = empNum;
    this->name = name;
    this->address = address;
    this->phone = phone;
    this->hourlyWage = hourlyWage;
    this->hoursWorked = hoursWorked;
}

//getter functions
int Employee::getEmployeeNumber() const {
    return empNum;
}

const std::string& Employee::getName() const {
    return name;
}

const std::string& Employee::getAddr() const {
    return address;
}

const std::string& Employee::getPhone() const {
    return phone;
}

double Employee::getHourlyWage() const {
    return hourlyWage;
}

double Employee::getHoursWorked() const {
    return hoursWorked;
}

//setter functions
void Employee::setName(const std::string& name) {
    this->name = name;
}

void Employee::setAddr(const std::string& address) {
    this->address = address;
}

void Employee::setPhone(const std::string& phone) {
    this->phone = phone;
}

void Employee::setHourlyWage(double wage) {
    hourlyWage = wage;
}

void Employee::setHoursWorked(double hours) {
    hoursWorked = hours;
}


double Employee::calcPay() const {
    double gross;
    //get hours
    if (getHoursWorked() <= 40) {
        gross = getHoursWorked() * getHourlyWage();
    }
    else if (getHoursWorked() > 40) { //overtime
        gross = (((getHoursWorked() - 40) * 1.5) + 40) * getHourlyWage();
    }
    return gross * 0.725;
}

void const Employee::printCheck() const {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "....................UVU Computer Science Dept................................." << endl;
    cout << "Pay to the order of " << getName() << " ....................................$" << calcPay() << endl;
    cout << endl;
    cout << "United Community Credit Union" << endl;
    cout << ".............................................................................." << endl;
    cout << endl;
    cout << "Hours worked: " << getHoursWorked() << endl;
    cout << "Hourly wage: " << getHourlyWage() << endl;
}