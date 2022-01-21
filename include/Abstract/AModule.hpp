/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** Module
*/

#ifndef MODULE_HPP_
#define MODULE_HPP_

#include <any>
#include <iostream>
#include <memory>

#include "Impl/Common.hpp"
#include "Interface/IQueue.hpp"

namespace aZIAt {
    class AZIAT_SHARED_API AModule : public std::enable_shared_from_this<AModule> {
        public:
            virtual ~AModule() = default;

            [[nodiscard]] virtual Uuid getUuid() const = 0;

            virtual void call(Request &_request, ReqQueue &_queue) = 0;

            virtual std::ostream &operator<<(std::ostream &_os) const;

            virtual operator std::string() const = 0;

        protected:
            Uuid m_uuid;
            Flag m_flag;
    };
}

#endif /* !MODULE_HPP_ */