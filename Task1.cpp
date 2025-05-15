#include <iostream>
using namespace std;
template <typename T>
class Merged_array
{
private:
    T* arr1;
    T* arr2;
    T* arr3;
    int size1;
    int size2;
    int size3;

public:
    Merged_array(int s1, int s2) : size1(s1), size2(s2), size3(s1 + s2)
    {
        arr1 = new T[size1];
        arr2 = new T[size2];
        arr3 = new T[size3];
    }
    ~Merged_array()
    {
        delete[] arr1;
        delete[] arr2;
        delete[] arr3;
    }
    void input()
    {
        cout << "=====================Enter elements of first array=====================\n";
        for (int i = 0; i < size1; i++)
        {
            cin >> arr1[i];
        }

        cout << "=====================Enter elements of second array=====================\n";
        for (int i = 0; i < size2; i++)
        {
            cin >> arr2[i];
        }
    }
    void merge_arrays()
    {
        int count = 0;
        for (int i = 0; i < size1; i++)
        {
            arr3[count++] = arr1[i];
        }
        for (int i = 0; i < size2; i++)
        {
            arr3[count++] = arr2[i];
        }
    }
    void display() const
    {
        cout << "===============================Merged array==============================\n";
        for (int i = 0; i < size3; i++)
        {
            cout << arr3[i] << "\t";
        }
        cout << endl;
    }
};
int main()
{
    int size1, size2;
    cout << "====================For Integer=================\n";
    cout << "Enter size of First array : ";
    cin >> size1;
    cout << "Enter size of Second array : ";
    cin >> size2;
    Merged_array<int> intHandler(size1, size2);
    intHandler.input();
    intHandler.merge_arrays();
    intHandler.display();
    cout << "====================For Float=================\n";
    cout << "\nEnter size of First array : ";
    cin >> size1;
    cout << "Enter size of Second array : ";
    cin >> size2;
    Merged_array<float> floatHandler(size1, size2);
    floatHandler.input();
    floatHandler.merge_arrays();
    floatHandler.display();
    cout << "====================For Character=================\n";
    cout << "\nEnter size of First array : ";
    cin >> size1;
    cout << "Enter size of Second array : ";
    cin >> size2;
    Merged_array<char> charHandler(size1, size2);
    charHandler.input();
    charHandler.merge_arrays();
    charHandler.display();
    system("pause");
    return 0;
}
