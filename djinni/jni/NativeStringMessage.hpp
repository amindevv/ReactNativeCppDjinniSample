// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from StringMessage.djinni

#pragma once

#include "djinni_support.hpp"
#include "string_message.hpp"

namespace djinni_generated {

class NativeStringMessage final : ::djinni::JniInterface<::stringmessage::StringMessage, NativeStringMessage> {
public:
    using CppType = std::shared_ptr<::stringmessage::StringMessage>;
    using CppOptType = std::shared_ptr<::stringmessage::StringMessage>;
    using JniType = jobject;

    using Boxed = NativeStringMessage;

    ~NativeStringMessage();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeStringMessage>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeStringMessage>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeStringMessage();
    friend ::djinni::JniClass<NativeStringMessage>;
    friend ::djinni::JniInterface<::stringmessage::StringMessage, NativeStringMessage>;

};

}  // namespace djinni_generated
