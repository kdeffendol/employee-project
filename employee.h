#include <iostream>
using namespace std;

class Employee {
    private:
        int empNum;
        string name;
        string address;
        string phone;
        double hourlyWage;
        double hoursWorked;

    public:
        Employee(int empNum, string name, string address, string phone, double hourlyWage, double hoursWorked);
        
        void setName(const std::string& name);
        void setAddr(const std::string& address);
        void setPhone(const std::string& phone);
        void setHourlyWage(double wage);
        void setHoursWorked(double hours);


        /**
         * returns employee number
         * @return the employee number
         */
        int getEmployeeNumber() const;

        /**
         * returns the employee name
         * @return employee name
         */
        const std::string& getName() const;

        /**
         * returns the employee address
         * @return address
         */
        const std::string& getAddr() const;
        
        /**
         * returns the employee phone number
         * @return phone number
         */
        const std::string& getPhone() const;

        /**
         * returns the employee's hourly wage
         * @return hourly wage
         */
        double getHourlyWage() const;
        double getHoursWorked() const;


        /**
         * calculates net pay of employee
         * @return net pay
         */
        double calcPay() const;

        void const printCheck() const;
};