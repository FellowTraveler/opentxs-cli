// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef OPENTXS_CLIENT_CMDACCEPTINVOICES_HPP
#define OPENTXS_CLIENT_CMDACCEPTINVOICES_HPP

#include "CmdBaseAccept.hpp"

#include <string>

namespace opentxs
{
class CmdAcceptInvoices : public CmdBaseAccept
{
public:
    EXPORT CmdAcceptInvoices();
    virtual ~CmdAcceptInvoices();

    EXPORT std::int32_t run(std::string server,
                            std::string myacct,
                            std::string indices);

protected:
    virtual std::int32_t runWithOptions();
};
} // namespace opentxs
#endif // OPENTXS_CLIENT_CMDACCEPTINVOICES_HPP
