//
// pch.cpp
//

//#include "pch.h"
#include <iostream>
#include <nan.h>

using namespace v8;

NAN_METHOD(hello) {
    std::cout << "Hello World" << std::endl;
}

NAN_MODULE_INIT(init) {
    Nan::SetMethod(target, "hello", hello);
}

NODE_MODULE(hello, init);