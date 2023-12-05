#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>

int play(std::string& game, int x, int y) {
    int ap = 0, as = 0;
    int bp = 0, bs = 0;

    for(int i = 0; i < game.length(); ++i) {
        char p = game[i];
        if(p == 'A') ap++;
        else bp++;
        if(ap == x) {
            as++;
            ap = 0;
            bp = 0;
        } else if(bp == x) {
            bs++;
            ap = 0;
            bp = 0;
        }
        if(as == y) {
            if(i != game.length() - 1) return 0;
            if(p == 'A') return 1;
        }
        else if(bs == y) {
            if(i != game.length() - 1) return 0;
            if(p == 'B') return 2;
        }
    }

//    std::cout << game << '\n';
//    std::cout << x << ' ' <<  y << ": " << as << ' ' << bs << '\n';
    return 0;
}

void solve() {
    int n;
    std::string game;

    std::cin >> n >> game;

    if(game.length() == 1) {
        std::cout << game[0] << '\n';
        return;
    }

    int a = std::count(game.begin(), game.end(), 'A');
    int b = std::count(game.begin(), game.end(), 'B');

    int winner = -1;
    for(int x = 1; x <= a; ++x) {
        int y = a / x;
        if(x * y != a) continue;
        int result = play(game, x, y);
//        std::cout << x << ' ' << y << ": " << result << std::endl;
        if(winner == -1 && result == 1) winner = result;
    }
    for(int x = 1; x <= b; ++x) {
        int y = b / x;
        if(x * y != b) continue;
        int result = play(game, x, y);
//        std::cout << x << ' ' << y << ": " << result << std::endl;
        if(winner == -1 && result == 2) winner = result;
        if(winner != -1 && result == 2 && result != winner) {
//            std::cout << "!B" << winner << ' ' << result << '\n';
            std::cout << "?" << '\n';
            return;
        }
    }

    if(winner == 1) {
        std::cout << "A" << '\n';
    } else if(winner == 2) {
        std::cout << "B" << '\n';
    } else {
        std::cout << "?" << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}