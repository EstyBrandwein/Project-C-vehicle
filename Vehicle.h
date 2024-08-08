#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

namespace VDMS {

    enum ServiceType { OilChange, Inspection, TireRotation };

    class Vehicle {
    public:
        Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year);
        Vehicle(const Vehicle& other); // Copy constructor
        virtual ~Vehicle(); // Destructor

        virtual void display() const; // const method
        static int getVehicleCount(); // Static method

    protected:
        std::string vin;
        std::string make;
        std::string model;
        int year;
        static int vehicleCount; // Static data member
    };

} // namespace VDMS

#endif // VEHICLE_H
