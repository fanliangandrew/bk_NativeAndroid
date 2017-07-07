#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>
//#include <log-lib>

extern "C"
jstring
Java_com_example_zasx_1fanliang_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from opencv demo";
    return env->NewStringUTF(hello.c_str());
//    LOGI("OpenCV version: %s", CV_VERSION);

}
