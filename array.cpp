// Array Initialisation::
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
} */
 





//Sorting an array..........................................
/*
#include<iostream>
using namespace std;
int main () {
	int n;
   cin>>n;
   int a[n];
   for(int i =0;i<n;i++) {
   	 cin>>a[i];
   }
   for(int i=0;i<n-1;i++) {
   	for(int j =i+1;j<n;j++) {
   		if(a[j]<a[i]){
   			int temp = a[j];
   			a[j] = a[i];
   			a[i] =temp;
   			
		   }
	   }
   }
   for(int i=0;i<n;i++) {
   	cout<<a[i]<<" ";
   }cout<<endl;
	return 0;
}*/


// Largest element in an array................
/*
#include<iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i =0;i<n;i++) {
   	 cin>>a[i];
   }
   int max = a[0];
   for(int i =0 ; i<n ; i++) {
   	
   	if(a[i]>max){
   		 max = a[i];
	   }
	   
   }
	cout<<"The largest element in a given array is "<<max<<" ";
	
	
}*/

//Second largest and second smallest element in an array:......
/*
#include<iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i =0;i<n;i++) {
   	 cin>>a[i];
   }
   int largest = a[0];
   int slargest = INT_MIN;
   for(int i =0 ; i<n ; i++) {
   	
   	if(a[i]>largest){
   		slargest = largest ;
   		largest = a[i];
	   }
	else if(a[i] < largest && a[i] > slargest){
		slargest =a[i];
	}
	}
	int smallest = a[0];
	int s_smallest = INT_MAX;
	for(int i=0;i<n;i++) {
		if(a[i] < smallest) {
			s_smallest = smallest;
			smallest = a[i];
		}
		else if(a[i] != smallest && a[i] < s_smallest) {
			s_smallest =a[i];
		}
	}
   
   cout<<"The second smallest element in an array is "<<s_smallest<<endl;
   cout<<"The second largest element in an array is "<<slargest<<endl;
} */

// check if the array is sorted or not...............
   
/*#include<iostream>
using namespace std;
int n;
cin>>n;
int a[n];
for(int i =0;i<n;i++) {
   	cin>>a[i];
   }
for(int i=1;i<n;i++) {
   	if(a[i] >= a[i-1]) {
   		
	   }else{
	   	return false;
	   }
	  
   }
   return true;
}*/

// Remove duplicates in place from sorted array...............
/*#include<iostream>
using namespace std;
int main () {
    int n;
	cin>>n;
    int a[n];
	for(int i =0;i<n;i++) {
	 cin>>a[i];
	 
	}
	int i=0;
	for(int j=1;j<n;j++) {
		if(a[i] != a[j]) {
			a[i+1] = a[j];
			i++;
		}
	}
	return i+1;
}*/


//TRAVERSAL OF AN ARRAY:::::::::::::::::::::::::::::::::::::::::::::::::;;;;;
/*
#include<iostream>
using namespace std;

int main () {
	int a[50],size;
	cout<<"Enter the size of array: "<<endl;
	cin>>size;
	cout<<"Enter elements of array: "<<endl;
	for(int i = 0;i<size;i++){
		cin>>a[i];
	}
	cout<<"Elements in array are: "<<endl;
	for(int i =0;i<size;i++) {
		cout<<a[i]<<" ";
	}
	
} */

//INSERTION OF AN ELEMENT IN AN ARRAY AT SPECIFIC POSITION::::::::::::::::::::::::::::::::::::::::::::::::::::::
/*
#include<iostream>
using namespace std;                 //best case: O(1)
                                     //worst case:O(n) 
int main () {
	int a[50],size,num,pos;
	cout<<"Enter the size of array: "<<" ";
	cin>>size;
	cout<<"Enter elements of array:"<<endl;
	for(int i=0;i<size;i++) {
		cin>>a[i];
	}
	cout<<"Enter the data you want to insert:"<<" ";
	cin>>num;
	cout<<"Enter position:"<<" ";
	cin>>pos;
	if(pos<=0 || pos>size+1){
	   cout<<"Invalid position"<<endl;	
	}
	else{
	
	 for(int i=size-1;i>=pos-1;i--) {
		a[i+1] = a[i];
	 }
	 a[pos-1]=num;
	 size++;
	 for(int i = 0;i<size;i++){
		cout<<a[i]<<" ";
	 }
}
} */

//DELETION::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
//
//#include<iostream>
//using namespace std;
//
//int main () {
//    int a[50],size,num,pos,item;
//	cout<<"Enter the size of array: "<<" ";
//	cin>>size;
//	cout<<"Enter elements of array:"<<endl;
//	for(int i=0;i<size;i++) {
//		cin>>a[i];
//	}
//	cout<<"From which position you want to delete:"<<" ";
//	cin>>pos;
//	if(pos<=0 || pos>size)	{
//		cout<<"Invalid Position"<<endl;
//	}
//	else{
//		int item = a[pos-1];
//		for(int i=pos-1;i<size-1;i++) {
//			a[i] = a[i+1];
//		
//		}
//		//deletion from starting
////			for(int i=0;i<size-1;i++) {
////			a[i] = a[i+1];
////		
////		}
//		cout<<"Deleted item is"<<item<<endl;
//	}
//	size--;
//	for(int i=0;i<size;i++){
//		cout<<a[i]<<" ";
//	 }
//	 
//}

//MERGING OF an array:::::::::::::::::::::::::::::
/*
#include<iostream>
using namespace std;
int main () {
	int a1[5], a2[4],size1,size2;
	cout<<"enter the size of array1: "<<endl; 
	cin>>size1;
	cout<<"enter the size of array2: "<<endl;
	cin>>size2;
	int a =sizeof(a1);
	int b =sizeof(a2);
	int c1 = a+b;
	int c[c1];
	for(int i=0;i<a;i++) {
		c[i] = a1[i];
	}
	for(int i=0;i<b;i++) {
		c[a+i] = a2[i];
	}
		for(int i=0;i<c1;i++) {
		cout<<c[i]<<" ";
	}
}*/

//SELECTION SORT::::::::::::::::::::::::::::::::::
  
//space complexity: O(1)
//Time complexity:  O(n^2)
//best case: O(n^2)
//worst case: O(n^2)
/*
#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++) {
		cin>>a[i];
	}
	for(int i =0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[j]<a[i]){
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	cout<<"Array after selection sort:"<<" ";
	for(int i =0;i<n;i++) {
		cout<<a[i]<<" ";
	}
	
}*/

//BUBBLE SORT::::::::::::::::::::::::::::::::::::::;

//"Reapetedly swap two adjacent elements if they are in wrong order.
/*
#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		}
	int counter=1;
	while(counter<n){
		for(int i=0;i<n-counter;i++) {
			if(a[i]>a[i+1]) {
				int temp=a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		counter++;
	}
	cout<<"sorting by Bubble sort:"<<" ";
	for(int i=0;i<n;i++) {
	cout<<a[i]<<" ";
	}
	
} */

//INSERTION SORT::::::::::::::::::::::::::::::::::::::::::::::::;
/*
#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		}
	for(int i=1;i<n;i++) {
		int current = a[i];
		int j=i-1;
		while(a[j]>current && j>=0) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = current;
	}
	cout<<"sorting by insertion sort:"<<" ";
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
		}
}*/





	






