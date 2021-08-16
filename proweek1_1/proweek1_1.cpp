#include<stdio.h>
int main() {
	int n[3];
	for (int i = 0; i < 3; i++) {
		printf("Enter number : ");
		scanf_s("%d", &n[i]);
	}
	if (n[0] >= n[1] && n[0] >= n[2]) 
			printf("%d", n[0]);
	else if (n[1] > n[0] && n[1] >= n[2]) 
			printf("%d", n[1]);
	else if (n[2] > n[0] && n[2] > n[1]) 
			printf("%d", n[2]);
}