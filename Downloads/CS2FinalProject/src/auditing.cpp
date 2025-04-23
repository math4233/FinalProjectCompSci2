#include "auditing.h"
#include <string>
#include <iostream>
auditing::auditing()
{
    //empty constructor
}

void auditing::invokeDescrip(){
std::cout << "Just like any other industry, there is regulations for IT. " << std::endl;
std::cout << "The frameworks and standards vary on the industry (law, health-care, education, etc.)" << std::endl;
std::cout << "Examples are ISO 27000 series, NIST SP frameworks, CIS Controls and HITRUST are one of many. " << std::endl;
std::cout << "This differs from security, as auditing only audits, not creates. This could be for certifications or for insurance reasons." << std::endl;
std::cout << "There is many types of audits, but the common ones are listed below:" << std::endl;
std::cout << "Compliance" << std::endl;
std::cout << "Security" << std::endl;
std::cout << "Operational" << std::endl;
std::cout << "Privacy" << std::endl;
std::cout << "Risk Assesment" << std::endl;
std::cout << "What type of auditing interests you?" << std::endl;
std::string audit;
 std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::getline(std::cin,audit);
standard = audit;

}
