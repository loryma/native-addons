#include <napi.h>
#include <string>
#include "hello.h"

Napi::String greetMethod(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();

    std::string result = helloPerson("Vik");

    return Napi::String::New(env, result);
}

Napi::Object init(Napi::Env env, Napi::Object exports)  {
    exports.Set(
        Napi::String::New(env, "greetMethod"),
        Napi::Function::New(env, greetMethod)
    );

    return exports;
}

NODE_ENV_MODULE(greetModule, init);