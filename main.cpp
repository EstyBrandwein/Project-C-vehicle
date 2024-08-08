#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "ServiceStation.h"

using namespace VDMS;

int main() {
    Car car1("1HGCM82633A123456", "Honda", "Accord", 2020, 4);
    Truck truck1("1HTMKADN43H561234", "Volvo", "FH16", 2019, 20.0);
    Motorcycle moto1("JH2SC590XMK123456", "Yamaha", "MT-07", 2021, true);

    ServiceStation station;

    station.addVehicle(&car1, OilChange, 2);
    station.addVehicle(&truck1, Inspection, 1);
    station.addVehicle(&moto1, TireRotation, 3);

    station.processServices();

    return 0;
}
