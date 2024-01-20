#include <stdio.h>
#include <ctype.h>

struct weightProduct {
	int index;
	int weight;
};

struct product {
	char title[10];
	int weight;
	int price;
};

weightProduct findMostWeightProduct(product products[], int length) {
	int i, weight = 0;
	weightProduct finden_item;

	for (i = 0; i < length; i++) {
		if (products[i].weight > weight) {
			weight = products[i].weight;
			finden_item.index = i;
			finden_item.weight = products[i].weight;
		}
	}

	return finden_item;
}

int findAveragePrice(product products[], int length) {
	int i, all_price = 0;

	for (i = 0; i < length; i++) {
		all_price += products[i].price;
	}

	return all_price / length;
}

int main() {
	int i, max_weight_volume = 0, max_weight_index = 0;  
	product own_products[2];

	for (i = 0; i < 2; i++) {
		printf("Enter title of product\n");
		scanf("%s", &own_products[i].title);

		printf("Enter weight (g) of product\n");
		scanf("%d", &own_products[i].weight);

		printf("Enter price of product\n");
		scanf("%d", &own_products[i].price);
	}

	printf("Average price of products = %d\n", findAveragePrice(own_products, 2));
	printf("Most weight product here, index = %d, weight = %d\n", findMostWeightProduct(own_products, 2).index, findMostWeightProduct(own_products, 2).weight);

	return 0;
}