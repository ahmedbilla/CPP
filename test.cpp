#include <iostream>

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string Darkest_secret;

public:
    void get_name(std::string value, int type)
    {
        if (type == 1)
            first_name = value;
        else if (type == 2)
            last_name = value;
        else if (type == 3)
            nickname = value;
        else if (type == 4)
            phone_number = value;
        else if (type == 5)
            Darkest_secret = value;
        else if(type == 6)
            std::cout << first_name << " " << last_name << " " << nickname << " "
          << phone_number << " " << Darkest_secret << std::endl;

    }
};
class Phonbook
{
    Contact arr[8];

public:
};

int main()
{
    Contact personel_info;

    std::string chois;
    std::string prv_info;
    std::cout << "Please enter a command. (ADD, SEARCH OR EXIT) :";
    std::cin >> chois;
    if (chois == "ADD")
    {
        std::cout << "First name : ";
        std::cin >> prv_info;
        personel_info.get_name(prv_info, 1);

        std::cout << "Last name : ";
        std::cin >> prv_info;
        personel_info.get_name(prv_info, 2);

        std::cout << "Nickname : ";
        std::cin >> prv_info;
        personel_info.get_name(prv_info, 3);

        std::cout << "Phone number : ";
        std::cin >> prv_info;
        personel_info.get_name(prv_info, 4);

        std::cout << "Darkest secret : ";
        std::cin >> prv_info;
        personel_info.get_name(prv_info, 5);

        personel_info.get_name("show res", 6);
    }
    else if (chois == "SEARCH")
        std::cout << "hna SEARCH";
    else if (chois == "EXIT")
        return 0;
    else
        std::cout << "Command not found";
    // std::cout << chois;
}