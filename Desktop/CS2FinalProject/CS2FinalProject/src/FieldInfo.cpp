#include "FieldInfo.h"
#include <iostream>
#include <fstream>
#include <string>

FieldInfo::FieldInfo(std::string field)
{
this->field = field;
}
std::string FieldInfo::createSourceList(){
    if(std::ifstream("sources.txt")){
        return "The source file is already created. Please check the project's directory.";
    }
    else{
       std::ofstream ob("sources.txt");
       ob << "These are the sources used: " << std::endl;
    }
}
std::string FieldInfo::createPayList(){
    if(std::ifstream("paylist.txt")){
        return "The pay list file is already created. Please check the project's directory.";
    }
    else{
       std::ofstream ob("paylist.txt");
       ob << "This is the pay ranges for the fields: " << std::endl;
    }
}
std::string FieldInfo::createProjects(){
    if(std::ifstream("projects.txt")){
        return "The projects file is already created. Please check the project's directory.";
    }
    else{
       std::ofstream ob("projects.txt");
       ob << "These are project and homelab examples that you can use for your field! " << std::endl;
    }
}

std::string FieldInfo::createResumeList(){
    if(std::ifstream("resumeExamples.txt")){
        return "The resume examples file is already created. Please check the project's directory.";
    }
    else{
       std::ofstream ob("resumeExamples.txt");
       ob << "These are resources for resume examples depending on your field: " << std::endl;
    }
}



