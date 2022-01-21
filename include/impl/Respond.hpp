/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** Respond
*/

#ifndef RESPOND_HPP_
#define RESPOND_HPP_

#include <variant>

#include "Abstract/AModule.hpp"
#include "Impl/Common.hpp"

namespace aZIAt {
    class AZIAT_SHARED_API Respond {
        public:
            Respond() = default;
            Respond(const Respond &_resp);

            enum class AZIAT_SHARED_API Owner : uint8_t {
                Master,
                Module,
                Hidden
            };

            struct AZIAT_SHARED_API MasterRespond {
                MasterRequest request;

                std::variant<std::vector<std::shared_ptr<AModule>>,
                    ByteArray> data;
            };

            Owner owner;

            std::variant<MasterRespond, ByteArray, std::any> result;
    };
}

#endif /* !RESPOND_HPP_ */