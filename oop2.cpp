// Incapulation
// Incapulation is the process of hiding the implementation details of a class from the outside world.
// It is achieved by using private, protected and public access modifiers.

// Доступ к данным объекта должен контролироваться, 
// чтобы пользователь не мог изменить их в произвольном порядке и что-то поломать. 


#include <iostream>


class Cat{
    private:
        std::string breed;
        std::string color;
        int age;

    public:
        Cat(std::string breed, std::string color, int age){
            this->breed = breed;
            this->color = color;
            this->age = age;
        }

        void meow(){
            std::cout << "Meow" << this->breed << std::endl;
        }

        void sleep(){
            std::cout << "Sleeping" << std::endl;
        }

        std::string getBreed(){
            return this->breed;
        }

        std::string getColor(){
            return this->color;
        }

        int getAge(){
            return this->age;
        }

        void setAge(int age){
            if(age > this->age){
                this->age = age;
            }
            else{
                std::cout << "Age is not valid" << std::endl;
            }
        }
        
};

int main(){
    Cat cat1("Persian", "White", 3);
    cat1.setAge(1);
    std::cout << cat1.getAge() << std::endl;
    return 0;
}

