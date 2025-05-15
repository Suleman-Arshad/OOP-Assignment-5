//#include <iostream>
//#include <exception>
//using namespace std;
//class AgeOutOfRangeException : public exception {
//private:
//    const char* message;
//public:
//    AgeOutOfRangeException() : message("You are older than the requested age (25 years).") {}
//    const char* what() const noexcept override {
//        return message;
//    }
//};
//class LowGpaException : public exception {
//private:
//    const char* message;
//public:
//    LowGpaException() : message("Your GPA is not sufficient to apply for this job (2.5).") {}
//    const char* what() const noexcept override {
//        return message;
//    }
//};
//int main() {
//    int age;
//    float gpa;
//    cout << "Enter your age: ";
//    cin >> age;
//    cout << "Enter your GPA: ";
//    cin >> gpa;
//    try {
//        try {
//            if (age > 25) {
//                throw AgeOutOfRangeException();
//            }
//            if (gpa < 2.5) {
//                throw LowGpaException();
//            }
//            cout << "Your application is accepted and is under review." << endl;
//        }
//        catch (const LowGpaException& gpaEx) {
//            cout << "GPA Error: " << gpaEx.what() << endl;
//        }
//    }
//    catch (const AgeOutOfRangeException& ageEx) {
//        cout << "Age Error: " << ageEx.what() << endl;
//    }
//    system("pause");
//    return 0;
//}
