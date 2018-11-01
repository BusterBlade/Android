#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_lion_nativecamera_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}


int JNI_OnLoad(JavaVM *jvm,void *arg){

    JNIEnv *env = 0;
    int ret = jvm->GetEnv((void **) &env, JNI_VERSION_1_6);
    if(ret){

        return JNI_ERR;
    }

    return JNI_VERSION_1_6;
}