#include <stdio.h>

int main() {
	
	int count,i, arr[1000]={0}, max = 0;
	double sum = 0;
	scanf("%d", &count);
	for(i=0;i<count;i++){
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < count; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	for (i = 0; i < count; i++) {
		sum += (double)arr[i]/max*100;
	}
	printf("%f", sum / count);
	return 0;
}