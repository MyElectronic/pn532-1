#ifndef __UNITY_TESTS_H__
#include "unit-tests/unity-tests.h"
#endif

int main(void)
{
    UnityBegin("main.c");

    RUN_TEST(creates_command_frame);
    RUN_TEST(computes_data_checksum);
    RUN_TEST(computes_int_checksum);
    RUN_TEST(creates_get_version_frame);

    RUN_TEST(gets_version);

    return UnityEnd();
}
