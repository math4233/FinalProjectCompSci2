#include "corpIT.h"
#include <string>
#include <iostream>
corpIT::corpIT()
{
//empty constructor
}

void corpIT::Setposition(std::string val){
std::cout << "You have chosen: " << val << std::endl;
position = val;

}
void corpIT::invokeDescrip(){
        std::cout << "Corporate/Organizational IT is a key part of a business, without it, work will not get done. They maintain the tools and equipment for work to be done." << std::endl;
    std::cout <<"Very typically, they are undervalued. Long shifts and hours in addition with poor management leads to burnout amongst professionals." << std::endl;
    std::cout << "This is often how people work their way into the IT industry, starting from help desk." << std::endl;
    std::cout << "The following below is a hierarchy of IT." << std::endl;
        std::cout << "Level 1/Help-desk or Technician" << std::endl;
        std::cout << "Level 2/Tier 2 Support" << std::endl;
        std::cout << "Jr. Sys-Admin or Jr. Network Admin" << std::endl;
        std::cout << "Sys-Admin or Network Admin" << std::endl;
        std::cout << "Everything beyond this point is more specialized roles, leading into most of the other fields." << std::endl;
        std::cout << "You can check for more information and resources regarding this in the resources page." << std::endl;
      std::cout << "What position are you most interested in?" << std::endl;
      std::string value;
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::getline(std::cin,value);
Setposition(value);
}
