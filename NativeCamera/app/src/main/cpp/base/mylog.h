//
// Created by loovee on 2018/10/30.
//

#ifndef ANDPROJ_MYLOG_H
#define ANDPROJ_MYLOG_H
#include <android/log.h>

#ifndef AND_TAG
#define AND_TAG "AndLog"
#endif

#define AND_DEBUG 1
#if AND_DEBUG
#define LogV(...)  __android_log_print(ANDROID_LOG_VERBOSE, AND_TAG, __VA_ARGS__)
#else
#define LogV(...)  0
#endif

#define LogD(...)  __android_log_print(ANDROID_LOG_DEBUG, AND_TAG, __VA_ARGS__)
#define Logi(...)  __android_log_print(ANDROID_LOG_INFO, AND_TAG, __VA_ARGS__)
#define LogW(...)  __android_log_print(ANDROID_LOG_WARN, AND_TAG, __VA_ARGS__)
#define LogE(...)  __android_log_print(ANDROID_LOG_ERROR, AND_TAG, __VA_ARGS__)
#define LogF(...)  __android_log_print(ANDROID_LOG_FATAL, AND_TAG, __VA_ARGS__)

#endif //ANDPROJ_MYLOG_H
