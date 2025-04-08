#include<iostream>
using namespace std;


void Insertion_Sort(int Array[], int n){
for(int i=1; i<n; i++){
    int key=Array[i];
    int j=i-1;

    while(j>=0 && Array[j]>key){
        Array[j+1]=Array[j];
        j--;
    }
    Array[j+1]=key;
}
}


void Print_Array(int Array[], int n){
for(int i=0; i<n; i++){
    cout<<Array[i]<<" ";
}
cout<<endl;

}



int main(){

int n;
cout<<"Enter number of elements: ";
cin>>n;

int Array[n];
cout<<"Enter "<<n<<" elements: ";
for(int i=0; i<n; i++){
    cin>>Array[i];
}

cout<<"Input array: ";
Print_Array(Array, n);

Insertion_Sort(Array, n);

cout<<"Sorted final array list: ";
Print_Array(Array, n);

return 0;
}
