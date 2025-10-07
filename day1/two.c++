#include<iostream>
#include<string>
int main(){
    //this block show the data types of each variables with the working examples : 
    std::string Name;
    int Age;
    float Height;
    double Salary;
    char LovedLetter;
    bool isMarried;

    std::cout<<"Enter your name :"<<std::endl;
    std::cin>>Name;

    std::cout<<"Enter your Age :"<<std::endl;
    std::cin>>Age;

    std::cout<<"Enter your height here : " <<std::endl;
    std::cin>>Height;

    std::cout<<"Enter your salary Here :"<<std::endl;
    std::cin>>Salary;

    std::cout<<"Enter your Letter that you love most in the English "<<std::endl;
    std::cin>>LovedLetter;

    std::cout<<"Enter 0 if you are not married and 1 if you are married : "<<std::endl;
    std::cin>>isMarried;

    std::cout<<"Welcome Mr: "<<Name<<std::endl<<"You are "<<Age<<" Years old . And your height is : "<<Height << std::endl;
    std::cout<<Name<<"'s Salary is : "<<Salary<<std::endl;
    std::cout<<Name<<"'s Loved Letter is : "<<LovedLetter<<std::endl;
    if(isMarried==0){
        std::cout<<Name<<" is Unmarried "<<std::endl;
    }
    else if (isMarried==1){
        std::cout<<Name <<" is married"<<std::endl;
    }




}