#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> operations = {"--X","X++","X++"};
    int count = 0;

    for(int i = 0; i<operations.size(); i++){
        if(operations[i] == "--X" || operations[i] == "X--"){
            count--;
        }
        if(operations[i] == "X++" || operations[i] == "++X"){
            count++;
        }
    }

    std::cout << count << std::endl;
}