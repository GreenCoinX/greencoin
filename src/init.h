// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The GreenCoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GREENCOIN_INIT_H
#define GREENCOIN_INIT_H

#include <string>

class CWallet;

namespace boost
{
class thread_group;
} // namespace boost

extern CWallet* pwalletMain;

void StartShutdown();
bool ShutdownRequested();
void Shutdown();
bool AppInit2(boost::thread_group& threadGroup);

/** The help message mode determines what help message to show */
enum HelpMessageMode {
    HMM_GREENCOIND,
    HMM_GREENCOIN_QT
};

/** Help for options shared between UI and daemon (for -help) */
std::string HelpMessage(HelpMessageMode mode);
/** Returns licensing information (for -version) */
std::string LicenseInfo();

#endif // GREENCOIN_INIT_H
