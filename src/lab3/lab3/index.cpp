#include <stdio.h>

int main() {
	int smallest = 1000, i, sm_index = 0, n = 10;
	int arr[10] = {0, 5, 16, -3, 4, 15, 3, 6, 9, -1};
	
	printf("Arr before changes\n");
	for (i = 0; i < n; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
		if (smallest > arr[i]) {
			smallest = arr[i];
			sm_index = i;
		}
	}

	printf("Smallest item of arr = %d\n", smallest);
	printf("Index of item = %d\n", sm_index);	

	for (i = sm_index; i < n; i++) {
		arr[i] = arr[i + 1]; 
	}

	n -= sm_index;
	n++;

	arr[0] = smallest;

	printf("Arr after changes\n");

	for (i = 0; i <= n; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}

	return 0;
}