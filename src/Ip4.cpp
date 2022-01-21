/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** Ip4
*/

#include "Impl/Ip4.hpp"

namespace aZIAt {
    Ip4::Ip4(const std::string &_ip)
        : m_ip(_ip)
    {}

    Ip4::Ip4(uint8_t _byte1, uint8_t _byte2, uint8_t _byte3, uint8_t _byte4)
    {
        m_ip += std::to_string(_byte1) + '.';
        m_ip += std::to_string(_byte2) + '.';
        m_ip += std::to_string(_byte3) + '.';
        m_ip += std::to_string(_byte4);
    }

    std::ostream &Ip4::operator<<(std::ostream &_os) const
    {
        _os << m_ip;
        return _os;
    }
}