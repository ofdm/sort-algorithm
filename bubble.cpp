//
//  main.cpp
//  bubbleSort
//
//  Created by yyt on 2019/2/22.
//  Copyright © 2019年 yyt. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
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
