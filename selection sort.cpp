#include <iostream>
using namespace std;
int main(){

int arr[] = {29,72,98,13,87,66,52,51,36};
int i, j, temp;
int length = sizeof(arr)/sizeof(arr[0]);

for(i=0; i<length; i++){
	for(j=i+1; j<length; j++){
		if(arr[i]>arr[j]){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
}


for(i=0; i<length; i++){
	cout<<arr[i]<<" ";
}

}
