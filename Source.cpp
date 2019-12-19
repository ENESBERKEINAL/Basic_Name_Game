#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time_t(NULL));
	
	int i,len,r;
	char k;
	printf("How many karakter your name? ");
	scanf("%d", &len);
	char name[88];
	printf("Enter your full name");
	scanf("%s", name);

	for (i = 0; i <len; i++){
		printf("%c", name[i]);
	}

	srand(time_t(NULL));
	r = rand()%len;

	printf("What is your %d. character in your full name?",r);
	scanf("%c", &k);

	if ('k' == name[r]) {
		printf("You are right");
	}
	else {
		printf("You are failed");
	}

	system("pause");
	return 0;
}