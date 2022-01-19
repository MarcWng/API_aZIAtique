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
    class Request {
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

                std::shared_ptr<AModule> from;
            };

            Owner owner;
            Context context;
            __ModuleRequest module;

            void send(const std::shared_ptr<Respond> &_resp);
            void error(Result _res);

            [[nodiscard]] Result getState() const;
            [[nodiscard]] Result wait(std::shared_ptr<Respond> &_resp);

            void reset();

        private:
            bool m_done = false;
            Result m_res;
            std::shared_ptr<Respond> m_resp;
    };
}

#endif /* !REQUEST_HPP_ */
