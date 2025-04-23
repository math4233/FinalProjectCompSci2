#include "networking.h"
#include <string>
#include <iostream>
networking::networking()
{
 //empty constructor
}

void networking::invokeDescrip(){
    //lines 11-19 is a description of networking in IT
     std::cout<< "Networking covers many important aspects of IT. They may just install switches or maintain an entire company's network infrastructure." << std::endl;
     std::cout<< "They could be more hands on, dealing with tickets to create, upgrade, or replace infrastructure and hardware." << std::endl;
     std::cout<< "This is a more specialized role, later in one's career, and is not entry level." << std::endl;
     std::cout<< "Certifications like CCNA and Net+ are essential fundamentals and will prepare you with the know hows for your work." << std::endl;
     std::cout<< "Typically there is no real hierarchy in regards to this role." << std::endl;
     std::cout<< "Jr. Network Admin -> Network Admin" << std::endl;
     std::cout<< "Network Admin -> Network Engineer" << std::endl;
     std::cout<< "Network Engineer -> Network Architech" << std::endl;
     std::cout<< "For more information, check out the projects resources!" << std::endl;
     std::cout<< " " << std::endl;
     //prompts what field the user is interested in
      std::cout << "What position are you most interested in?" << std::endl;
      std::string value = "";
      //edge case prevention, prevents issues with selecting resources by fetching the entire line, not just one word.
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::getline(std::cin,value);
      std::cout <<"That is a good position!" << std::endl;
      //updates the networking role for the object with the user choice
      Setrole(value);
}
