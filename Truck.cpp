#include "Truck.h"

namespace VDMS {

    Truck::Truck(const std::string& vin, const std::string& make, const std::string& model, int year, double payload)
        : Vehicle(vin, make, model, year), payload(payload) {}

    void Truck::display() const {
        Vehicle::display();
        std::cout << "Payload: " << payload << " tons" << std::endl;
    }

} // namespace VDMS
