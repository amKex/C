#include <stdio.h>

void reverse(int arr[], int n);
// void print_arr(int arr[], int n);

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
	printf("before reversing the array > %d    %d    %d    %d    %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
    reverse(arr, 5);
    // print_arr(arr, 5);

    return 0;
}

void reverse(int arr[], int n){
	for (int i=0; i<n/2; i++){
		int first_value = arr[i]; 
		int second_value = arr[n-i-1];
		arr[n-i-1] = first_value; 
		arr[i] = second_value;
	}
	printf("\nafter reversing the array > %d    %d    %d    %d    %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
}

// void print_arr(int arr[], int n){
// 	for (int i=0; i<n; i++){
// 		printf("%d \t", arr[i]);
// 	}
// 	printf("\n");
// }
