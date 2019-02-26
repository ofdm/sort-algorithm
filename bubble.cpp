//
//  main.cpp
//  bubbleSort
//
//  Created by 姚煜涛 on 2019/2/22.
//  Copyright © 2019年 姚煜涛. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    int tmp=0;
    tmp=a;
    a=b;
    b=tmp;
}

void bubbleSort(int a[],int L,int R)
{
    for(int i=R;i!=L;i--)
        for(int j=L;j<i;j++)
            if(a[j+1]<a[j])
                swap(a[j],a[j+1]);
}

void bubbleSort2(int a[],int L,int R)
{
    for(int i=L;i!=R;i++)
        for(int j=L;j!=R-i;j++)
            if(a[j]>a[j+1])
                swap(a[j], a[j+1]);
}

int main(int argc, const char * argv[]) {
    int a[]={1,3,6,4,2,7,5};
    bubbleSort2(a, 0, 6);
    for(auto x:a)
        cout<<x<<endl;
    return 0;
}
