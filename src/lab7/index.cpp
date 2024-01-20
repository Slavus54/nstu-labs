#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fac_search(int value) {
	int i, fac_num = 1, fac_value = 0, current_value = 1;
	bool isNegative = false;

	if (value < 0) {
		isNegative = true;
		value = abs(value);
	}

	for (i = 0; i < value; i++) {
		if (value > 0) {
			fac_num = fac_num * current_value;
			current_value++;
		} else if (value == 0) {
			fac_num = 0;
		}
	}

	if (isNegative == true) {
		if (value % 2 == 0) {
			return fac_num;
		} else {
			return fac_num - fac_num * 2;
		}
	} else {
		return fac_num;
	}
	
}

int find_min_idx(int arr_len) {
	int* arr;
	int i, sm_value = 10000, sm_idx = 0;

	arr = (int*)malloc(arr_len * sizeof(int));

	for (i = 0; i < arr_len; i++) {
		printf("Enter item value ");
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < arr_len; i++) {
		if (arr[i] < sm_value) {
			sm_value = arr[i];
			sm_idx = i;
		}
	}

	return sm_idx;
}

int main () 
{
	int arr_size = 0, fac_value = 0;

	printf("Enter num\n");
	scanf("%d", &fac_value);

	printf("Factorial value= %d\n", fac_search(fac_value));
		
	printf("Enter size of arr\n");
	scanf("%d", &arr_size);

	printf("Index of smallest value= %d\n", find_min_idx(arr_size));
		
	return 0;
}