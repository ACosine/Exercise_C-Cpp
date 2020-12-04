#define _CRT_SECURE_NO_WARNINGS 1  
//排序子序列
#include<stdio.h>
int main()
{
    int array[100000]; //n个元素，下标0~n-1
    int i,n,flag=0,res=1;
    //输入第一行的正整数n
    scanf("%d",&n);
    //输入第二行的n个整数A_i
    for(i=0;i<n;i++)
    {
        scanf("%d",array+i);
    }
    //遍历一遍数组a,可访问的下标是1~n-2
    for(i=1;i<n-1;i++)
    {
        //a[i]该元素与左右邻，是非递增或者非递减排序
        if( array[i]>array[i-1] && array[i]>array[i+1] || array[i]<array[i-1] && array[i]<array[i+1])
        {
            res++;
            //当下标未访问到n-3时，这里的i++已经比较过了，则需要跳过
            if(n-3!=i) 
            {
                i++;
            }  
        }
    }
    printf("%d\n",res);
    return 0;
}
