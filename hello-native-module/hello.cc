#include <napi.h>

Napi::String Hello(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();

    return Napi::String::New(env, "Hello, I am native extention");
}

Napi::Object init(Napi::Env env, Napi::Object exports) {
    exports.Set(Napi::String::New(env, "Hello"), Napi::Function::New(env, Hello));
    return exports;
}

NODE_API_MODULE(hello, init);