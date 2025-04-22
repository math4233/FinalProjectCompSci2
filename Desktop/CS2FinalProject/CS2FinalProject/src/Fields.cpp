#include "Fields.h"
#include <iostream>
#include <vector>
Fields::Fields()
{
    std::cout <<"bruh"<<std::endl;

}
int Fields::beginProcess()
{
    std::cout<<"To begin, are you interested in the field and world of Information Technology (IT)?" << std::endl;
    std::string isInterested;
    std::cin >> isInterested;
if(isInterested == "no"){
    std::cout << "You have chosen: no" << std::endl;
     std::cout << "If you are not interested, why are you here?" << std::endl;
     return 1;
}
else{
     std::cout << "You have chosen: yes" << std::endl;
}
std::cout << "What part of IT are you interested in?" << std::endl;
std::cout << "Type out the corresponding integer (number) associated with the field you are interested in." << std::endl;
std::vector<std::string> fieldsList = {"1. Corporate/Enterprise IT", "2. Software Development","3. Networking", "4. Auditing", "5. Security"};
for(int i = 0;i<fieldsList.size();i++){
std::cout << fieldsList[i] << std::endl;
}
int field = 0;
std::cin >> field;
while(field == 0 || field >= 5){
    std::cout <<"Please choose a field: " << std::endl;
    std::cin >> field;

}
field--;
std::cout<<"You have chosen: " << fieldsList[field] << std::endl;
name = fieldsList[field].substr(2,fieldsList[field].length());

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

