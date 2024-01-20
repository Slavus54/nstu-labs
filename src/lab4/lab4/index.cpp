#include <string.h>
#include <stdio.h>

int main() {
	const int str_length = 20;
	const int piece_length = 3;
	int i = 0, j = 0, beg = 0;
	char posled[piece_length] = {'a', 'b', 'c'};
	char str[str_length];

	printf("Enter some text \n");
	scanf("%s", str);
	
	for (i = 0; i < str_length; i++) {
		if (str[i] == posled[j]) {
			if (j == 0) {
				beg = i;
			}

			if (j < piece_length - 1) {
				j++;
			}
		}			
	}

	if (beg > 0) {
		printf("Begin index of subseq %d\n", beg);
		printf("End index of subseq %d\n", beg + (piece_length - 1));
	} else {
		printf("Your text is not include subseq");
	}

	return 0;
}