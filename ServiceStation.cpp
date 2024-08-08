#include "ServiceStation.h"

namespace VDMS {

    void ServiceStation::addVehicle(Vehicle* vehicle, ServiceType service, int priority) {
        serviceQueue.push({ vehicle, service, priority });
    }

    void ServiceStation::processServices() {
        while (!serviceQueue.empty()) {
            ServiceRequest request = serviceQueue.top();
            serviceQueue.pop();

            std::cout << "Processing service for vehicle:" << std::endl;
            request.vehicle->display();
            std::cout << "Service Type: " << (request.service == OilChange ? "Oil Change" : request.service == Inspection ? "Inspection" : "Tire Rotation") << std::endl;
            std::cout << "Priority: " << request.priority << std::endl;
        }
    }

} // namespace VDMS
