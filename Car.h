#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

namespace VDMS {

    class Car : public Vehicle {
    public:
        Car(const std::string& vin, const std::string& make, const std::string& model, int year, int numDoors);
        virtual void display() const override; // Override display method

    private:
        int numDoors;
    };

} // namespace VDMS

#endif // CAR_H
