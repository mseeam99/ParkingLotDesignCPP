#include <iostream>
#include "parkinglot.cpp"
#include <vector>
#include <new>
#include <stdexcept>

using namespace std;

enum Difficulty {
    EASY,
    MEDIUM,
    HARD
};

Difficulty getDifficulty(int rating) {
    if (rating == 1 || rating == 2) {
        return Difficulty::EASY;
    } else if (rating == 3) {
        return Difficulty::MEDIUM;
    } else if (rating == 4 || rating == 5) {
        return Difficulty::HARD;
    } else {
        throw std::invalid_argument("Invalid rating");
    }
}

const char* toString(Difficulty difficulty) {
    switch (difficulty) {
        case Difficulty::EASY:      return "EASY";
        case Difficulty::MEDIUM:    return "MEDIUM";
        case Difficulty::HARD:      return "HARD";
        default:                    return "UNKNOWN";
    }
}

int main() {
    cout << "---------------------------- PROGRAM STARTED ----------------------------" << endl;

    const int ROWS = 2;
    const int COLS = 5;

    try {
        Employee **array = new Employee *[ROWS];

        for (int i = 0; i < ROWS; i++) {
            array[i] = new Employee[COLS];
        }

        Employee employee1("---Seeam----","--Hardware--","-----IT-----", 24, "876-121-7576", "-Accord2008-",   5000,   2008, "---EEH2011---", "LARGEX");
        Employee employee2("---Sagor----","--Software--","-----IT-----", 28, "488-333-0101", "-Accord2012-",   10000,  2012, "---YYH1111---", "LARGEX");
        Employee employee3("---Mizan----","--Politics--","----ARTS----", 60, "233-333-0101", "--BMWVANGA--",   90000,  2016, "---CC91111---", "LARGEX");
        Employee employee4("---Shipa----","--Kitchenn--","----ARTS----", 52, "144-333-3333", "---Toyota---",   7000,   2010, "---DD18181---", "MEDIUM");
        Employee employee5("---Nipaa----","---Design---","----ARTS----", 35, "128-333-0101", "---Pajero---",   13000,  2020, "---PP90999---", "SMALLX");
        Employee employee6("---NANAA----","---Gossip---","----ARTS----", 70, "876-121-7576", "-Accord2008-",   5000,   2008, "---MMH2021---", "LARGEX");
        Employee employee7("---RAZUU----","-MANAGEMENT-","--BUSINESS--", 44, "478-333-0101", "-Accord2012-",   10000,  2012, "---HH11111---", "LARGEX");
        Employee employee8("---LIPAA----","--Politics--","--RELIGION--", 39, "239-000-0101", "--BMWVANGA--",   90000,  2016, "---AA91111---", "LARGEX");
        Employee employee9("---LABIB----","-MANAGEMENT-","--BUSINESS--", 13, "142-313-3333", "---Toyota---",   7000,   2010, "---ZZ18181---", "MEDIUM");
        Employee employee10("---RAWZA----","---HEALTH---","--MEDICINE--", 8, "122-131-0101", "---Pajero---",   13000,  2020, "---QQ90999---", "SMALLX");

        Employee employeesArray[] = {employee1, employee2, employee3, employee4, employee5, employee6, employee7, employee8, employee9, employee10};

        int iteration = sizeof(employeesArray) / sizeof(employeesArray[0]);

        vector<ParkingLot> parkingLotList;

        for (int i = 0; i < iteration; i++) {
            ParkingLot parkingObject(employeesArray[i]);
            parkingLotList.push_back(parkingObject); 
        }

        for (int i = 0; i < iteration; i++) {
            parkingLotList.at(i).insertCar(array, ROWS, COLS);
        }

        parkingLotList.at(5).printParkingLot(array, ROWS, COLS);
        parkingLotList.at(5).printParkingLot(array, ROWS, COLS);

        parkingLotList.at(7).removeCar(array, ROWS, COLS);
        parkingLotList.at(7).printParkingLot(array, ROWS, COLS);

        ParkingLot* parking = new ParkingLot(employeesArray[0]);
        parking->printParkingLot(array, ROWS, COLS);
        
        for (int i = 0; i < ROWS; i++) {
            delete[] array[i];
        }

        delete[] array;
        delete parking; 

    } catch (std::bad_alloc& e) {
        cout << "ERROR INITIALIZING 2D ARRAY USING DOUBLE POINTER: " << e.what() << endl;
    } catch (const std::invalid_argument& e) {
        cout << "ERROR: " << e.what() << endl;
    }

    cout<<"Please give us a rating of this project (0-5): ";
    int rating = 0;
    cin >> rating; 

    cout<<endl;

    try {
        Difficulty difficulty = getDifficulty(rating);
        std::cout <<"This project is "<<toString(difficulty) << " based on your rating !"<<std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}






/*
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    
    Animal* animalPtr1 = new Animal();  //prints Animal speaks
    animalPtr1->speak(); 
    
    Animal* animalPtr2 = new Dog();     //prints Dog barks
    animalPtr2->speak(); 
    
    Dog* dogPtr1 = new Dog();
    dogPtr1->speak();                   //prints Dog barks
    
//    Dog* dogPtr2 = new Animal();        // Error
//    dogPtr2->speak();  
    
    delete animalPtr1;
    delete animalPtr2;
    delete dogPtr1;

    return 0;
}
*/