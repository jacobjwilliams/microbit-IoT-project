#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 12 // UTC month 1-12
#define YOTTA_BUILD_DAY 20 // UTC day 1-31
#define YOTTA_BUILD_HOUR 13 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 21 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 15 // UTC second 0-61
#define YOTTA_BUILD_UUID 3747aa64-5241-4c2e-9443-6923f1cb6fd7 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID 79ac323b04cbe6f3f83cffe0c96365b1a535ec36 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION 79ac323 // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
