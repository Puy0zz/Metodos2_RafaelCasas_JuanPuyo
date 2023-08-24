#include <iostream>
#include "microwave.h"
#include "remotecontrol.h"

Microwave::Microwave() : time_sec(0), time_min(0) {}

void Microwave::set_time_sec(int time_sec_param) {
    if (time_sec_param >= 0 && time_sec_param <= 59) {
        time_sec = time_sec_param;
    }
}

void Microwave::set_time_min(int time_min_param) {
    if (time_min_param >= 0 && time_min_param <= 90) {
        time_min = time_min_param;
    }
}

void Microwave::add_time_sec(int add_time_sec_param) {
    time_sec += add_time_sec_param;
    if (time_sec >= 60) {
        time_min += time_sec / 60;
        time_sec %= 60;
    }
}

void Microwave::add_time_min(int add_time_min_param) {
    time_min += add_time_min_param;
    if (time_min > 90) {
        time_min = 90;
    }
}

void Microwave::del_time_sec(int del_time_sec_param) {
    int total_seconds = time_min * 60 + time_sec;
    total_seconds -= del_time_sec_param;

    if (total_seconds < 0) {
        time_min = 0;
        time_sec = 0;
    } else {
        time_min = total_seconds / 60;
        time_sec = total_seconds % 60;
    }
}

void Microwave::del_time_min(int del_time_min_param) {
    time_min -= del_time_min_param;
    if (time_min < 0) {
        time_min = 0;
    }
}

void Microwave::show_time() {
    std::cout << (time_min < 10 ? "0" : "") << time_min << ":"
              << (time_sec < 10 ? "0" : "") << time_sec << std::endl;
}




