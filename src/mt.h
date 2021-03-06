
/* 
 * Lamb Gateway Platform
 * Copyright (C) 2017 typefo <typefo@qq.com>
 */

#ifndef _LAMB_MT_H
#define _LAMB_MT_H

#include <stdbool.h>
#include <pthread.h>

typedef struct {
    int id;
    bool debug;
    char listen[16];
    int port;
    long long timeout;
    char ac[128];
    char logfile[128];
} lamb_config_t;

void lamb_event_loop(void);
void *lamb_push_loop(void *arg);
void *lamb_pull_loop(void *arg);
int lamb_child_server(int *sock, const char *listen, unsigned short *port, int protocol);
void *lamb_stat_loop(void *arg);
int lamb_read_config(lamb_config_t *conf, const char *file);

#endif
