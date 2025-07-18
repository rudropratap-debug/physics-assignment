#include<stdio.h>
#include<math.h>
int main(){
    // d = slit distance 
    // theta = diffraction angle (in degree)
    // m = order of diffraction
    int m;
    double distance_mm , deg_theta;

    printf("Enter m: ");
    scanf("%d",&m);

    printf("Enter theta (in degree): ");
    scanf("%lf",&deg_theta);

    printf("Enter slit distance d (in micrometer): ");
    scanf("%lf",&distance_mm);

    // Converting diffraction angle from degree to radian.
    double degree_rads = deg_theta * (M_PI/180.0);
    // Converting slit distance from micrometer to meter.
    double distance_m = distance_mm * 1e-6;

    double lambda_m = (distance_m * sin(degree_rads)) / m;

    // converting wavelength from meter to nanometer;
    double lambda_nm = lambda_m * 1e9; 


    if (lambda_nm >= 380 && lambda_nm < 450) {
        printf("Wavelength  = %.2lf\n",lambda_nm);
        printf("Color: Violet\n");
    } 
    else if (lambda_nm >= 450 && lambda_nm < 485) {
        printf("Wavelength  = %.2lf\n",lambda_nm);
        printf("Color: Blue\n");
    }
    else if (lambda_nm >= 485 && lambda_nm < 500) {
        printf("Wavelength  = %.2lf\n",lambda_nm);
        printf("Color: Cyan\n");
    }
    else if (lambda_nm >= 500 && lambda_nm < 565) {
        printf("Wavelength  = %.2lf\n",lambda_nm);
        printf("Color: Green\n");
    }
    else if (lambda_nm >= 565 && lambda_nm < 590) {
        printf("Wavelength  = %.2lf\n",lambda_nm);
        printf("Color: Yellow\n");
    }
    else if (lambda_nm >= 590 && lambda_nm < 625) {
        printf("Wavelength  = %.2lf\n",lambda_nm);
        printf("Color: Orange\n");
    }
    else if (lambda_nm >= 625 && lambda_nm <= 750) {
        printf("Wavelength  = %.2lf\n",lambda_nm);
        printf("Color: Red\n");
    }

    else {
        printf("Wavelength  = %.2lf\n",lambda_nm);
        printf("Color: Not visible\n");
    }
    return 0;
}