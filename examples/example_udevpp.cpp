#include <iostream>

#include "udevpp.h"

int main() {
    using namespace udevpp;

    UDev udev;
    UDevMonitor monitor(udev);

    std::cout << "Waiting for device" << std::endl;

    auto device = monitor.wait_for_device();

    if (device) {
        std::cout << "Valid device" << std::endl;
    } else {
        std::cout << "Invalid device" << std::endl;
    }

    return 0;
}