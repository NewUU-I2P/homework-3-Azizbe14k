#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::stringstream ss(macAddress);
    std::string octet;
    std::getline(ss, octet, ':');
    std::string result;

    int firstOctet;
    ss.clear();
    ss.str(octet);
    ss >> std::hex >> firstOctet;

    if (firstOctet % 2 == 0) {
        result = "Unicast";
    }else if (firstOctet % 2 != 0) {
        result = "Multicast";
    }else if (macAddress == "FF:FF:FF:FF:FF:FF") {
        result = "Broadcast";
    }

    // make use of control flow statements
    // return result;
return result;
}
