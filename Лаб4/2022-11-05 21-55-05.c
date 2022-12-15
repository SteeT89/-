#include <math.h>

#define AE 10.0
#define BE 7.0
#define S 0.5

double fun(double x, double y){
    return (pow(sin(x),2)+pow(cos(y),2))*2.0;
}

int main(){
    double x,y;
    while(1){
        printf("Vedite coordinatu X: ");
        scanf("%lf",&x);
        printf("Vvedite coordinatu Y: ");
        scanf("%lf",&y);
        printf("Znachenie: %3.3lf\n", fun(x,y));
    }
    return 0;
}
