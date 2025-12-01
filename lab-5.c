#include<stdio.h>
#include<stdlib.h>
#define Pi 3.1415

float cal_diameter(float r){
    float dia;
    dia= 2 *r;
    return dia;
}
float cal_circum(float r){
    float circum;
    circum = 2*Pi*r;
    return circum;
}
float cal_area(float r){
    float area;
    area= Pi*r*r;
    return area;
}

int main(){
float r,d,c,a;
while(1){
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    if(r < 0){
        break;
    }
    d = cal_diameter(r);
    c= cal_circum(r);
    a= cal_area(r);
    printf("Diameter of the circle: %f\n",d);
    printf("circum of the circle: %f\n",c);
    printf("area of the circle: %f\n",a);
}
return 0;
}
