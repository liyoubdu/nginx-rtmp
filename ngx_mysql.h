#ifndef _NGX_MYSQL_H_INCLUDED_
#define _NGX_MYSQL_H_INCLUDED_


#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_event.h>
#include <ngx_event_connect.h>
#include <nginx.h>


typedef struct {
    ngx_str_t ip;
    ngx_int_t port;
    ngx_str_t user;
    ngx_str_t pwd;
    ngx_str_t dbName;
    ngx_int_t connected;
} ngx_mysql_conf_t;

typedef struct {
    int                 sock;
    uint8_t             sequence;
    ngx_pool_t         *pool;
    ngx_int_t           timeout;
    ngx_chain_t        *in;
    ngx_chain_t        *out;
} ngx_mysql_ctx_t;

ngx_int_t ngx_mysql_connect();

#endif /* _NGX_MYSQL_H_INCLUDED_ */
