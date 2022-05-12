#pragma once
//是否为素数
int isPrime(int i)
{
	int ret = 1;
	for (int k = 2; k < i - 1; k++) {
		if (i % k == 0) {
			ret = 0;
			break;
		}
	}

	return ret;
}

//整数求和
void sum(int begin, int end) 
{
	int sum = 0;
	for (int i = begin; i <= end; i++) {
		sum += i;
	}
	printf("%d到%d的和是：%d\n",begin,end,sum);
}

//求最大公约数:(辗转相除法)
void gcd(int x,int y)
{
	int t = 0;
	while (y != 0) {
		t = x % y;
		x = y;
		y = t;
	}
	printf("gcd = %d\n", x);
}

//搜索数组数字所在下标位
int search(int key, int a[], int length)
{
	int ret = -1;
	int i;
	for (i = 0; i < length; i++) {
		if (a[i] == key) {
			ret = i;
			break;
		}
	}
	return ret;
}