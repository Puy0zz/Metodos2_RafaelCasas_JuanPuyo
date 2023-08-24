#include <iostream>
#include "microwave.h"
#include "remotecontrol.h"
using namespace std;

RemoteControl::RemoteControl(Microwave microwave) : microwave(microwave) {}

void RemoteControl::set_time(int time_sec_param, int time_min_param) {
    time_sec = time_sec_param;
    time_min = time_min_param;
}

void RemoteControl::add_time_sec(int add_time_sec_param) {
    time_sec += add_time_sec_param;
    if (time_sec >= 60) {
        time_min += time_sec / 60;
        time_sec %= 60;
    }
}

void RemoteControl::add_time_min(int add_time_min_param) {
    time_min += add_time_min_param;
    if (time_min > 90) {
        time_min = 90; 
    }
}

void RemoteControl::del_time_sec(int del_time_sec_param) {
    time_sec -= del_time_sec_param;
    while (time_sec < 0) {
        time_min--;
        time_sec += 60;
    }
}

void RemoteControl::del_time_min(int del_time_min_param) {
    time_min -= del_time_min_param;
    if (time_min < 0) {
        time_min = 0;
    }
}

void RemoteControl::show_time() {
    std::cout << (time_min < 10 ? "0" : "") << time_min << ":"
              << (time_sec < 10 ? "0" : "") << time_sec << std::endl;
}
