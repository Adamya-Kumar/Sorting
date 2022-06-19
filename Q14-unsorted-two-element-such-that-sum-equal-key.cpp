
//Given an unsorted array of integers, design an algorithm and implement it using a program to find whether two elements exist such that their sum is equal to the given key element.(Time Complexity= O(n logn).

#include<iostream>
using namespace std;

void merge(int a[], int l , int m, int h){
    int i=l, j=m+1, k=l;
    int b[100];
    while(i<=m && j<=h){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }
    for(; i<=m; i++){
        b[k++]=a[i];
    }
    for(; j<=h; j++){
        b[k++]=a[j];
    }
    for(i=l; i<=h;i++){
        a[i]=b[i];
    }
}

void mergeSort(int arr[], int l, int h){
    if(l<h){
        int mid= (l+h)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, h);

        merge(arr, l, mid, h);
    }
}

int main(){
    cout<<"AJAY GOSWAMI --> F --> 20011502"<<endl;
    cout<<"Question 14"<<endl;

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 10;
    int i,j;
cout<<"Given array is "<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    mergeSort(arr, 0, n);

    
    for(i=0,j=i+1; i<n-1; i++){
        if(arr[i]+arr[j]==key){
            cout<<"Output :"<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
    return 0;
}








// //2nd
// #include<iostream>
// using namespace std;

// void merge(int a[], int l, int m, int h){
//     int i=l, j=m+1, k=l;
//     int b[100];
//     while(i<=m && j<=h){
//         if(a[i]<a[j]){
//             b[k++]=a[i++];
//         }
//         else{
//             b[k++]=a[j++];
//         }
//     }
//     for(; i<=m; i++){
//         b[k++]=a[i];
//     }
//     for(; j<=h; j++){
//         b[k++]=a[j];
//     }
//     for(i=l; i<=h;i++){
//         a[i]=b[i];
//     }
// }

// void MergeSort(int a[], int l ,int h){
//     if(l<h){
//         int m=(l+h)/2;
//         MergeSort(a,l,m);
//         MergeSort(a,m+1,h);

//         merge(a,l,m,h);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
// 	int key;
// 	cout<<"enter key element ";
// 	cin>>key;
//     MergeSort(a,0,n-1);
//  	int l=0;
// 	int h=n-1;
// 	while(l<h){
// 		if(l+h == key){
// 			cout<<"exist";
// 			break;
// 		}
// 		else if(l+h > key)
// 			h--;
// 		else
// 			l++;
// 	}   
// }