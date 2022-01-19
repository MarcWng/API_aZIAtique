/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** AModule
*/

#include "Abstract/AModule.hpp"

namespace aZIAt {
    std::ostream &AModule::operator<<(std::ostream &_os) const
    {
        _os << std::string(*this);
        return _os;
    }
}