#include "Monitor.h"

int main(){

    char* fileName = "/home/tommaso/build-DronaForPX4-Desktop_Qt_5_8_0_GCC_64bit-Default/Src/TestProjects/TestCommunicationLib/traj.csv";
    //char* STLSpec = "not ( ( ev_[0,60] ( 1 < x2[t] and x2[t] < 5 and 1 < x1[t] and x1[t] < 5 ) ) or ( ev_[0,40] ( -6 < x2[t] and x2[t] < -3 and -4 < x1[t] and x1[t] < -2 ) ) )";
    char* STLSpec = "alw_[0,60] ( -10 < x1[t] and x1[t] < 10 and -10 < x2[t] and x2[t] < 10 and -10 < x3[t] and x3[t] < 10)";

    Monitor *monitor = new Monitor();
    monitor->RobustnessOnLine(STLSpec, fileName);

}
