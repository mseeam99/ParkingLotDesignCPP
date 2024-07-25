#include <iostream>
#include "data.h"
#include "car.cpp"

# pragma once

using namespace std;

class Employee : Car <string, double, int> {
    private:

        EmployeeDataPacket  employeeData;

    public:

        Employee():Car(){
            employeeData.name           = "--UNKNOWN---";
            employeeData.position       = "--UNKNOWN---";
            employeeData.department     = "--UNKNOWN---";
            employeeData.age            = -0000;
            employeeData.phoneNumber    = "--UNKNOWN---";
        };

        Employee(string nameParam, string positionParam, string departmentParam, int ageParam, string phoneNumberParam,
                string brandParam, double priceParam, int yearParam, string numberPlateParam, string sizeParam)

        : Car(brandParam, priceParam, yearParam, numberPlateParam, sizeParam) {

            employeeData.name           = nameParam;
            employeeData.position       = positionParam;
            employeeData.department     = departmentParam;
            employeeData.age            = ageParam;
            employeeData.phoneNumber    = phoneNumberParam;

        }

        ~Employee() {}

        void setName(string nameParam){
            employeeData.name = nameParam;
        }

        void setPosition(string positionParam){
            employeeData.position = positionParam;
        }

        void setDepartment(string departmentParam){
            employeeData.department = departmentParam;
        }

        void setAge(int ageParam){
            employeeData.age = ageParam;
        }

        void setPhoneNumber(string phoneNumberParam){
            employeeData.phoneNumber = phoneNumberParam;
        }

        string getName()        {return employeeData.name;}
        string getPosition()    {return employeeData.position;}
        string getDepartment()  {return employeeData.department;}
        int getAge()            {return employeeData.age;}
        string getPhoneNumber() {return employeeData.phoneNumber;}

        /**********************************************************************
        *                                                                     *
        *                     Car class functions below                       *
        *                                                                     *
        **********************************************************************/
        
        string getBrand()           {return brand;}
        double getPrice()           {return price;}
        int getYear()               {return year;}
        string getNumberPlate()     {return numberPlate;}
        string getSize()            {return size;}

        void setBrand(string brandParam)                override {brand = brandParam;}
        void setPrice(double priceParam)                override {price = priceParam;}
        void setYear(int yearParam)                     override {year = yearParam;}
        void setNumberPlate(string numberPlateParam)    override {numberPlate = numberPlateParam;}
        void setSize(string sizeParam)                  override {size = sizeParam;}

};