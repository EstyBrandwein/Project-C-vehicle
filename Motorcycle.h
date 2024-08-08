#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

namespace VDMS {

    class Motorcycle : public Vehicle {
    public:
        Motorcycle(const std::string& vin, const std::string& make, const std::string& model, int year, bool hasSidecar);
        virtual void display() const override; // Override display method

    private:
        bool hasSidecar;
    };

} // namespace VDMS

#endif // MOTORCYCLE_H
