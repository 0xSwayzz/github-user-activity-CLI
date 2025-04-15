#include <iostream>

int main()
{
	getUserActivity("octocat");
}

void getUserActivity(std::string username)
{
	std::string url = "https://api.github.com/users/" + username + "/events";
	std::string command = "curl -s -H \"Accept: application/vnd.github.v3+json\" " + url;
	std::system(command.c_str());
}
