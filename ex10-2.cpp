#include <iostream>
typedef struct Distance{
    int     m;
    float   cm;
} distances;
distances add(distances d1,distances d2){
    distances dd;
    int temp;
    float temp;
    dd.cm = d1.cm + d2.cm;
    if(dd.cm > 100){
          //temp = dd.cm % 100.0f;
           dd.m =  dd.cm / 100;
            //printf(" %d \n",dd.m);
             temp = dd.cm - (dd.m * 100.0f);
             dd.cm = temp;
    }
    dd.m = dd.m + d1.m + d2.m;
    
    return dd;
}
int main() {
    distances       d1, d2;
    distances*         p_d;
    d1.m   =1;
    d1.cm = 78.5;
    d2.m   = 1;
    d2.cm = 77.5;
    p_d = &d1;
    d1 = add(d1,d2);
    printf("your height= %d m %f cm \n", d1.m,d1.cm);
    printf("Hello World");
    return 0;
}
