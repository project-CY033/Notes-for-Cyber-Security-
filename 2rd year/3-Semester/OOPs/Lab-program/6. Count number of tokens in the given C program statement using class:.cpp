// Count number of tokens in the given C program statement using class:


 #include <iostream>
#include <string>
#include <sstream>
#include <vector>
class TokenCounter {
public:
TokenCounter(const std::string& statement) : statement_(statement) {}
int countTokens() {
tokenize();
return tokens_.size();
}
private:
void tokenize() {
std::istringstream iss(statement_);
std::string token;
while (iss >> token) {
tokens_.push_back(token);
}
}
std::string statement_;
std::vector<std::string> tokens_;
};
int main() {
std::cout << "Enter a C program statement: ";
std::string input;
std::getline(std::cin, input);
TokenCounter tokenCounter(input);
int tokenCount = tokenCounter.countTokens();
std::cout << "Number of tokens: " << tokenCount << std::endl;
return 0;

}
