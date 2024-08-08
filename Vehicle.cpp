#include "Vehicle.h"

namespace VDMS {

    int Vehicle::vehicleCount = 0;

    Vehicle::Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year)
        : vin(vin), make(make), model(model), year(year) {
        ++vehicleCount;
    }

    Vehicle::Vehicle(const Vehicle& other)
        : vin(other.vin), make(other.make), model(other.model), year(other.year) {
        ++vehicleCount;
    }

    Vehicle::~Vehicle() {
        --vehicleCount;
    }

    void Vehicle::display() const {
        std::cout << "VIN: " << vin << "\nMake: " << make << "\nModel: " << model << "\nYear: " << year << std::endl;
    }

    int Vehicle::getVehicleCount() {
        return vehicleCount;
    }

} // namespace VDMS
