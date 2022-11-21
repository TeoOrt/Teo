#ifndef _ASPIFFS_H_
#define _ASPIFFS_H_


#include <stdio.h>
#include <string.h>
#include <sys/unistd.h>
#include <sys/stat.h>
#include "esp_err.h"
#include "esp_log.h"
#include "esp_spiffs.h"
#include "mbedtls/md5.h"
#define TAG "wifi"


void spiffs();

#endif 