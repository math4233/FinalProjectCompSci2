#include "softwareDev.h"
#include <string>
#include <iostream>
softwareDev::softwareDev()
{
//empty constructor
}

void softwareDev::invokeDescrip(){
std::cout << "This field is the 'background' of IT. Every field partakes in this field in many ways." << std::endl;
std::cout << "Sys-Admins write scripts, Network Admins configure settings/scripts and Auditors have to read through the code." << std::endl;
std::cout << "This is how our software runs and is maintained. There is different was and flow methods, an important flow is DevOps and Infrastructure as Code." << std::endl;
std::cout << "Git is an important resource for software development, it has version control and many more tools." << std::endl;
std::cout << "Below is the most common types of software development:" << std::endl;
std::cout << "Web" << std::endl;
std::cout << "Game" << std::endl;
std::cout << "Desktop" << std::endl;
std::cout << "Data Science" << std::endl;
std::cout << "Cloud" << std::endl;
std::cout << "DevOps" << std::endl;
std::cout << "Additionally, jobs like these are the ones that are often work from home (WFH) as compared to other jobs in IT." << std::endl;
std::cout << "What type of development interests you?" << std::endl;
std::string dev;
 std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::getline(std::cin,dev);
typeDevelopmnt = dev;
}
