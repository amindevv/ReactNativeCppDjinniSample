// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from StringMessage.djinni

#pragma once

#include <memory>
#include <string>

namespace stringmessage {

class StringMessage {
public:
    virtual ~StringMessage() {}

    static std::shared_ptr<StringMessage> create();

    virtual std::string get_string_message() = 0;
};

}  // namespace stringmessage
