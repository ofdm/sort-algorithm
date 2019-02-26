//
//  main.cpp
//  chooseSort
//
//  Created by yyt on 2019/2/22.
//  Copyright © 2019年 yyt. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
}

void chooseSort(int a[],int L,int R)
{
    for(int i=L;i!=R;i++)
    {
        int k=i;
        for(int j=i+1;j<=R;j++)
            k=(a[k]<a[j])?k:j;
        swap(a[i], a[k]);
    }
}

int main(int argc, const char * argv[]) {
    int a[]={1,3,6,4,2,7,5};
    chooseSort(a, 0, 6);
    for(auto x:a)
        cout<<x<<endl;
    return 0;
}
