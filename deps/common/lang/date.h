#ifndef __COMMON_LANG_DATE_H__
#define __COMMON_LANG_DATE_H__
#include <stdint.h>
#include <stdio.h>
namespace common {
  bool check_date(const char *date);
  uint32_t str_to_date(const char *date);
}// namespace common
#endif