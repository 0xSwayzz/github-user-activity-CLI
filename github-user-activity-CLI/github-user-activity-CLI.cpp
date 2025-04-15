#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>

void getUserActivity(const std::string& username);

int main()
{
    SetConsoleTitleA("GitHub User Activity CLI");

    std::string username;

    while (true)
    {
        std::cout << "Enter GitHub username (or type 'exit' to quit): ";
        std::cin >> username;

        if (username == "exit" || username == "q")
            break;

        getUserActivity(username);
        std::cout << "\n";
    }

    std::cout << "Goodbye!\n";
    return 0;
}

void getUserActivity(const std::string& username)
{
    std::string url = "https://api.github.com/users/" + username + "/events";
    std::string command = "curl -s -H \"Accept: application/vnd.github.v3+json\" " + url;
    std::system(command.c_str());
}