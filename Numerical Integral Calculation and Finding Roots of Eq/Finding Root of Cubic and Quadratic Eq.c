/*
** 
** By Hilal Saygin
*/

#include <stdio.h>
#include "F3_F4.h"
/* ----------------  -----------------  -----------------  ----------------- */
 
double root3 (double a0, double a1, double a2, double a3, double xs, double xe)  /* In he form of >  a3*x^3 + a2*x^2 + a1*x +a0	 */	
{	 /* finds the root of a cubic eq. with coefficients a4,a3,a2,a1,a0 within given range [xs,xe] and return the root */
	/* BISECTION METHOD */  
	double mid,root,checking=0;
	while(checking==0){
	
		mid=(xs+xe)/2;
		if( f3(a0,a1,a2,a3,mid) == 0 ){
			root=mid;
			checking=1;
		}
		else{
			if(f3(a0,a1,a2,a3,mid)*f3(a0,a1,a2,a3,xs) <0)
				xe=mid;
			else if(f3(a0,a1,a2,a3,mid)*f3(a0,a1,a2,a3,xe) <0)
				xs=mid;
		}
	}    
    return root;
}

/* ----------------  -----------------  -----------------  ----------------- */

double root4(double a0, double a1, double a2, double a3, double a4, double xs, double xe) /* In he form of >  a4*x^4 + a3*x^3 + a2*x^2 + a1*x +a0	*/
{	/* finds the root of a quadratic eq. with coefficients a4,a3,a2,a1,a0 within given range [xs,xe] and return the root */
	/* BISECTION METHOD */
	double mid,root,checking=0;
	while(checking==0){
	
		mid=(xs+xe)/2;
		if( f4(a0,a1,a2,a3,a4,mid) == 0 ){  /* checks if mid value is a root for the eq. if so assign it to root variable */
			root=mid;
			checking=1;
		}
		else{                               /* finding new start and end points for the new range*/
			if(f4(a0,a1,a2,a3,a4,mid)*f4(a0,a1,a2,a3,a4,xs) <0)
				xe=mid;
			else if(f4(a0,a1,a2,a3,a4,mid)*f4(a0,a1,a2,a3,a4,xe) <0)
				xs=mid;
		}
	}
    return root;
}

void main(){
	double a4, a3, a2, a1, a0,xs,xe;
	int deg;
	printf("Is your equation cubic or quadratic? \n1.Cubic \n2.Quadratic");
	scanf("%d",&deg);
	if(deg==1){
		printf("Enter the coefficients for cubic equation. \na3*x^3 +a2*x^2 +a1*x +a0 ");
		scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
		printf("Enter limitations of the range to check if a root exist within. \n Xstart Xend ");
		scanf("%lf %lf",&xs,&xe);
		printf("Root found within [%lf, %lf] :",xs,xe,root3(a0,a1,a2,a3,xs,xe));
	}
	else if (deg==2){
		printf("Enter the coefficients for Quadratic equation. \na4*x^4 +a3*x^3 +a2*x^2 +a1*x +a0 ");
		scanf("%lf %lf %lf %lf %lf",&a4,&a3,&a2,&a1,&a0);
		printf("Enter limitations of the range to check if a root exist within. \n Xstart Xend ");
		scanf("%lf %lf",&xs,&xe);
		printf("Root found within [%lf, %lf] :",xs,xe,root4(a0,a1,a2,a3,a4,xs,xe));
	}
}
