#include "Car.h"

namespace VDMS {

    Car::Car(const std::string& vin, const std::string& make, const std::string& model, int year, int numDoors)
        : Vehicle(vin, make, model, year), numDoors(numDoors) {}

    void Car::display() const {
        Vehicle::display();
        std::cout << "Number of Doors: " << numDoors << std::endl;
    }

} // namespace VDMS
