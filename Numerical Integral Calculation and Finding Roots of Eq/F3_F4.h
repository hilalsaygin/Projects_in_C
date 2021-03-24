#include <stdio.h>
/* f3() and f4() are additional functions to not repeat the same steps 
for the calculation of the numeric value for given x values in cubic and quadratic equations.
f3() is used in the functions; root3,integral3  and  f4() is used in the functions; root4,integral4 */

double f3(double a0, double a1, double a2, double a3, double x){  /* In he form of > a3*x^3 + a2*x^2 + a1*x +a0 as cubic eq.
	Returns the numeric value of the cubic eq. for the given x value */
	return (((a3*x+a2)*x +a1)*x +a0); 							
}
/* ----------------  -----------------  -----------------  ----------------- */

double f4(double a0, double a1, double a2, double a3, double a4, double x){  /* In he form of > a4*x^4 + a3*x^3 + a2*x^2 + a1*x +a0 as quadratic eq.	
	Returns the numeric value of a quadratic eq. for the given x value */
	return ((((a4*x +a3)*x +a2)*x +a1)*x +a0) ;                             
}
