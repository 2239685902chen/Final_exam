#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double q = 0, w = 0, e = 0, r = 0, t = 0;
	scanf("%lf%lf%lf%lf", &q, &w, &e, &r);
	q *= 0.2;
	w *= 0.1;
	e *= 0.2;
	r *= 0.5;
	t = q + w + e + r;
	printf("%.1lf\n", t);
	return 0;
}