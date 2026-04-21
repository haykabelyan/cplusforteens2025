#include <iostream>
#include <vector>

int main(){
    std::string s;
    std::vector<std::string> words = {"alice","bob","charlie"};

    
   for(int i = 0; i<words.size(); i++){
         s += words[i][0];
    }

   std::cout << s;

}