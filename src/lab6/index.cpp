#include <stdio.h>

int main() {
	int i, small_value = 100000, sm_index = 0, n = 0;
	
	printf("Enter number of arr items");
	scanf_s("%d", &n);

	int *arr = new int[n];
	int *list;

	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (list = arr; list < arr + n; list++) {
		if (small_value > *list) {
			small_value = *list;
			sm_index = *arr;
		}
		printf("Item %d\n", *list);
	}

	printf("Smallest item of arr = %d\n", small_value);
	printf("Index of item = %d\n", sm_index);

	for (i = 0; i < n; i++) {
		arr[sm_index] = arr[sm_index + 1];
	}

	arr[0] = small_value;

	n -= sm_index;
	n++;

	for (i = 0; i <= n; i++) {
		printf("Item %d\n", arr[i]);
	}

	delete arr;

	return 0;
}