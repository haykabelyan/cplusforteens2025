
// Всё объектно-ориентированное программирование строится на четырёх понятиях: 
// инкапсуляции, наследовании, полиморфизме и абстракциях.

// Каждый объект в ООП строится по определённому классу — 
// абстрактной модели, описывающей, из чего состоит объект и что с ним можно делать.



#include <iostream>

class Cat{

    public:
        std::string breed;
        std::string color;
        int age;

        Cat(std::string breed, std::string color, int age){
            this->breed = breed;
            this->color = color;
            this->age = age;
        }

        void meow(){
            std::cout << "Meow " << this->breed << std::endl;
        }

        void sleep(){
            std::cout << "Sleeping" << std::endl;
        }        
    
};

int main(){
    Cat cat1("Persian", "White", 3);
    Cat cat2("Siamese", "Black", 2);
    cat1.meow();
    cat1.sleep();
    std::cout << "Cat1 breed: " << cat1.breed << std::endl;
    std::cout << "Cat1 color: " << cat1.color << std::endl;
    std::cout << "Cat1 age: " << cat1.age << std::endl;
    return 0;
}