//#include <iostream>
//#include <string>
//using namespace std;
//class invalidHr
//{
//};
//class invalidMin
//{
//};
//class invalidSec
//{
//};
//int main()
//{
//    int hour, minute, second;
//    string am_pm;
//    try
//    {
//        cout << "Enter time in 12-hour format (hh mm ss AM/PM): ";
//        cin >> hour >> minute >> second >> am_pm;
//        for (int i = 0; i < am_pm.length(); i++)
//        {
//            if (am_pm[i] >= 'a' && am_pm[i] <= 'z')
//            {
//                am_pm[i] = am_pm[i] - 32;
//            }
//        }
//        if (hour < 1 || hour > 12)
//        {
//            throw invalidHr();
//        }
//        if (minute < 0 || minute > 59)
//        {
//            throw invalidMin();
//        }
//        if (second < 0 || second > 59)
//        {
//            throw invalidSec();
//        }
//        if (am_pm == "AM")
//        {
//            if (hour == 12)
//                hour = 0;
//        }
//        else if (am_pm == "PM")
//        {
//            if (hour != 12)
//                hour += 12;
//        }
//        else
//        {
//            cout << "Error: Invalid AM/PM format." << endl;
//            return 1;
//        }
//
//        cout << "24-hour format: " << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << ":" << (second < 10 ? "0" : "") << second << endl;
//    }
//    catch (invalidHr)
//    {
//        cout << "Error: Invalid hour. Must be between 1 and 12." << endl;
//    }
//    catch (invalidMin)
//    {
//        cout << "Error: Invalid minute. Must be between 0 and 59." << endl;
//    }
//    catch (invalidSec)
//    {
//        cout << "Error: Invalid second. Must be between 0 and 59." << endl;
//    }
//    system("pause");
//    return 0;
//}
