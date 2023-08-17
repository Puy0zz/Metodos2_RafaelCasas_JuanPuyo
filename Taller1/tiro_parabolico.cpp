
#include <iostream>
#include <math.h>
using namespace std;

float x(float t, float h, float v, float g)
    {
        return (pow(v,2)/g)*(sin(2*t)/2+sqrt((1/pow(cos(t),2))*(1+2*g*h/pow(v,2))-1)*pow(cos(t),2));
    
    }

float parabolic(float H_param, float v_param)
{
    // su codigo aqui
    float g;
    g=9.8;
    string i="GO";
    
    float t=0.0;
    float t_new;
    
    
    while (i == "GO"){
        
        t_new=t+0.001;
        float current= x(t,H_param,v_param,g);
        
        float nw=x(t_new,H_param,v_param,g);
        
        if (current > nw){
            i="STOP";
            
            
        }
        if (nw > current){
            
            t=t_new;
        }
        
    }
    
    
    return t*180/3.14159265359;
    
    


}

int main() {
    float H_1 = 10.0;
    float v_1 = 5.0;
    cout << "The angle of maximum distance in case 1 is: " << parabolic(H_1, v_1) << endl;

    float H_2 = 0.0;
    float v_2 = 30.0;
    cout << "The angle of maximum distance in case 2 is: " << parabolic(H_2, v_2) << endl;

    float H_3 = 20.0;
    float v_3 = 50.0;
    cout << "The angle of maximum distance in case 3 is: " << parabolic(H_3, v_3) << endl;

    return 0;
}
