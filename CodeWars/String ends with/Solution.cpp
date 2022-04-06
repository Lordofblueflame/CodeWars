#include <string>
#include <iostream>

bool solution(std::string const &str, std::string const &ending) {

    int lengthStr = str.length();
    int lengthEnding = ending.length();

    return (lengthStr < lengthEnding) ? false : (str == ending) ? true : (ending == "") ? true : (str.substr(lengthStr-lengthEnding,lengthStr) == ending ) ? true : false  ;
}

int main()
{
    std::cout<<solution("abcde","cde");
    std::cout<<solution("abcde", "cde");
    std::cout<<solution("abcde", "abc");
    std::cout<<solution("abc", "");
    return 0;
}