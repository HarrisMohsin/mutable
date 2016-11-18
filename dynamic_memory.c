//dynamic_memory.c

#include<stdio.h>
#include<stdlib.h>


int main(int argc, char** argv) {

	char buffer[256];
	double* nums;
	int cap1;
	int cap2;
	double temp;
	int i;


	//get string input and then convert to int	
	printf("How many real numbers will you enter?\n");
	fgets(buffer, 255, stdin);
	sscanf(buffer, "%i", &cap1);


	//allocate memory
	nums = (double*)malloc(cap1*sizeof(double));
	
	i = 0;
	while( i<cap1 ) {
		printf("Enter a real number:");
		fgets(buffer, 255, stdin);
		sscanf(buffer, "%lf", &temp);
		nums[i] = temp;
		i++;
	}

	
	printf("How many MORE real numbers will you enter?\n");
	fgets(buffer, 255, stdin);
	sscanf(buffer, "%i", &cap2);

	
	//reallocate memory
	nums = (double*)realloc(nums, (cap1+cap2)*sizeof(double));

	while( i<cap1+cap2 ) {
		printf("Enter another real number:");
		fgets(buffer, 255, stdin);
		sscanf(buffer, "%lf", &temp);
		nums[i] = temp;
		i++;
	}

	printf("Done!!\n");
	for(i=0; i<cap1+cap2; i++) {
		printf("Number %i: %lf\n", i, nums[i]);
	}


	free(nums);

	return(0);

}
