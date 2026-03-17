#include "top_it_vector.hpp"


bool testDefaultVector() {
    Vector< int > v;
    bool c = v.isEmpty();
    return c;
}

int main() {
    using test_t = bool(*)();
    using pair_t = std::pair< const char*, test_t >;
    pair_t tests[] = {
        {"Default vector is empty", testDefaultVector}
    };
    const size_t coount = sizeof(tests) / sizeof(pair_t);
    std:: //шо то надо
    for (size_t i = 0; i < count; ++i) {
        bool res = tests[i].second();
        std::cout << tests[i].first << ": " << res << "\n"
    }
}