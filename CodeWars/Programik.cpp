#include <string>
#include <map>
#include <cctype>
#include <iostream>

bool sameLenghtString(std::string test, std::string original)
{

  std::map<std::string, int> map1 = 
{
        {"A",0},{"B",0},{"C",0},
        {"D",0},{"E",0},{"F",0},
        {"G",0},{"H",0},{"I",0},
        {"J",0},{"K",0},{"L",0},
        {"M",0},{"N",0},{"O",0},
        {"P",0},{"Q",0},{"R",0},
        {"S",0},{"T",0},{"U",0},
        {"V",0},{"W",0},{"X",0},
        {"Y",0},{"Z",0}
    };

std::map<std::string, int> map2 = 
{
        {"A",0},{"B",0},{"C",0},
        {"D",0},{"E",0},{"F",0},
        {"G",0},{"H",0},{"I",0},
        {"J",0},{"K",0},{"L",0},
        {"M",0},{"N",0},{"O",0},
        {"P",0},{"Q",0},{"R",0},
        {"S",0},{"T",0},{"U",0},
        {"V",0},{"W",0},{"X",0},
        {"Y",0},{"Z",0}
    };

  if(test == "" && original == "")
  return true;
  for(char a : test)
    {
    std::string temp_string(1,(char)toupper(a));
    map1[temp_string]++;
    }
  for(char a : original)
    {
    std::string temp_string(1,(char)toupper(a));
    map2[temp_string]++;
    }
  if(map1 == map2)
  return true;
  else
  return false;
}

bool isAnagram(std::string test, std::string original){
  return (test.length() == original.length()) ? sameLenghtString(test,original): false; 
}


int main()
{
    std::cout<<"o to gówno "<<isAnagram("kuSMaPBMslwegQjZSbcuCzJH", "jhbUwaZGCUJMSsmezkSpcBQL");
 
    return 0;
}