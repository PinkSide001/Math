#include<stdio.h>
#include<math.h>
float circle();
float triangle();
float trapezium();
float pentagon();
int main(){
	circle();
	triangle();
	trapezium();
	pentagon();
}
 float circle(){
 	float r;
 	printf("Find area of circle\n");
	printf("Enter r = ");
	scanf("%f",&r);
	printf("Area of circle = %f",(22.0/7.0)*(r*r));
	return 0;
 }
 float triangle(){
	 double a, b, c, s, area;
    printf("\nFind area of triangle\n");
    printf("Enter sides of a triangle\n");
    printf("a = ");
    scanf("%lf",&a);
    printf("b = ");
    scanf("%lf",&b);
    printf("c = ");
    scanf("%lf",&c);
    s = (a+b+c)/2; // Semiperimeter
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle = %.2lf\n", area);
    return 0;
	}
	float trapezium(){
	float a, b, h;
    float area;
    printf("Enter the value for two bases & height of the trapezium: \n");
    printf("Enter a = ");
    scanf("%f",&a);
    printf("Enter b = ");
    scanf("%f",&b);
    printf("Enter h = ");
    scanf("%f",&h);
    area = 0.5 * (a + b) * h ;
    printf("Area of the trapezium is: %.3f\n", area);
	}
	float pentagon(){
	float coefficient=1.7204774;
    float c, area;
    printf("Find area of pentagon");
    printf("\nEnter the side: ");
    scanf("%f", &c);
    area=coefficient*c*c;
    printf("\nThe area is %.3f ", area);
    return 0;
	}
	
	
