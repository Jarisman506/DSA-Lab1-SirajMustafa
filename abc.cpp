#include<iostream>
using namespace std;
void findallindice(int arr[],int n , int key){
	bool found = false;
	int count=0;
	for (int i = 0; i < n; i++){
		if (arr[i] == key){
			cout << i << endl;
			found = true;
            ++count;
		}
	} if (!found){
		cout << " Does not exist";
	}
    if (count>1){
        cout<<"Multiple occurences";
    }
    else if (count==1){
        cout<<"Occurs once";
    }
}
int main(){
	cout << "Enter the size of the array: ";
	int n;
	cin >> n;
	int arr[100];
	cout << "Enter the elements of the array: " << endl;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cout << "Enter the key element: " << endl;
	int key;
	cin >> key;
	findallindice(arr, n, key);
		return 0;
}