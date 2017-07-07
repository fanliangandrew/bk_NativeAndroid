//
// Created by zasx-fanliang on 2017/7/7.
//
#include "com_example_zasx_fanliang_myapplication_MainActivity.h"
#include <string>
#include <opencv2/opencv.hpp>

extern "C" {

JNIEXPORT void JNICALL Java_cn_linjk_jniBridge_OpenCVUtils_img2gray
        (JNIEnv *env , jclass objClass, jstring imgFilePath) {

    LOGI("OpenCV version: %s", CV_VERSION);

}

}

