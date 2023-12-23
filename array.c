#include <stdio.h>

void fun(int arr[], int len);

int main(){

	//passing this array in the fun function as an argument
	int fun_arr[5] = {1, 2, 3 ,7 , 76};
	fun(fun_arr, 5);

	int marks[3] = {};
	char subject[3][10] = {"Bengali", "English", "Math"};

	int *ptr = &marks[0];
	// int *ptr2 = &subject[0];

	for (int i=0; i<3; i++){
		printf("enter marks for %s > ", subject[i]);
		scanf("%d", &marks[i]);
	}
	
	for (int i=0; i<3; i++){
		printf("your marks in %s > %d\n", *(ptr+i));
	}

	//printf("your total marks as per result > %d", marks[0] + marks[1] + marks[2]);

	return 0;
}

//passing array in a function as an argument
void fun(int arr[], int len){
	for (int i=0; i<len; i++){
		printf("value from fun function > %d \n", arr[i]);
	}
}