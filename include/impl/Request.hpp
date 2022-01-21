/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** Request
*/

#ifndef REQUEST_HPP_
#define REQUEST_HPP_

#include <string>

#include "Impl/Context.hpp"
#include "Impl/Respond.hpp"

namespace aZIAt {
    class AZIAT_SHARED_API Request {
        public:
            enum class Owner : uint8_t {
                Master,
                Module
            };

            struct __ModuleRequest {
                struct __TargetHidden {
                    Uuid uuid;
                    std::string func;
                };

                __TargetHidden hidden;
                std::shared_ptr<AModule> from;
            };

            Owner owner;
            Context context;
            __ModuleRequest module;

            void send(const Respond &_resp);
            void error(Result _res);

            [[nodiscard]] Result getState() const;
            [[nodiscard]] Result wait(Respond &_resp);

            void reset();

        private:
            bool m_done = false;
            Result m_res;
            Respond m_resp;
    };
}

#endif /* !REQUEST_HPP_ */
