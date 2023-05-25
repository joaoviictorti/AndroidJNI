#include <jni.h>
#include <fstream>

extern "C" JNIEXPORT jboolean JNICALL
Java_br_viictorjj_androidjni_MainActivity_checkFileExists(JNIEnv* env, jobject obj)
{
    const char* arrayroot[] = {
            "/system/app/Superuser.apk",
            "/sbin/su",
            "/system/bin/su",
            "/system/xbin/su",
            "/data/local/xbin/su",
            "/data/local/bin/su",
            "/system/sd/xbin/su",
            "/system/bin/failsafe/su",
            "/data/local/su",
            "/su/bin/su"
    };

    jbooleanArray resultArray = env->NewBooleanArray(sizeof(arrayroot) / sizeof(arrayroot[0]));

    for (int i = 0; i < sizeof(arrayroot) / sizeof(arrayroot[0]); ++i) {
        std::ifstream file(arrayroot[i]);
        jboolean exists = file.is_open();
        if(exists) {
            return true;
        }
    }
    return false;

}