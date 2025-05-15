//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    int N;
//    while (true)
//    {
//        try
//        {
//            cout << "Enter the number of integers (N): ";
//            cin >> N;
//            if (cin.fail())
//            {
//                cin.clear();
//                string dummy;
//                getline(cin, dummy);
//                throw "N must be an integer.";
//            }
//            if (N <= 0)
//            {
//                throw "N must be positive.";
//            }
//
//            if (N > 100)
//            {
//                throw "N exceeds the maximum limit (100).";
//            }
//
//            break;
//        }
//        catch (const char* msg)
//        {
//            cout << "Error: " << msg << endl;
//        }
//    }
//    int numbers[100];
//    int count = 0;
//    while (count < N)
//    {
//        cout << "Enter number " << (count + 1) << ": ";
//        cin >> numbers[count];
//
//        if (cin.fail())
//        {
//            cin.clear();
//            string dummy;
//            getline(cin, dummy); // discard bad input
//            cout << "Invalid input. Please enter an integer." << endl;
//            continue;
//        }
//        count++;
//    }
//    int sum = 0;
//    for (int i = 0; i < N; i++)
//    {
//        sum += numbers[i];
//    }
//    double average = static_cast<double>(sum) / N;
//    cout << "The average of the entered numbers is: " << average << endl;
//    system("pause");
//    return 0;
//}
