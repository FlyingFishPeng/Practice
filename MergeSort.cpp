/*
    �鲢����ʱ�临�Ӷȣ�ƽ������ú�����ΪO(nlogn),�ռ临�Ӷ�O(1)
*/
#include <iostream>
using namespace std;

int main()
{
    int len = 8;
    int data[len] = {3, 5, 1, 8, -2, 10, 4, 2};
    void MergeSort(int a[], int, int);
    MergeSort(data, 0 , len - 1);
    for(int i = 0; i < len; i++)
        cout << data[i] << " ";
    return 0;
}

void MergeSort(int arr[], int begin, int end)
{
    void merge(int [], int, int);
    merge(arr, begin, end);
}

void merge(int arr[], int begin, int end)
{
    void mergesort(int [], int, int, int);
    int mid = (begin + end) / 2;
    if(begin < end)
    {
        merge(arr, begin, mid);  //�����벿��
        merge(arr, mid + 1, end);   //�Ұ벿��
        mergesort(arr, begin, mid, end);  //�ϲ�
    }
}

void mergesort(int arr[], int begin, int mid, int end)
{
    int len = end - begin + 1;
    int tmp[len];
    int p1 = begin, p2 = mid + 1, p3 = 0;
    while(p1 <= mid && p2 <= end)
    {
        if(arr[p1] < arr[p2])
            tmp[p3++] = arr[p1++];
        else
            tmp[p3++] = arr[p2++];
    }

    while(p1 <= mid)
        tmp[p3++] = arr[p1++];

    while(p2 <= end)
        tmp[p3++] = arr[p2++];

    for(int j = 0; j < len; j++)   //���ź�������и���ԭ����
        arr[begin+j] = tmp[j];
}
