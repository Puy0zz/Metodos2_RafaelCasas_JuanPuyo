#ifndef REMOTECONTROL_H_
#define REMOTECONTROL_H_
#include "microwave.h"
class RemoteControl
{
    private:

    Microwave microwave;
    int time_min;
    int time_sec;
    
    public:

        RemoteControl(Microwave microwave);

        void set_time(int time_sec_param, int time_min_param); 

        void add_time_sec(int add_time_sec_param); 

        void add_time_min(int add_time_min_param); 

        void del_time_sec(int del_time_sec_param); 

        void del_time_min(int del_time_min_param);

        void show_time(); 
};

#endif



