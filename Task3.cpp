#include <iostream>
#include <string>
using namespace std;
template <typename T>
T power(T base, int expo)
{
    T result = 1;
    while (expo > 0)
    {
        result *= base;
        expo--;
    }
    return result;
}

template <typename T>
void inputArray(T*& arr, int& size, string& baseType)
{
    size = 0;
    arr = nullptr;
    T value;
    char choice;

    cout << "Enter base type (binary/octal/hexadecimal/decimal): ";
    cin >> baseType;

    while (true)
    {
        cout << "Enter a value: ";
        cin >> value;

        T* temp = new T[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        temp[size] = value;

        delete[] arr;
        arr = temp;
        size++;

        cout << "Do you want to enter another value? (y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            break;
        }
    }
}

template <typename T>
T decimal(T* arr, int size, string base)
{
    int numericBase;

    if (base == "binary")
        numericBase = 2;
    else if (base == "octal")
        numericBase = 8;
    else if (base == "hexadecimal")
        numericBase = 16;
    else if (base == "decimal")
        numericBase = 10;
    else
    {
        cout << "Invalid base!" << endl;
        return 0;
    }

    T decimalValue = 0;
    for (int i = size - 1, expo = 0; i >= 0; i--, expo++)
    {
        decimalValue += arr[i] * power(numericBase, expo);
    }

    return decimalValue;
}

int main()
{
    int* arr = nullptr;
    int size;
    string baseType;

    inputArray(arr, size, baseType);

    cout << "Converted decimal value: " << decimal(arr, size, baseType) << endl;

    delete[] arr;
    system("pause");
    return 0;
}
