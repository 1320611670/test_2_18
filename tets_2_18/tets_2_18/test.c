#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main()
{
	//float f = 5.5;
	// 5.5
	// 101.1
	// (-1)^0*1.011*2^2
	// s=0
	// m=1.011
	// e=2
	// 0100 0000 1011 0000 0000 0000 0000 0000
	// 0x40b00000
	// return 0;

	int n = 9;
	// 0 00000000 00000000000000000001001 -补码

	float *pFloat = (float*)&n;
	printf("n的值为：%d\n", n); // 9
	printf("*pFloat的值为：%f\n", *pFloat); // 0.000000
	// (-1)^0 * 0.00000000000000000001001 * 2^-126

	*pFloat = 9.0;
	// 1001.0
	// (-1)^0 * 1.001 * 2^3
	// 01000001000100000000000000000000

	printf("num的值为：%d\n", n); // 1091567616
	printf("*pFloat的值为：%f\n", *pFloat); // 9.0
	return 0;
}