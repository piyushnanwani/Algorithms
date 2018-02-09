// Binary Search , Array implementation.

#include <iostream>
using namespace std;

int main(){
	int arr[20], size;
	bool flag = false;

	//  input array.
	cin >> size;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}


	int beg, mid, en, item;

	cout <<"\n Item to Search : ";
	cin >> item;

	beg=0;
	en = size-1;

	while(beg<=en){
		mid = (beg + en)/2;

		if(arr[mid] == item){
			flag = true;
			break;
		}
		else if(arr[mid] >item){
			en = mid-1;
		}
		else if(arr[mid] <item){
			beg = mid+1;
		}
	}
	cout  << "Element present? :"<<boolalpha<<flag;
}