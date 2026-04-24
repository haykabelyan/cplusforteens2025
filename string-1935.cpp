#include <iostream>
#include <string>

int main(){
    std::string text = "hello world";
    std::string brokenletters = "ad";
    int count = 0;
    bool IsNotBroken = true;

    for(int i = 0; i < text.size(); i++){
        if(text[i] == ' '){
            if(IsNotBroken){
                count++;
            }
            IsNotBroken = true; 
        }
        else {
            if(brokenletters.find(text[i]) != std::string::npos){
                IsNotBroken = false;
            }
        }
    }

    if(IsNotBroken) count++; 

    std::cout << count << std::endl;
}