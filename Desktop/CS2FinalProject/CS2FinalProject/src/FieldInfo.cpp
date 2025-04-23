#include "FieldInfo.h"
#include <iostream>
#include <fstream>
#include <string>

FieldInfo::FieldInfo(std::string field)
{
this->field = field;
}
std::string FieldInfo::createSourceList(){
    this->readFile("sources.txt");
}
std::string FieldInfo::createPayList(){
    this->readFile("paylist.txt");
}
std::string FieldInfo::createProjects(){
    this->readFile("projects.txt");
}

std::string FieldInfo::createResumeList(){
    this->readFile("resumeExamples.txt");
}
void FieldInfo::readFile(std::string name){
  std::ifstream open(name);
    if(open.fail()){
        std::cout<< "The file cannot be opened. Please restart and try again." << std::endl;
    }
    else{
        std::cout << "The file has been successfully opened." << std::endl;
    }
   std::string sent;
   while(std::getline(open,sent)){
    std::cout<<sent << std::endl;
   }
   open.close();


}



