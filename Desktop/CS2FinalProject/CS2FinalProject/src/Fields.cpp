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
Fields::Fields()
{
    std::cout <<"bruh"<<std::endl;

}
int Fields::beginProcess()
{
    std::cout<<"To begin, are you interested in the field and world of Information Technology (IT)? (n or y)" << std::endl;
    std::string isInterested;
       std::cin >> isInterested;
    while (!(isInterested == "n" || isInterested =="y")){
        std::cout << "please enter n or y" << std::endl;
        std::cin>>isInterested;
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
std::vector<std::string> fieldsList = {"1. Corporate/Enterprise IT", "2. Software Development","3. Networking", "4. Auditing", "5. Security", "6. I don't know what I wan't"};
for(int i = 0;i<fieldsList.size();i++){
std::cout << fieldsList[i] << std::endl;
}

int field = 0;
std::cin >> field;
while(field == 0 || field > 6){
    std::cout <<"Please choose a field: " << std::endl;
    std::cin >> field;
}
field--;
std::cout<<"You have chosen: " << fieldsList[field] << std::endl;
name = fieldsList[field].substr(2,fieldsList[field].length());
if(field == 0 ){
corpIT corp;
corp.invokeDescrip();
}
else if(field == 1){
networking net;
net.invokeDescrip();
}
else if(field=2){

}
else if(field = 3){

}

if(field == 5){
std::cout << "Please type out what you would like to do:" << std::endl;
std::string phrase;
std::cin >> phrase;
std::cout << dontKnowButt(phrase) << std::endl;
}
else{

}


std::cout << "If you need any other help or resources, type the number in front of what you want." << std::endl;
std::cout << "Input 0 to shut the program down." << std::endl;
std::cout <<"1. Sources" << std::endl;
std::cout <<"2. Resume Examples" << std::endl;
std::cout <<"3. Pay Examples" << std::endl;
std::cout <<"4. Projects/Homelabs" << std::endl;

int num = 1;
FieldInfo object(fieldsList[field]);
while(num != 0){
    std::cin>>num;
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
std::string Fields::dontKnowButt(std::string phrase){
     std::vector<std::string> keywords = {"hacking","hack","software","develop","development","repair","high pay","networking","network","auditor","contractor","government","administrator","administration","penetration","testing"};
     std::vector <std::string> fields ={"security","security","software development","software development","software development","corporate/enterprise IT","any","networking","auditing","auditing/security","security","corporate/enterprise IT","corporate/enterprise IT","security","security"};
return "This feature is under progress as of the moment. Please check back later!";
    }

