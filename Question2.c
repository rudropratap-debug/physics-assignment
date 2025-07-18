#include<stdio.h>
#include<math.h>
int main(){

    // m1 = bright order for green 
    // m2 = bright order for red
    // lambda1_nm = green light wavelength
    // lambda2_nm = red light wavelength
    // theta1_deg = angle of m1 for green light

    int m1 = 3; 
    int m2 = 2;
    double lambda1_nm = 530;
    double lambda2_nm = 700;
    double theta1_deg = 65.0;

    //converting theta1_deg from degree to radian
    double theta1_rad = theta1_deg * (M_PI/180.0);

    double theta2_sin =(m2 * lambda2_nm * sin(theta1_rad)) / (m1 * lambda1_nm);

    if(theta2_sin >1){
        printf("Second order bright spot dose not exists for red light\n");
    }

    else {
        double theta2_rad = asin(theta2_sin);
        double theta2_deg = theta2_rad * (180.0 / M_PI);

        printf("Second order bright spot angle for red light is : %.2lf degrees\n",theta2_deg);
    }
    return 0;
}