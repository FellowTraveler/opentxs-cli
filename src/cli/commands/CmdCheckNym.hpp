// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef OPENTXS_CLIENT_CMDCHECKNYM_HPP
#define OPENTXS_CLIENT_CMDCHECKNYM_HPP

#include "CmdBase.hpp"

namespace opentxs
{

class CmdCheckNym : public CmdBase
{
public:
    EXPORT CmdCheckNym();
    virtual ~CmdCheckNym();

    EXPORT int32_t
        run(std::string server, std::string mynym, std::string hisnym);

protected:
    std::int32_t runWithOptions() override;
};

} // namespace opentxs

#endif // OPENTXS_CLIENT_CMDCHECKNYM_HPP
