#include<bits/stdc++.h>
using namespace std;

int largest(int array[], int lowerIndex,int upperIndex)
{
	if(array[lowerIndex] == array[upperIndex]){
		return array[lowerIndex];
	}
	else{
		int max = largest(array, lowerIndex+1, upperIndex);
		if(array[lowerIndex] >= max){
			return array[lowerIndex];
		}
		else{
			return max;
		}
	}
}

int main()
{
	int arr[5] = {12,15,4,10,16};
	int maximum = largest(arr,0,4);
	cout<<maximum<<endl;
	return 0;
}

