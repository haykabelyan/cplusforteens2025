#include <iostream>
using namespace std;

int main(){
    string s = "l|*e*et|c**o|*de|";
    int count1 = 0; 
    int count = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '|'){
            count1++;
        }
        else if(s[i] == '*' && count1 % 2 == 0){
            count++; 
        }
    }

    cout << count << endl;
    return 0;
}