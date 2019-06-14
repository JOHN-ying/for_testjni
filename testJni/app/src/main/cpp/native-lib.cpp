#include <jni.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;
extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_testjni_MainActivity_stringFromJNI(JNIEnv *env,jobject /* this */) {

    std::string dnk = "I am ok ,please take of youself!!!";

    return env->NewStringUTF(dnk.c_str());

}

