
#include <iostream>
#include <string>

void login(std::string username, std::string password) {
    if (username == "abcd" && password == "pakistan") {
        std::cout << "Login success" << std::endl;
    } else {
        std::cout << "Login failed" << std::endl;
    }
}

int main() {
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;
    
    login(username, password);
    
    return 0;
}
