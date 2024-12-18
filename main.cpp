#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll log10(ll x) {
  ll ret = 0;
  while (x > 0) {
    x /= 10;
    ++ret;
  }

  return ret;
}

ll pow10(ll b) {
  ll ret = 1;
  while (b > 0) {
    ret *= 10;
    --b;
  }

  return ret;
}

ll T, N;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> T;
  while (0 < (T--)) {
    cin >> N;

    const auto& q = N * N;
    const auto& base = pow10(log10(N));
    const auto& right = q % base;

    if (right == N) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}