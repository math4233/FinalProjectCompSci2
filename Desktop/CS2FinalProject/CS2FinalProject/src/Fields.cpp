#include "Fields.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include "FieldInfo.h"
#include "corpIT.h"
#include "networking.h"
#include "security.h"
#include "auditing.h"
#include "softwareDev.h"
#include <limits>
Fields::Fields()
{
    std::cout <<"bruh"<<std::endl;

}
int Fields::beginProcess(){
    std::cout<<"To begin, are you interested in the field and world of Information Technology (IT)? (n or y)" << std::endl;
    std::string isInterested;
    while (true){
  std::getline(std::cin, isInterested);
  isInterested.erase(remove_if(isInterested.begin(), isInterested.end(), ::isspace), isInterested.end());
  if(isInterested == "n" || isInterested == "y"){
    break;
  }
    std::cout << "please enter n or y" << std::endl;


    }

    if(isInterested == "n"){
    std::cout << "You have chosen: n" << std::endl;
     std::cout << "If you are not interested, why are you here?" << std::endl;
     return 1;
    }
        else{
            std::cout << "You have chosen: y" << std::endl;
        }


    std::cout << "What part of IT are you interested in?" << std::endl;
    std::cout << "Type out the corresponding integer (number) associated with the field you are interested in." << std::endl;
    std::vector<std::string> fieldsList = {"1. Corporate/Enterprise IT", "2. Software Development","3. Networking", "4. Auditing", "5. Security"};
    for(int i = 0;i<fieldsList.size();i++){
        std::cout << fieldsList[i] << std::endl;
    }

    int field = 0;
    while(true){
        std::cout <<"Please choose a field: " << std::endl;
        std::cin >> field;
        if(!std::cin){

           std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        continue;
        }
        if(!(field == 0 || field > 5)){
         break;
        }

    }
    field--;
    std::cout<<"You have chosen: " << fieldsList[field] << std::endl;
    name = fieldsList[field].substr(2,fieldsList[field].length());
    if(field == 0 ){
        corpIT corp;
        corp.invokeDescrip();
    }
    else if(field == 1){
        softwareDev dev;
        dev.invokeDescrip();
    }
    else if(field == 2){
networking net;
net.invokeDescrip();
    }
    else if(field == 3){
auditing aud;
aud.invokeDescrip();
    }
    else {
        security sec;
        sec.invokeDescrip();
    }

    std::cout << "If you need any other help or resources, type the number in front of what you want." << std::endl;
    std::cout << "Input 0 to shut the program down." << std::endl;
    std::cout <<"1. Sources" << std::endl;
    std::cout <<"2. Resume Examples" << std::endl;
    std::cout <<"3. Pay Examples" << std::endl;
    std::cout <<"4. Projects/Homelabs" << std::endl;

    int num = 0;
    while(true){
     while(true){
        std::cout <<"please type an valid integer: " << std::endl;
        std::cin >> num;
        if(!std::cin){

           std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        continue;
        }
        if(!(num < 0 && num > 4)){
         break;
        }
    }
    FieldInfo object(fieldsList[field]);

        if(num == 1){
            std::cout<<object.createSourceList() << std::endl;
        }
        if(num == 2){
            std::cout<<object.createResumeList() << std::endl;
        }
        if(num == 3){
            std::cout<<object.createPayList() << std::endl;
        }
        if(num == 4){
            std::cout<<object.createProjects() << std::endl;
        }
        if(num == 0){
            break;

        }
    }
return 1;
}

std::string Fields::getName(){
    return name;
}
std::string Fields::getDescrip(){
    return descrip;
}
void Fields::setDescrip(std::string descrip){
    this->descrip = descrip;
}
void Fields::setName(std::string name){
    this->name = name;
}


