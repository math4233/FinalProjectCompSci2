#include "security.h"
#include <string>
#include <iostream>
security::security()
{
//empty constructor
}

  void security::invokeDescrip(){
      std::cout<< "Cybersecurity & Security is one of the biggest parts of IT. You may have a vault, but if a person is involved, then it is not a vault." <<std::endl;
      std::cout<< "Information Security is important because information can get stolen, ransomed, deleted, compromised, or much much more. Companies can collapse if they are ransomed," <<std::endl;
      std::cout<< " hence why security is very important." <<std::endl;
      std::cout<< "This is a advanced branch, and is not entry level." <<std::endl;
      std::cout<< "There is common misconceptions of 'entry level' cybersecurity, and it is all but true." <<std::endl;
      std::cout<< "There is multiple branches, and below is multiple ways people can be involved." <<std::endl;
      std::cout<< "PenTesting & Ethical Hacking" <<std::endl;
      std::cout<< "Risk Management and Analysis" <<std::endl;
      std::cout<< "Digital Forensics" <<std::endl;
      std::cout<< "Development" <<std::endl;
      std::cout<< "Matter of fact, Cryptography matters a lot in this field, to read more, check the sources under 'Security Sources'." <<std::endl;
      std::cout <<"What branch are you interested in?" << std::endl;
        std::string branch;
        std::cin>>branch;
        std::cout<<"That is a good branch!" << std::endl;

  }
