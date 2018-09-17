/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <yunit.h>
#include <yts.h>
#include <stdio.h>
#include "ali_crypto.h"
#include "aos/aos.h"

extern void ali_crypto_test_entry(void);

static int init(void)
{
    return 0;
}

static int cleanup(void)
{
    return 0;
}

static void setup(void)
{

}

static void teardown(void)
{

}

#if 0
static void ali_crypto_test(void)
{
    return;
}
#endif

static yunit_test_case_t aos_alicrypto_testcases[] = {
<<<<<<< HEAD
    //{ "alicrypto_test", ali_crypto_test},
    { "alicrypto_test", ali_crypto_test_entry},
=======
//    {"alicrypto_test", ali_crypto_test},
    {"alicrypto_test", ali_crypto_test_entry},
>>>>>>> b2c6d429c... [#16291090] reconstruct local include files in alicrypto
    YUNIT_TEST_CASE_NULL
};

/* Note that if AES tests fail, please try to increase stack to 4096 bit. */

static yunit_test_suite_t suites[] = {
    { "alicrypto", init, cleanup, setup, teardown, aos_alicrypto_testcases },
    YUNIT_TEST_SUITE_NULL
};

void test_alicrypto(void)
{
    yunit_add_test_suites(suites);
}
AOS_TESTCASE(test_alicrypto);
