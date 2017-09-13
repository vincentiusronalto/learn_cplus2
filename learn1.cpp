#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
    
    cout << "Hello World" << endl;
    
    const double PI = 3.1415926535;
    
    char myGrade = 'A';
    
    bool isHappy = false;
    
    int myAge = 39;
    
    float favNum = 3.141592;
    
    double otherFavNum = 1.6180339887;
    
    int largestInt = 2147483647;
    
    cout << "Largest int " << largestInt << endl;
    cout << "Favorite Number " << favNum << endl;
    
    
    Other types include
    short int : At least 16 bits
    long iny : At least 32 bits
    long long int : At least 64 bits
    unsigned int : Some size as signed version
    long double : Not less then double
    
    cout << "Size of int " << sizeof(myAge) << endl;
    cout << "Size of char " << sizeof(myGrade) << endl;
    cout << "Size of bool " << sizeof(isHappy) << endl;
    cout << "Size of float " << sizeof(favNum) << endl;
    cout << "Size of double " << sizeof(otherFavNum) << endl;
    
    cout << "5 + 2 = " << 5+2 << endl;
    cout << "5 - 2 = " << 5-2 << endl;
    cout << "5 * 2 = " << 5*2 << endl;
    cout << "5 / 2 = " << 5/2 << endl;
    cout << "5 % 2 = " << 5%2 << endl;
    
    int five = 5;
    
    cout << "5++ = " << five++ << endl;
    cout << "++5 = " << ++five << endl;
    cout << "5-- = " << five-- << endl;
    cout << "--5 = " << --five << endl;
    
    five += 6; five = five + 6;
    
    cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
    cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl;
    
    cout << "4 / 5 = " << 4 / 5 << endl;
    cout << "4 / 5 = " << (float) 4 / 5 << endl; 
    
    int age = 70;
    int ageAtLastExam = 16;
    
    bool isNotIntoxicated = true;
    
    if((age >= 1) && (age < 16)){
        
        cout << "You can't drive" << endl;
    } else if(! isNotIntoxicated) {
        
        cout << "You can't drive" << endl;    
    
    } else if(age >= 80 && ((age > 100) ||((age - ageAtLastExam) > 5))) {
        
        cout << "You can't drive" << endl;
            
    } else {
        
        cout << "You can drive" << endl;
    
    }
    
    return 0;
}
