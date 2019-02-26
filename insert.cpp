//
//  main.cpp
//  insertSort
//
//  Created by 姚煜涛 on 2019/2/23.
//  Copyright © 2019年 姚煜涛. All rights reserved.
//

#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
//    int tmp=a;
//    a=b;
//    b=tmp;
    a=a^b;
    b=a^b;
    a=a^b;
}

void insertSort(int a[],int L,int R)
{
    for(int i=L+1;i!=R;++i)
        for(int j=i-1;j>=L&&a[j+1]<a[j];--j)
                swap(a[j],a[j+1]);
}

int getMax(int a[],int L,int R)
{
    if(L==R)
        return a[L];
    int mid = (L+R)/2;
    int leftMax=getMax(a, L, mid);
    int rightMax=getMax(a, mid+1, R);
    return (leftMax>rightMax?leftMax:rightMax);
}

int main(int argc, const char * argv[]) {
    int a[]={3,4,1,5};
//    insertSort(a, 0, 3);
//    for(auto x:a)
//        cout<<x<<endl;
    cout<<getMax(a, 0, 3);
    return 0;
}
