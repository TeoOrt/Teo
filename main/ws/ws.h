#ifndef _WS_H_
#define _WS_H_

#include <esp_wifi.h>
#include <esp_event.h>
#include <esp_log.h>
#include <esp_system.h>
#include <nvs_flash.h>
#include <sys/param.h>
#include "esp_netif.h"
#include "esp_eth.h"

#include <esp_http_server.h>





typedef struct {
    httpd_handle_t hd;
    int fd;
} async_resp_arg ;


static void ws_async_send(void *arg);
static esp_err_t trigger_async_send(httpd_handle_t handle, httpd_req_t *req);
static esp_err_t echo_handler(httpd_req_t *req);
static httpd_handle_t start_webserver(void);

static esp_err_t stop_webserver(httpd_handle_t server);


static void disconnect_handler(void* arg, esp_event_base_t event_base,int32_t event_id, void* event_data);

static void connect_handler(void* arg, esp_event_base_t event_base,int32_t event_id, void* event_data);

#endif