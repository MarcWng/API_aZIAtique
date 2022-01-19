/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** Context
*/

#ifndef CONTEXT_HPP_
#define CONTEXT_HPP_

#include <any>
#include <memory>
#include <variant>

#include "Interface/ISocket.hpp"

namespace aZIAt {
    struct Context {
        public:
            enum class Target : uint8_t {
                Module,
                Master,
                Hidden
            };

            std::shared_ptr<ISocket> socket;
            Target target;
            Flag flag;

            std::variant<std::any, ByteArray, MasterRequest> data;
    };
}

#endif /* !CONTEXT_HPP_ */