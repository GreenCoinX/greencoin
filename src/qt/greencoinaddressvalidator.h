// Copyright (c) 2011-2014 The GreenCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GREENCOIN_QT_GREENCOINADDRESSVALIDATOR_H
#define GREENCOIN_QT_GREENCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class GreenCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit GreenCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** GreenCoin address widget validator, checks for a valid greencoin address.
 */
class GreenCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit GreenCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // GREENCOIN_QT_GREENCOINADDRESSVALIDATOR_H
