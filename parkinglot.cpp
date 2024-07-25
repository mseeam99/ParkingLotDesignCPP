#include <iostream>
#include "employee.cpp"
#include "parkinglot.h"

using namespace std;

ParkingLot::ParkingLot(){}

ParkingLot::ParkingLot(Employee eachEmployee) {
    eachFinalEmployee = eachEmployee;
}

ParkingLot::~ParkingLot() {}

void ParkingLot::insertCar(Employee**& array, int ROWS, int COLS) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if(array[i][j].getNumberPlate() == "--UNKNOWN---"){
                array[i][j] = eachFinalEmployee;
                return;
            }
        }  
    }
}

void ParkingLot::removeCar(Employee**& array, int ROWS, int COLS) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if(array[i][j].getNumberPlate() == eachFinalEmployee.getNumberPlate()){
                array[i][j] = nullParking;
                return;
            }
        }   
    }
}

void ParkingLot::printParkingLot(Employee** array, int ROWS, int COLS) {
    cout<<"Press  1 for Name      : "<<endl;
    cout<<"Press  2 for Position  : "<<endl;
    cout<<"Press  3 for Department: "<<endl;
    cout<<"Press  4 for Age       : "<<endl;
    cout<<"Press  5 for Number    : "<<endl;
    cout<<"Press  6 for Car Brand : "<<endl;
    cout<<"Press  7 for Car Price : "<<endl;
    cout<<"Press  8 for Car Year  : "<<endl;
    cout<<"Press  9 for Car Number: "<<endl;
    cout<<"Press 10 for Car Size  : "<<endl;
    cout<<"Input: ";
    int value = 0;
    
    while(true){
        cin >> value;
        if (value > 0 && value < 11){ 
            break;
        }else{
            cout<<endl;
            cout<<"Enter a valid value!"<<endl;
            cout<<endl;
            cout<<"Press  1 for Name      : "<<endl;
            cout<<"Press  2 for Position  : "<<endl;
            cout<<"Press  3 for Department: "<<endl;
            cout<<"Press  4 for Age       : "<<endl;
            cout<<"Press  5 for Number    : "<<endl;
            cout<<"Press  6 for Car Brand : "<<endl;
            cout<<"Press  7 for Car Price : "<<endl;
            cout<<"Press  8 for Car Year  : "<<endl;
            cout<<"Press  9 for Car Number: "<<endl;
            cout<<"Press 10 for Car Size  : "<<endl;
            cout<<"Input: ";
        }
    }


    cout<<endl;cout<<endl;cout<<endl;cout<<endl;cout<<endl;
    cout<<"---------------------------- PARKING LOT ----------------------------"<<endl;
    cout<<endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            switch (value){
                case 1:
                    cout << array[i][j].getName() << " ";
                    break;
                case 2:
                    cout << array[i][j].getPosition() << " ";
                    break;
                case 3:
                    cout << array[i][j].getDepartment() << " ";
                    break;
                case 4:
                    cout << array[i][j].getAge() << " ";
                    break;
                case 5:
                    cout << array[i][j].getPhoneNumber() << " ";
                    break;
                case 6:
                    cout << array[i][j].getBrand() << " ";
                    break;
                case 7:
                    cout << array[i][j].getPrice() << " ";
                    break;
                case 8:
                    cout << array[i][j].getYear() << " ";
                    break;
                case 9:
                    cout << array[i][j].getNumberPlate() << " ";
                    break;
                case 10:
                    cout << array[i][j].getSize() << " ";
                    break;
            }
        }
        cout << endl;
    }
    cout << endl;
    cout<<"-------------------------- PARKING LOT ENDS --------------------------"<<endl;
    cout<<endl;
}



