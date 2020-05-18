#include <stdio.h>
#include <string.h>

int main (){
	
	
	float b = 0, h = 0, r = 0;
	char ef[9], cir[] = "circle", rec[] = "rectangle", tri[] = "triangle", squ[]= "square", rho[] ="rhombus";
	printf("Place the geometric shape, which you want to calculate the area \n");
	scanf("%s", &ef);
	if(strcmp(ef, cir) == 0){
		printf("Place the Radio of Circle \n");
		scanf("%f", &b);
		r = b * b * 3,14;
		printf("The area of Circle is: %f", r);
	}else if (strcmp(ef, rec) == 0){
		printf("Place the Length and Width of Rectangle \n");
		scanf("%f", &b);
		scanf("%f", &h);
		r = b * h;
		printf("The area of Rectangle is: %f", r);
	}else if (strcmp(ef, tri) == 0){
		printf("Place the Base and Height of Triangle \n");
		scanf("%f", &b);
		scanf("%f", &h);
		r = h * b / 2;
		printf("The area of Triangle is: %f", r);
	}else if (strcmp(ef, squ) == 0){
		printf("Place the Side of Square \n");
		scanf("%f", &b);
		r = b * b;
		printf("The area of Square is: %f", r);
	}else if (strcmp(ef, rho) == 0){
		printf("Place the First Diagonal and Second Diagonal of Rhombus \n");
		scanf("%f", &b);
		scanf("%f", &h);
		r = b * h / 2;
		printf("The area of Rhombus is: %f", r);
	}else{
		printf("You need to put a valid geometric shape, in minus. (triangle, circle, rhombus, rectangle, square)");
	}
}
