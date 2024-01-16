#include <iostream>
#include <unordered_map>


int main() {
    std::string s;
    std::cin >> s;

    std::unordered_map<char, int> a;

    for(auto c : s) {
        a[c]++;
    }

    bool odd = false;
    char middle;
    for(auto p : a) {
        if(p.second % 2) {
            if(odd) {
                std::cout << "NO SOLUTION\n";
                return 0;
            }
            odd = true;
            middle = p.first;
        }
    }

    std::string lhs, mid;
    for(auto p : a) {
        if(p.first == middle) {
            mid = std::string(p.second, p.first);
        } else {
            lhs.append(std::string(p.second / 2, p.first));
        }
    }

    std::string rhs (lhs.rbegin(), lhs.rend());
    std::cout << lhs << mid << rhs << std::endl;

    return 0;
}