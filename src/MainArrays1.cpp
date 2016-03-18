#include "FunctionHeadersArrays1.h"
#include <stdio.h>

int main(){

	//Test RemoveArraysDuplicates
	/*
	int arr[3] = { 1, 2, 7 };
	int len = removeArrayDuplicates(arr, 3);
	printf("%d", len);
	*/

	//Test Students Count
	
	int arr[3]={1,10,4};
	/*int * newarray=sortedArrayInsertNumber(arr, 3, 3);
	printf("%d", sizeof(arr));
	printf("%d %d %d ", newarray[0], newarray[1], newarray[2]);
	/*sortedArrayPositionsChange(arr, 3);
	printf("%d%d%d", arr[0], arr[1], arr[2]);
	*/
	struct student {
		char *name;
		int score;
	};
	struct student students[3] = { { "stud1", 70 }, { "stud2", 60 }, { "stud3", 50 } };
	//struct student **result = topKStudents(students, 3, 0);

	
	return 0;
}