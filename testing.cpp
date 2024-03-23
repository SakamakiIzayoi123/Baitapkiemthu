#include <iostream>
#include <sstream>

#include "catch_amalgamated.hpp"

using namespace std;

// Hàm main trong main.cpp
void run() {
    int n;
    cin >> n;
    string ans = "YES";
    // Kiểm tra số nguyên tố
    if (n <= 1)
        ans = "NO";
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                ans = "NO";
                break;
            }
        }
    }
    cout << ans;
}

TEST_CASE("Test run() function", "[test]") {
    SECTION("Test case 1: input -12") {
        stringstream input("-12");
        stringstream output;
        streambuf* old_cin = cin.rdbuf(input.rdbuf());
        streambuf* old_cout = cout.rdbuf(output.rdbuf());
        run();  // Gọi hàm run() mà không truyền tham số
        REQUIRE(output.str() == "NO");
        cin.rdbuf(old_cin);    // Khôi phục cin
        cout.rdbuf(old_cout);  // Khôi phục cout
    }

    SECTION("Test case 2: input 3") {
        stringstream input("3");
        stringstream output;
        streambuf* old_cin = cin.rdbuf(input.rdbuf());
        streambuf* old_cout = cout.rdbuf(output.rdbuf());
        run();  // Gọi hàm run() mà không truyền tham số
        REQUIRE(output.str() == "YES");
        cin.rdbuf(old_cin);    // Khôi phục cin
        cout.rdbuf(old_cout);  // Khôi phục cout
    }

    SECTION("Test case 3: input 6") {
        stringstream input("6");
        stringstream output;
        streambuf* old_cin = cin.rdbuf(input.rdbuf());
        streambuf* old_cout = cout.rdbuf(output.rdbuf());
        run();  // Gọi hàm run() mà không truyền tham số
        REQUIRE(output.str() == "NO");
        cin.rdbuf(old_cin);    // Khôi phục cin
        cout.rdbuf(old_cout);  // Khôi phục cout
    }

    SECTION("Test case 4: input 7") {
        stringstream input("7");
        stringstream output;
        streambuf* old_cin = cin.rdbuf(input.rdbuf());
        streambuf* old_cout = cout.rdbuf(output.rdbuf());
        run();  // Gọi hàm run() mà không truyền tham số
        REQUIRE(output.str() == "YES");
        cin.rdbuf(old_cin);    // Khôi phục cin
        cout.rdbuf(old_cout);  // Khôi phục cout
    }
}
