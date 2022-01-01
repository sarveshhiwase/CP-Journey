#include <math.h>
#include <stdio.h>

struct array_single_int {
	int *data;
	int size;
};

int countcustomers(struct array_single_int bill){
	int n = bill.size;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		double tp = sqrt((double) bill.data[i]);
		int s = tp;
		if(s * s == bill.data[i]){
			count++;
		}
	}
	return count;
}

int main ()
{
struct array_single_int sad;
sad.size = 5;
int arr[5] = {1,4,9,16,25};
sad.data = arr;
printf("%d\n",countcustomers(sad));
return 0;
}
