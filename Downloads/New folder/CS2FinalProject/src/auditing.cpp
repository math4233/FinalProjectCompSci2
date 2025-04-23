#include "auditing.h"
#include <string>
#include <iostream>
auditing::auditing()
{
    //empty constructor
}

void auditing::invokeDescrip(){
    //lines 11-20 cover the description of the field of IT auditing
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
//prompts the user of what interests them
std::cout << "What type of auditing interests you?" << std::endl;
//edge case prevention, prevents issues with selecting resources by fetching the entire line, not just one word.
std::string audit;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::getline(std::cin,audit);
//updates the auditing standard/field for the object with the user choice
standard = audit;

}
