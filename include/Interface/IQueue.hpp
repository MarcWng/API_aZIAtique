/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** Queue
*/

#ifndef QUEUE_HPP_
#define QUEUE_HPP_

#include <memory>

#include "Export.hpp"

namespace aZIAt {
    template<class T>
    class AZIAT_SHARED_API IQueue {
        public:
            virtual void push(const T &_data) = 0;

            [[nodiscard]] virtual std::size_t size() const = 0;
            [[nodiscard]] virtual bool empty() const = 0;
    };

    class Request;

    using ReqQueue = std::shared_ptr<IQueue<Request>>;
}

#endif /* !QUEUE_HPP_ */