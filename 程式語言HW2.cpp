#include <iostream>
#include <time.h>
#define bignumber 50000
using namespace std;
void statically_array()
{
    static int arr1[bignumber];
}
void stack_array()
{
    int arr2[bignumber];
}
void heap_array()
{
    int *arr3=new int [bignumber];
}
int main ()
{
    clock_t start,end;

    start= clock();
    for(int i=0; i<100000; i++)
    {
        statically_array();
    }
    end = clock();

    double time1 = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("static array: %.6f seconds\n",time1);

    start = clock();

    for(int i=0; i<100000; i++)
    {
        stack_array();
    }

    end = clock();
    double time2 = ((double) (end - start)) / CLOCKS_PER_SEC;

    //cout<<"stack array:"<<time2<<"seconds"<<endl;
    printf("stack  array: %.6f seconds\n",time2);

    start = clock();

    for(int i=0; i<100000; i++)
    {
        heap_array();
    }

    end = clock();
    double time3 = ((double) (end - start)) / CLOCKS_PER_SEC;

    //cout<<"stack array:"<<time2<<"seconds"<<endl;
    printf("heap   array: %.6f seconds\n",time3);

}
