//
//  main.cpp
//  mergeSort
//
//  Created by yyt on 2019/2/23.
//  Copyright © 2019年 yyt. All rights reserved.
//

#include <iostream>
using namespace std;
void merge(int a[],int b[],int L,int R)
{
    int i=0;
    int mid=L+(R-L)/2;
    int p1=L,p2=mid+1;
    while(p1<=mid&&p2<=R)
        b[i++]=(a[p1]<a[p2]?a[p1++]:a[p2++]);
    while(p1<=mid)
        b[i++]=a[p1++];
    while(p2<=R)
        b[i++]=a[p2++];
    for(int i=0;i<=R-L;++i)
        a[L+i]=b[i];
}

void mergeSort(int a[],int b[],int L,int R)
{
    if(L==R)
        return;
    int mid = L+(R-L)/2;
    mergeSort(a,b,L,mid);
    mergeSort(a,b,mid+1,R);
    merge(a,b, L, R);
}


int main(int argc, const char * argv[]) {
    int a[]={1,4,2,6,9,7,3};
    int b[7];
    mergeSort(a,b,0,6);
    for(auto x:a)
        cout<<x<<endl;
    return 0;
}
