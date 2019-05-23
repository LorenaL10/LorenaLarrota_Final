#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void leapFrog (t0, t_max, delta_t );

int main(){
    float m = 7294.29;
    float q = 2.0;
    float delta_t=0.1;
    float v_x=0.0;
    float v_y=1.0;
    float x=1.0;
    float y= 0.0;
    float campo=[10];
    float cte=m/q;
    float t0=0.0;
    float t_max=10.0;
    
    leapFrog (0,0, 10.0,0.1);
return 0;
}


float dz(){
    return v_x;
}

float dx(){
    return z;
}

 for(int i =0, i<100, i++){
     if ((i<3)|(i>7)){
         campo[i]=0.0;
     }
     else if ((i>3)&&(i<7)){
         campo[i]=[0,3]
     } 
 }

void leapFrog (t0, t_max, delta_t ){
    ofstream outfile;
    outfile.open("datos.dat");
    
    while (t0< t_max){
        outfile << t << " " << x << " " << y << endl;
        x=x + (cte * delta_t*dx());
        y= v_x + (cte* delta_t*dz);
        t0= t0+ delta_t;
    }
    outfile.close();
}
