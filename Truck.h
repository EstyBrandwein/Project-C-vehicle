#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

namespace VDMS {

    class Truck : public Vehicle {
    public:
        Truck(const std::string& vin, const std::string& make, const std::string& model, int year, double payload);
        virtual void display() const override; // Override display method

    private:
        double payload;
    };

} // namespace VDMS

#endif // TRUCK_H
