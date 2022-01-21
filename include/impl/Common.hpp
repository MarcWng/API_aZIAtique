/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** Common
*/

#ifndef COMMON_HPP_
#define COMMON_HPP_

#include <array>
#include <vector>

#include <cstdint>

#include "Export.hpp"

namespace aZIAt {
    using ByteArray = std::vector<uint8_t>;
    using Flag = uint16_t;
    using Uuid = std::array<char, 34>;

    enum class MasterRequest {
        List,
        Info,
        Load,
        Unload
    };

    enum class Result : uint16_t {
        Traitement,
        FlagError,
        ModuleError,
        ModuleCrash,
        MasterError,
        DoneNR,
        Done
    };
}

#endif /* !COMMON_HPP_ */
