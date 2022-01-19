/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** Respond
*/

#include "Impl/Respond.hpp"

namespace aZIAt {
    Respond::Respond(const Respond &_resp)
    {
        std::memcpy(this, &_resp, sizeof(Respond));
    }
}