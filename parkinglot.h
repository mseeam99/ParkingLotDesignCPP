# ifndef PARKING_LOT
# define PARKING_LOT

#include <iostream>
#include "employee.cpp"

using namespace std;

class ParkingLot {
public:

    Employee eachFinalEmployee;
    Employee nullParking;
    
    ParkingLot();
    ParkingLot(Employee eachEmployee);
    ~ParkingLot();

    void insertCar(Employee**& array, int ROWS, int COLS);
    void removeCar(Employee**& array, int ROWS, int COLS);
    void printParkingLot(Employee** array, int ROWS, int COLS);

};

# endif
