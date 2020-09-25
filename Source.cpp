#include <stdio.h> 
#include <math.h>
#define pi  3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091

float tr(float x, float y)
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

float ta(float x, float y)
{
	float df;
	if (x = 0)
		df = y > 0 ? 90 : -90;
	if (x > 0)
		df = atan(y / x);
	else
		if (x < 0 && y < 0)
			df = -pi + atan(y / x);
		else
			df = pi + atan(y / x);
	return df;
}

int main()
{
	float a, b;
	printf("(cherez probel vvesti)  a & b = "); scanf_s("%f %f", &a, &b); 

    //тригонометрическая запись числа 
	float r = tr(a, b);
	float arg = ta(a, b);
	printf("z trigonometricheskaya\n");
	printf("z=|%f|(cos%0.3f*+i*sin%0.3f*)\n", r, arg, arg); 



	//обратное число
	float a_rev = a / (pow(a, 2) + pow(b, 2));
	float b_rev = b / (pow(a, 2) + pow(b, 2));
	printf("z obratnoe\n");
	printf("z=%0.3f(cos%0.3f*-i*sin%0.3f*)\n", 1 / r, arg, arg);


	
	float n;
	printf("BBECTI STEPEN");
	printf(" \n");
	printf("n=");
	scanf_s("%f", &n);//ввод n
	printf(" \n");

	
	printf("z v stepeni n \n");
	float r_pow_n = pow(r, n);
	float arg_pow_n = arg * n;
	printf("z^n=%0.5f(cos%0.5f*+i*sin%0.5f*)\n", r_pow_n, arg_pow_n, arg_pow_n);//возведене в степень n 

	
	printf("Vse korni k n-oy posledovatelnosti iz z \n");//все корни n-ой степени 
	for (int k = 0; k <= n; k++)
	{
		float r_root_n = pow(r, 1 / n);
		float arg_root_n = (arg + 2 * pi * k) / n;
		if (r > 0)
			printf("k=%d; z^(1/n)=%0.5f(cos%0.5f*+i*sin%0.5f\n", k, r_root_n, arg_root_n, arg_root_n);
		else
			printf("k=%d; z^(1/n)=%0.5f(cos-%0.5f*+i*sin-%0.5f\n", k, r_root_n, arg_root_n, arg_root_n);
	}

	
                        	return 0;
	
}