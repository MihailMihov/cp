#include <iostream>
#include <deque>
#include <vector>
#include <iterator>
#include <unordered_set>

int sum_of_squares_of_digits(int n) {
    int sum = 0;
    while(n) {
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;
}

void solve_test_case() {
    int a, v, n;
    std::cin >> a >> v >> n;

    std::unordered_set<int> values = { a };
    std::deque<int> seq = { a };
    do {
        int next = sum_of_squares_of_digits(seq.back());
        seq.emplace_back(next);
        if(values.count(next) != 0) break;
        values.insert(next);
    } while(true);

    std::vector<int> before_seq;
    while (seq.front() != seq.back()) {
        before_seq.emplace_back(seq.front());
        seq.pop_front();
    }
    seq.pop_back();

//    std::copy(before_seq.begin(), before_seq.end(), std::ostream_iterator<int>(std::cout, " "));
//    std::cout << '\n';
//    std::copy(seq.begin(), seq.end(), std::ostream_iterator<int>(std::cout, " "));
//    std::cout << '\n';

    int result = 0;
    int repetitions = (n - before_seq.size()) / seq.size();
    for(int i : seq)
        if(i == v) result++;
    result *= repetitions;

    for(int i : before_seq)
        if(i == v) result++;

    int remaining = n - before_seq.size() - repetitions * seq.size();
    for (int i = 0; i < remaining; ++i) {
        if(seq[i] == v) result++;
    }
    std::cout << result << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);

    int t;
    std::cin >> t;

    while(t--) solve_test_case();

    return 0;
}