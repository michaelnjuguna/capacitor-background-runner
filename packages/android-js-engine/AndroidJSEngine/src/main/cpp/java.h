#ifndef ANDROID_JS_ENGINE_JAVA_H
#define ANDROID_JS_ENGINE_JAVA_H

#include <jni.h>

class Java {
public:
    JavaVM *vm;

    jclass web_api_class;
    jclass native_js_response_class;
    jclass native_js_fetch_options_class;

    jmethodID web_api_fetch_method;
    jmethodID web_api_byteArrayToString_method;
    jmethodID web_api_stringToByteArray_method;
    jmethodID web_api_randomHashCode_method;
    jmethodID web_api_cryptoRandomUUID_method;
    jmethodID web_api_cryptoGetRandom_method;
    jmethodID native_js_fetch_options_constructor;

    jfieldID native_js_response_ok_field;
    jfieldID native_js_response_status_field;
    jfieldID native_js_response_url_field;
    jfieldID native_js_response_data_field;
    jfieldID native_js_response_error_field;

    Java(JNIEnv *env);
    JNIEnv *getEnv();
private:
    void check_exception(JNIEnv *env);
};


#endif //ANDROID_JS_ENGINE_JAVA_H
