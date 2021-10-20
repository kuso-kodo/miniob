#ifndef __COMMON_LANG_DATE_H__
#define __COMMON_LANG_DATE_H__
#include <stdio.h>
#include <stdint.h>
namespace common {
    bool check_date(const char *date);
    uint32_t str_to_date(const char *date);
}
#endif