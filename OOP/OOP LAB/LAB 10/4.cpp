#include <iostream>
using namespace std;
#define N 5
template <class T>
void sort(T arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[i] > arr[j])
            {
                T temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }       
}
void print (double arr[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    double int_array[N];
    double float_array[N];
    cout << "Enter integer array elements : ";
    for (int i = 0; i < N; i++)
    {
        cin >> int_array[i];
    }
    cout << "Enter floating array elements : ";
    for (int i = 0; i < N; i++)
    {
        cin >> float_array[i];
    }
    sort(int_array, N);
    sort(float_array, N);
    cout << "After sorting they are : ";
    print(int_array, N);
    print(float_array, N);
    return 0;
}