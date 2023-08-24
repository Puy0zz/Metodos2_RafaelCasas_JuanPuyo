#ifndef MICROWAVE_H_
#define MICROWAVE_H_

class Microwave
{
    private:

    int time_sec;
    int time_min;

    public:

    Microwave();

    void get_time_sec(int time_sec_param);

    void get_time_min(int time_min_param);

    void add_time_sec(int add_time_sec_param); 

    void add_time_min(int add_time_min_param); 

    void del_time_sec(int del_time_sec_param); 

    void del_time_min(int del_time_min_param);

    void set_time_sec(int time_sec_param);

    void set_time_min(int time_min_param);

    void show_time(); 
    
};
#endif
