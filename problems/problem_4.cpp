#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    int n = 0;
    string ans;
    if (macAddress[0] == 'F' and macAddress[1] == 'F' ){
        ans =  "Broadcast";
    }else {
        n = (macAddress[1] - '0');
        if (n % 2 == 0) {
            ans = "Unicast";
        } else {
            ans = "Multicast";
        }
    }
    return ans;
    // make use of control flow statements
    // return result;
}
