//#include <iostream>
//#include<stdlib.h>
//using namespace std;
//template <typename T>
//class Duplicate
//{
//private:
//    T* duplicates;
//    int size;
//
//public:
//    Duplicate();
//    ~Duplicate();
//    void input_array();
//    void remove_duplicate();
//    void display();
//};
//template <typename T>
//Duplicate<T>::Duplicate() : size(0), duplicates(nullptr) {}
//template <typename T>
//void Duplicate<T>::input_array()
//{
//    cout << "Enter Size of an array: ";
//    cin >> size;
//    duplicates = new T[size];
//    cout << "=========================Enter Elements of an array======================\n";
//    for (int i = 0; i < size; i++)
//    {
//        cin >> duplicates[i];
//    }
//}
//template <typename T>
//void Duplicate<T>::remove_duplicate()
//{
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = i + 1; j < size;)
//        {
//            if (duplicates[i] == duplicates[j])
//            {
//                for (int k = j; k < size - 1; k++)
//                {
//                    duplicates[k] = duplicates[k + 1];
//                }
//                size--;
//            }
//            else
//            {
//                j++;
//            }
//        }
//    }
//}
//template <typename T>
//void Duplicate<T>::display()
//{
//    cout << "=========================Array without Duplicates======================\n";
//    for (int i = 0; i < size; i++)
//    {
//        cout << duplicates[i] << "\t";
//    }
//    cout << endl;
//}
//template <typename T>
//Duplicate<T>::~Duplicate()
//{
//    delete[] duplicates;
//    duplicates = nullptr;
//}
//int main()
//{
//    cout << "\n======================Integer array=================\n";
//    Duplicate<int> obj;
//    obj.input_array();
//    obj.remove_duplicate();
//    obj.display();
//    cout << "\n======================Float array=================\n";
//    Duplicate<float> floatObj;
//    floatObj.input_array();
//    floatObj.remove_duplicate();
//    floatObj.display();
//    cout << "\n======================Character array=================\n";
//    Duplicate<char> charObj;
//    charObj.input_array();
//    charObj.remove_duplicate();
//    charObj.display();
//    system("pause");
//    return 0;
//}
