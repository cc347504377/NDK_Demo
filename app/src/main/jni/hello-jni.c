#include <string.h>
#include <jni.h>
JNIEXPORT jstring JNICALL
Java_com_example_luoye_layoutdemo_MainActivity_stringFromJNI(JNIEnv *env, jobject instance) {

//    // TODO
//
//
//    return (*env)->NewStringUTF(env, returnValue);
    return (*env)->NewStringUTF(env, "Hello from JNI !");
}