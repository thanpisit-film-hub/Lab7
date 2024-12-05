#include <iostream>
#include <string>

int main() {
    
    std::string _name, _numbereng, _mv, _day, _ansans;
    int _ans1;
    std::cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n";
    std::cout << "?????: ";
    std::getline(std::cin,_name);
    std::cout << "Fahsai: Wow!!! " << _name << " is a really cool name." << "\n";
    std::cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << "\n";
    std::cout << _name << ": ";
    std::cin >> _numbereng;
    std::cin.ignore();
    int x = std::stoi(_numbereng.substr(0,2));
    _ans1 = x - 12;
    
    std::cout << "Fahsai: I think you may be GEAR " << _ans1 << ". I have a free movie ticket for you." << "\n";
    std::cout << "Fahsai: Let's go to the cinema together!!!" << "\n";
    std::cout << "Fahsai: What movie do you want to watch?" << "\n";
    std::cout << _name << ": ";
    std::getline(std::cin, _mv);
    std::cout << "Fahsai: So....which day are you free to go with me?" << "\n";
    std::cout << _name << ": ";
    std::getline(std::cin, _day);
    std::cout << "Fahsai: " << _day << "....that is OK!!! I'm looking forward to watching " << _mv << " with you." << "\n";
    std::cout << _name << ": ";
    std::cin >> _ansans;
    std::cout << "Fahsai: 555+ see you " << _day << ". Bye Bye \\(^ ^)/";
}