#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool validatedata(int a, int b){
	if (a <= 0 || b <= 0){
		printf("canh cua tam giac khong nho hon hoac bang 0");
		return false;
	}
	return true;
}
int tinhcanhhuyen(int a, int b){
	return sqrt(a*a+b*b);
}
int main(){
	int a, b;
	printf("nhap chieu dai canh thu nhat: \n");
	scanf("%d", &a);
	printf("nhap chieu dai canh thu hai: \n");
	scanf("%d", &b);
	bool isvalidatedata = validatedata(a, b);
	if (isvalidatedata){
		printf("canh huyen cua tam giac: %d", tinhcanhhuyen(a, b));
	}
	return 0;
}
