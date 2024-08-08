#ifndef SERVICESTATION_H
#define SERVICESTATION_H

#include "Vehicle.h"
#include <queue>
#include <functional>

namespace VDMS {

    class ServiceStation {
    public:
        void addVehicle(Vehicle* vehicle, ServiceType service, int priority);
        void processServices();

    private:
        struct ServiceRequest {
            Vehicle* vehicle;
            ServiceType service;
            int priority;
            bool operator<(const ServiceRequest& other) const {
                return priority < other.priority;
            }
        };

        std::priority_queue<ServiceRequest> serviceQueue;
    };

} // namespace VDMS

#endif // SERVICESTATION_H
