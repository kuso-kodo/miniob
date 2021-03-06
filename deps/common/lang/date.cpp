#include "common/lang/date.h"
namespace common {
  bool check_date(const char *date) {
    int y = 0, m = 0, d = 0;
    auto count = sscanf(date, "%d-%d-%d", &y, &m, &d);
    if (count != 3 || y < 1970 || y > 2038 || m < 1 || d < 1 || m > 12) {
      return false;
    }
    bool isRunYear = (y % 4 == 0);
    int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2) {
      return isRunYear ? (d <= 29) : (d <= 28);
    } else {
      return d <= day[m - 1];
    }
  }

  uint32_t str_to_date(const char *date) {
    int y, m, d;
    sscanf(date, "%d-%d-%d", &y, &m, &d);
    uint32_t timestamp = y << 16 | m << 8 | d;
    return timestamp;
  }
}// namespace common