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

namespace aZIAt {
    class AModule : public std::enable_shared_from_this<AModule> {
        public:
            virtual ~AModule() = default;

            virtual Uuid getUuid() const = 0;
            virtual std::string getName() const = 0;

            virtual void call(std::string &_func, std::any &_data) = 0;
            virtual void call(Flag _flag, ByteArray &_data) = 0;

            virtual std::ostream &operator<<(std::ostream &_os) const;

            virtual operator std::string() const = 0;

        private:
            Uuid m_uuid;
    };
}

#endif /* !MODULE_HPP_ */