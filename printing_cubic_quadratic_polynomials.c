#include <stdio.h>

void expression_(double, char []);

void write_polynomial3(double a3, double a2, double a1, double a0)
{/* In the form of a3*x^3 +a2*x^2 +a1*x +a0 */	
/* prints the correct form for the expressions with given coefficients for cubic equation. */

	char x3[5]="x^3", x2[5]="x^2";

	if (a3 == 1){
		printf("%s",x3);	
	}	
	else if (a3>0){
		printf("%.1f%s",a3,x3);	
	}
	if (a3== -1){
		printf("-%s",x3);	
	}	
	else if (a3<0){
		printf("%.1f%s",a3,x3);	
	}
	expression_(a2,x2);
	expression_(a1,"x");	

	if (a0>0)	
    	printf(" +%.1f\n",a0);
	
	if(a0<0)
        printf(" %.1f\n",a0);

}

void write_polynomial4(double a4, double a3, double a2, double a1, double a0)
{/* In the form of a4*x^4 +a3*x^3 +a2*x^2 +a1*x +a0 */
    char x4[5]="x^4", x3[5]="x^3", x2[5]="x^2"; 	/* x related expressions of quadratic equation in char array. */

/* prints the correct form for the expressions with given coefficients for quadratic equation. */
	if (a4 == 1){
    		printf("%s",x4);	
		}	
    	else if (a4>0){
    		printf("%.1f%s",a4,x4);	
		}
	if (a4== -1){
    		printf("-%s",x4);	
		}	
    	else if (a4<0){
    		printf("%.1f%s",a4,x4);	
		}
	
	expression_(a3,x3);
	
	expression_(a2,x2);	
	
	expression_(a1,"x");
	
	if (a0>0)	
    	printf(" +%.1f",a0);
			
	if(a0<0)
        printf(" %.1f",a0);

}
/* expression_() is an additional function to avoid repetition in  write_polynomial and write_polynomial4 
in the process of finding the correct form for each expression of the equation.*/
void expression_(double coff, char exp[]){  /* takes the dependent x related expression and its coefficient 
					                         then prints it in the right form for given value. */
/* coff: numerical value of coefficient can be poz. neg. or zero , exp: x related expression like x^4 or x^3 */

	if (coff == 1){
		printf(" +%s",exp);	
	}	
	else if (coff>0){
		printf(" +%.1f%s",coff,exp);	
	}
	if (coff == -1){
		printf(" -%s",exp);	
	}	
	else if (coff<0){
		printf(" %.1f%s",coff,exp);	
	}	
}
void main(){
	double a4, a3, a2, a1, a0;
	printf("Enter the coefficients for cubic equation to print in a polynomial format. \na3 a2 a1 a0 ");
	scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
	write_polynomial3(a3,a2,a1,a0);
	
	printf("Enter the coefficients for quadratic equation to print in a polynomial format. \na4 a3 a2 a1 a0 ");
	scanf("%lf %lf %lf %lf %lf",&a4,&a3,&a2,&a1,&a0);
	write_polynomial4(a4,a3,a2,a1,a0);
}
