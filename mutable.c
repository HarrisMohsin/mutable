/*mutable.c
 *
 * A mutable array is an abstract data type that is an array that
 * can change its length; hence its length is changed, or mutated
 *
 * In C we shall implement this through dynamic memory control
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//====================================================================
//======Function Declarations and Documentations======================
//====================================================================

//creates and returns a "mutable" array (manually allocated)
//@param cap - sets cap to amount of floats' worth of mem alloc'd
//@return malloc'd float array
//starting capacity: 10*sizeof(float)
float* new_mutable_array(int* cap);

//grows mutable array; DOUBLES CAPACITY
//@param array_p - pointer to float pointer; needed for realloc
//@param cap - pointer to value of array capacity, will be updated
void grow(float** array_p, int* cap);

//adds an element to array, grows if needed
//@param array_p - pointer to float pointer, needed for grow
//@param len - number of elements currently in array
//@param cap - maximum number of elements array can hold
//@param element - element to add
void add(float** array_p, int* len, int* cap, int element);

//removes element in array[index] and returns it
//@param array - the array; all elements shifted when one is removed
//@param len - the number of elements in array; gets updated
//@param index - index of element in array
//@return - returns the removed float
float remove(float* array, int* len, int index)

//====================================================================
//======Main Function; Tests Code=====================================
//====================================================================

int main(void) {

	float* array;
	int length; //number of floats in array
	int capacity; //number of floats' worth of memory allocated to array
	int i;

	srand(time(NULL));

	/*~~~~~~~~~~~~~~~~~~~~~~
	array = new_mutable_array( &capacity );

	for(i=0; i<100; i++) {
		add( &array, &length, &capacity, rand()*0.1 );
	}

	printf("Your lucky numbers: %.3f, %.3f, %.3f\n", array[3], array[7], array[77]);
	printf("Removing your unlucky number: %.3f\n", remove(&array, &len, 13));
	printf("Wait, a lucky number changed: %.3f\n", array[77]);

	free(array);
         ~~~~~~~~~~~~~~~~~~~~~~~*/	


	return(0);
}

//====================================================================
//======Function Definitions==========================================
//====================================================================


float* new_mutable_array(int* cap) {

}

void grow(float** array_p, int* cap) {

}

void add(float** array_p, int* len, int* cap) {

}

void remove(float* array, int* len, int index) {

}
