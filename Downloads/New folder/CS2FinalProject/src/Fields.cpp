#include "Fields.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include "FieldInfo.h"
#include "corpIT.h"
#include "networking.h"
#include "security.h"
#include "auditing.h"
#include "softwareDev.h"
#include <limits>
Fields::Fields()
{
 //empty constructor
}
//beginning process
int Fields::beginProcess(){
    //prompts if user is interested in the field
    std::cout<<"To begin, are you interested in the field and world of Information Technology (IT)? (n or y)" << std::endl;
    std::string isInterested;
    //essentially makes sure that the user inputs either y or n, nothing else, and making sure no integers are inputted.
    while (true){
  std::getline(std::cin, isInterested);
  //edge case prevention 1
  isInterested.erase(remove_if(isInterested.begin(), isInterested.end(), ::isspace), isInterested.end());
  if(isInterested == "n" || isInterested == "y"){
        //breaks if either n or y is inputted
    break;
  }
  //if the user goes through the first time not selecting either
    std::cout << "please enter n or y" << std::endl;
    }
//asks why the user is there if they don't want to be there
    if(isInterested == "n"){
    std::cout << "You have chosen: n" << std::endl;
     std::cout << "If you are not interested, why are you here?" << std::endl;
     return 1;
    }
        else{
                //confirms that user wants to proceed
            std::cout << "You have chosen: y" << std::endl;
        }

//prompts what field the user likes
    std::cout << "What part of IT are you interested in?" << std::endl;
    std::cout << "Type out the corresponding integer (number) associated with the field you are interested in." << std::endl;
    //lists numbers that correspond with a field, 1 for corporate, etc.
    std::vector<std::string> fieldsList = {"1. Corporate/Enterprise IT", "2. Software Development","3. Networking", "4. Auditing", "5. Security"};
    for(int i = 0;i<fieldsList.size();i++){
            //outputs all of the list
        std::cout << fieldsList[i] << std::endl;
    }

    int field = 0;
    while(true){
        //edge case prevention 2, makes sure they don't put a string or char, but making sure it is an integer between 1 - 5.
        std::cout <<"Please choose a field: " << std::endl;
        std::cin >> field;
        if(!std::cin){
           std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        continue;
        }
    //checks if between 1-5
        if(!(field == 0 || field > 5)){
         break;
        }

    }
    //subtracts 1 for index purposes
    field--;
    //lists out the user's choice
    std::cout<<"You have chosen: " << fieldsList[field] << std::endl;
    //gets the name without the number infront
    name = fieldsList[field].substr(2,fieldsList[field].length());
    //goes and checks which field the user had selected. if field is = 0, they chose 1, and that means that they chose corporate IT, hence why it is if field = 0
    if(field == 0 ){
        corpIT corp;
        //shows description, refer to corpIT.ccp for implementation
        corp.invokeDescrip();
    }
    else if(field == 1){
        softwareDev dev;
         //shows description, refer to softwareDev.ccp for implementation
        dev.invokeDescrip();
    }
    else if(field == 2){
        networking net;
        //shows description, refer to networking.ccp for implementation
        net.invokeDescrip();
    }
    else if(field == 3){
        auditing aud;
        //shows description, refer to auditing.ccp for implementation
        aud.invokeDescrip();
    }
    else {
        security sec;
         //shows description, refer to security.ccp for implementation
        sec.invokeDescrip();
    }
// the user is prompted if they want any resources
    std::cout << "If you need any other help or resources, type the number in front of what you want." << std::endl;
    std::cout << "Input 0 to shut the program down." << std::endl;
    std::cout <<"1. Sources" << std::endl;
    std::cout <<"2. Resume Examples" << std::endl;
    std::cout <<"3. Pay Examples" << std::endl;
    std::cout <<"4. Projects/Homelabs" << std::endl;

    int num = 0;
    //edge case prevention again, making sure that there is no string, and the integer is inbetween bounds.
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
    //creates a FieldInfo object to call on the functions that can display the .txt files
    FieldInfo object(fieldsList[field]);
        if(num == 1){
                //displays the sources.txt file
            std::cout<<object.createSourceList() << std::endl;
        }
        if(num == 2){
            //displays the resumeExamples.txt file (known issue)
            std::cout<<object.createResumeList() << std::endl;
        }
        if(num == 3){
            //displays the paylist.txt file
            std::cout<<object.createPayList() << std::endl;
        }
        if(num == 4){
            //displays the projects.txt file
            std::cout<<object.createProjects() << std::endl;
        }
        //ends the program if user inputs 0
        if(num == 0){
            break;

        }
    }
return 1;
}
//standard getter/setter function
std::string Fields::getName(){
    return name;
}
//standard getter/setter function
std::string Fields::getDescrip(){
    return descrip;
}
//standard getter/setter function
void Fields::setDescrip(std::string descrip){
    this->descrip = descrip;
}
//standard getter/setter function
void Fields::setName(std::string name){
    this->name = name;
}


