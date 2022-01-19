/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** Ip4
*/

#ifndef IP4_HPP_
#define IP4_HPP_

#include <iostream>
#include <string>

#include <cstdint>

namespace aZIAt {
    using Port = uint16_t;

    class Ip4 {
        public:
            Ip4(const std::string &_ip);
            Ip4(uint8_t _byte1, uint8_t _byte2, uint8_t _byte3, uint8_t _byte4);

            std::ostream &operator<<(std::ostream &_os) const;

        private:
            std::string m_ip;
    };
}

#endif /* !IP4_HPP_ */