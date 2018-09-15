/*
 * Copyright (C) 2015-2017 Alibaba Group Holding Limited
 */

#include <aos/kv.h>
#include <aos/log.h>


void aos_kv_gc(void *arg)
{  
    LOG("WARNING THIS IS DUMMY KV_SET");
}

int aos_kv_del(const char *key)
{
    LOG("WARNING THIS IS DUMMY KV_SET");
    return 0;
}

int aos_kv_set(const char *key, const void *val, int len, int sync)
{
    LOG("WARNING THIS IS DUMMY KV_SET");
    return 0;
}

int aos_kv_get(const char *key, void *buffer, int *buffer_len)
{
    LOG("WARNING THIS IS DUMMY KV_GET");
    return 0;
}

