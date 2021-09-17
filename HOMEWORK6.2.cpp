#include <iostream>

using namespace std;

template<typename CharT, typename Traits >
basic_ostream<CharT, Traits>& endll(basic_ostream<CharT, Traits>& os)
{
    os.put(os.widen('\n'));
    os.put(os.widen('\n'));
    os.flush();

    return os;
}

int main()
{
    cout << "Red" << endll;
    cout << "Blue";
    return 0;
}