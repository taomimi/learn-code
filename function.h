#pragma once
//�Ƿ�Ϊ����
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

//�������
void sum(int begin, int end) 
{
	int sum = 0;
	for (int i = begin; i <= end; i++) {
		sum += i;
	}
	printf("%d��%d�ĺ��ǣ�%d\n",begin,end,sum);
}

//�����Լ��:(շת�����)
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

//�����������������±�λ
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