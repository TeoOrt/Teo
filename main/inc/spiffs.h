#ifndef _SPIFFS_H
#define _SPIFFS_H


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


#endif _SPIFFS_H