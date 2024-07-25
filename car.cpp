#include <iostream>
using namespace std;

// template <string, double, int>
template <typename T, typename T1, typename T2> 

class Car{

    public:

        T numberPlate;
        T size;
        T brand;
        T1 price;
        T2 year;

        Car(){
            brand       = "--UNKNOWN---";
            price       = -0000;
            year        = -0000;
            numberPlate = "--UNKNOWN---";
            size        = "--UNKNOWN---";
        }

        Car(T brandParam, T1 priceParam, T2 yearParam, T numberPlateParam, T sizeParam){
            brand = brandParam;
            price = priceParam;
            year = yearParam;
            numberPlate = numberPlateParam;
            size = sizeParam;
        }

        ~Car(){}

        virtual void setBrand(T brandParam){
            brand = brandParam;
        }

        virtual void setPrice(T1 priceParam){
            price = priceParam;
        }

        virtual void setYear(T2 yearParam){
            year = yearParam;
        }

        virtual void setNumberPlate (T numberPlateParam){
            numberPlate = numberPlateParam;
        }

        virtual void setSize(T sizeParam){
            size = sizeParam;
        }

        T getBrand()        {return brand;}
        T1 getPrice()       {return price;}
        T2 getYear()        {return year;}
        T getNumberPlate()  {return numberPlate;}
        T getSize()         {return size;}

        
        /******************************************
        final keyword restricts @overriding

        virtual void setSize(T sizeParam) final {
            size = sizeParam;
        }
        *******************************************/
        
};
