/*
** EPITECH PROJECT, 2022
** B-YEP-500-PAR-5-1-zia-marc.wang
** File description:
** Request
*/

#include "Impl/Request.hpp"

namespace aZIAt {
    void Request::send(const Respond &_resp)
    {
        m_res = Result::Done;
        m_resp = std::move(_resp);
        m_done = true;
    }

    void Request::error(Result _res)
    {
        m_res = _res;
        m_done = true;
    }

    Result Request::getState() const
    {
        return m_res;
    }

    Result Request::wait(Respond &_resp)
    {
        _resp = m_resp;
        return m_res;
    }

    void Request::reset()
    {
        m_res = Result::Traitement;
        m_done = false;
    }
}