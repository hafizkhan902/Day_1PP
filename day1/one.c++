#include<iostream>
#include<string>
#include<fstream>

int main(){
    std::cout<<"HEllo there from the world of c++" <<std::endl;
    int age=23;
    double height;
    std::cout<<"Enter your name here";
    std::cin>>height;
    std::string name="hafiz";
    std::cout<<name<<std::endl;
    std::cout<<"Name: " <<name<<std::endl;
    std::cout<<"Age :" <<age<<std::endl;

    std::cout<<" Welcome Mr. "<<name<<std::endl<<"And I can see you are : "<<age<<" years old and we can also see your height is : "<<height<<std::endl;

}