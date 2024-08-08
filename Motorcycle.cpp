#include "Motorcycle.h"

namespace VDMS {

    Motorcycle::Motorcycle(const std::string& vin, const std::string& make, const std::string& model, int year, bool hasSidecar)
        : Vehicle(vin, make, model, year), hasSidecar(hasSidecar) {}

    void Motorcycle::display() const {
        Vehicle::display();
        std::cout << "Has Sidecar: " << (hasSidecar ? "Yes" : "No") << std::endl;
    }

} // namespace VDMS
