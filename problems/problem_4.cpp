#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    int n = 0;
    if (&macAddress[0] == 'F' and &macAddress[1] == 'F' ){
        return "Broadcast";
    }else{
        if (&macAddress[0] >= '0' and &macAddress[0] <= '0'){
            n += (&macAddress[0] - '0') * 16;
        }else {
            n += (&macAddress[0] - 'A' + 10) * 16;
        }
        if (&macAddress[1] >= '0' and &macAddress[1] <= '0'){
            n += (&macAddress[1] - '0');
        }else {
            n += (&macAddress[1] - 'A' + 10);
        }
        if(n % 2 == 0){
            return "Unicast";
        }else{
            return "Multicast";
        }
    }
    // make use of control flow statements
    // return result;
}
