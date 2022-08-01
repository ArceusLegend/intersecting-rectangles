#include<stdio.h>

void checkRect(double x1, double y1, double xd1, double yd1, double x2, double y2, double xd2, double yd2){
	double maxx1, maxy1, maxx2, maxy2;
	maxx1 = x1 + xd1; //corner at maximum length
	maxy1 = y1 + yd1; //corner at max height
	opr1 = maxx1 + maxy1; //opposite corner
	
	maxx2 = x2 + xd2; //corner at max length
	maxy2 = y2 + yd2; //corner at max height
	opr2 = maxx2 + maxy2; //opposite corner
	
	if(x1 >= maxx2 && maxx1 <= x2 && y1 >= maxy2 && y2 >= maxy1){ //no cuts?
	    printf("The rects don't cut into each other");
	}
	else{
		if((x1 == x2) || (opr1 == opr2){ //share sides?
			printf("Rects 1 & 2 share at least partially 1 or more sides")
		}
		else if((x1 < maxx2 && x1 > x2) && (maxy1 >= y2)){ //rect1 left side cuts into rect2
			findCut(x1, maxy1, x2, maxx2);
		}
		else if((maxx1 < maxx2 && maxx1 > x2) && (opr1 >= y2)){ //rect1 right side cuts into rect2
			findCut(maxx1, opr1, x2, maxx2);
		}
		 
		else if((x2 < maxx1 && x2 > x1) && (maxy2 >= y1)){ //rect2 left side cuts into rect1
			findCut(x1, maxy1, x2, maxx2);
		}
		else if((maxx1 < maxx2 && maxx2 > x1) && (opr2 >= y1)){ //rect2 right side cuts into rect1
			findCut(maxx1, opr1, x2, maxx2);
		}
	}
}

int main(){
	double x1, y1, ÷d1, yd1, x2, y2, xd2, yd2, i;
	
	printf("Enter bottom left corner coordinates for rectangle 1\n");
	printf("X: ");
	scanf("%lf", &x1);
	printf("Y: ");
	scanf("%lf", &y1);
	
	printf("Enter length: ");
	scanf("%lf", &xd1);
	printf("Enter height: ");
	scanf("%lf", &yd1);
	
	printf("Enter bottom left coordinates for rectangle 2\n");
	printf("X: ");
	scanf("%lf", &x2);
	printf("Y: ");
	scanf("%lf", &y2);
	
	printf("Enter length: ");
	scanf("%lf", &xd2);
	printf("Enter height: ");
	scanf("%lf", &yd2);
	
	checkRect(x1, y1, xd1, yd1, x2, y2, xd2, yd2);
	return 0;
}
