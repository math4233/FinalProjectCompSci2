#include "FieldInfo.h"
#include <iostream>
#include <fstream>
#include <string>
FieldInfo::FieldInfo(std::string field)
{
//empty constructor
}
//this function calls on the readFile function to open the sources
std::string FieldInfo::createSourceList(){
    this->readFile("sources.txt");
}
//this function calls on the readFile function to open the pay ranges
std::string FieldInfo::createPayList(){
    this->readFile("paylist.txt");
}
//this function calls on the readFile function to open the project examples
std::string FieldInfo::createProjects(){
    this->readFile("projects.txt");
}
//this function calls on the readFile function to open the resume examples
std::string FieldInfo::createResumeList(){
    this->readFile("resumeExamples.txt");
}//file opens the provided txt file if possible, and outputs it to the console.
void FieldInfo::readFile(std::string name){
  std::ifstream open(name);
  //if it fail to open, it will notify the user, if it opens, it will notify accordingly.
    if(open.fail()){
        std::cout<< "The file cannot be opened. Please restart and try again." << std::endl;
    }
    else{
        std::cout << "The file has been successfully opened." << std::endl;
    }
    //outputs each line in the .txt file
   std::string sent;
   while(std::getline(open,sent)){
    std::cout<<sent << std::endl;
   }
   //closes the file
   open.close();


}



