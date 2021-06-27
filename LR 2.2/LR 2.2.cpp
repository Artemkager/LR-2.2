#include <iostream>
#include <string>
using namespace std;

void Sort(int arr[], int n) //функция сортировки
{
    int a, b, c;
    for (a = 1; a < n; a++)
    {
        b = arr[a];
        c = a - 1;

        // перемещение ключей которые больше b на одну позицию вперед их текущего положения
        while (c >= 0 && arr[c] > b)
        {
            arr[c + 1] = arr[c];
            c = c - 1;
        }
        arr[c + 1] = b;
    }
}

void vvod(int arr[], int n) // функция ввода
{
    int a;
    for (a = 0; a < n; a++)
        cout << arr[a] << " ";
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Количество элементов ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "-ый элемент ";
        cin >> arr[i];
    }
    Sort(arr, n);
    vvod(arr, n);

    return 0;
}
