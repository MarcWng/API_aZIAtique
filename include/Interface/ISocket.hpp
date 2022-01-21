/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** ISocket
*/

#ifndef ISOCKET_HPP_
#define ISOCKET_HPP_

#include "Impl/Common.hpp"
#include "Impl/Ip4.hpp"

namespace aZIAt {
    class AZIAT_SHARED_API ISocket {
        public:
            enum class Status {
                Done,
                Disconnect,
                Error
            };

            virtual Status send(ByteArray &_data) = 0;

            virtual Ip4 getIp() const = 0;
            virtual Port getPort() const = 0;
    };
}

#endif /* !ISOCKET_HPP_ */