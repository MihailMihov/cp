#include <iostream>

int main() {
    std::string s;
    std::cin >> s;

    int max = 1;
    int len = 1;
    char current = s[0];
    for(int i = 1; i < s.length(); ++i) {
        if(s[i] == current) ++len;
        else {
            len = 1;
            current = s[i];
        }
        max = std::max(max, len);
    }

    std::cout << max << '\n';

    return 0;
}