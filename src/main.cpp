#include <iostream>
#include <cpr/cpr.h>

using std::cout;
using std::endl;

int main() {
    cout << "TradeTablo was started:" << endl;

    cpr::Response r = cpr::Get(cpr::Url{"https://httpbin.org/get"}, cpr::VerifySsl{false});

    cout << "status: " << r.status_code << endl;
    cout << "content-type: " << r.header["content-type"] << endl;
    cout << "test: " << r.text << endl;

    return 0;
}
