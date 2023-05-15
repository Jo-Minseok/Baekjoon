#include <stdio.h>

int main(){

	long long N, M, result;
	scanf("%lld %lld", &N, &M);	
	result=N-M;
	if(result<0){
		printf("%lld", -1*result);
	}
	else{
		printf("%lld", result);
	}
	return 0;
}