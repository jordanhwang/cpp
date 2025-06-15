#include <iostream>
#include <string>
#include <set>
#include <cctype>
#include <vector>
#include <utility>
#include <map>

using std::vector;
using namespace std;




class Solution
{
public:
    bool isValid(string s)
    {
        /*
        Brainstorm
        - they are pairs. first = '(', second = ')'
        - there must always be a pair to be valid
        - all pairs inside the main must be closed
            - Invalid: ([{]})

        - if starts with .second, it's wrong

        */


        std::map<std::pair<char, char>, std::pair<int, int>> bracketsMap = {
            {{'(', ')'}, {0, 0}},
            {{'{', '}'}, {0, 0}},
            {{'[', ']'}, {0, 0}},
        };

        for (char c : s)
        {
            for (auto& [bracketPair, countPair] : bracketsMap)
            {
                if (c == bracketPair.first)
                {
                    countPair.first++;
                }
                else if (c == bracketPair.second)
                {
                    if (countPair.second >= countPair.first)
                    {
                        return false;
                    }
                    countPair.second++;
                }
            }
        }

        return true;

    }
};

int main()
{
    Solution solution;

    std::string input = "{}()";
    if (solution.isValid(input))
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }

    return 0;
}