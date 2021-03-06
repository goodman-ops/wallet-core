// Copyright © 2017-2020 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "TWBase.h"
#include "TWData.h"
#include "TWString.h"

TW_EXTERN_C_BEGIN

struct TWPublicKey;

/// Represents a Solana address.
TW_EXPORT_CLASS
struct TWSolanaAddress;

/// Compares two addresses for equality.
TW_EXPORT_STATIC_METHOD
bool TWSolanaAddressEqual(struct TWSolanaAddress *_Nonnull lhs, struct TWSolanaAddress *_Nonnull rhs);

/// Determines if the string is a valid address.
TW_EXPORT_STATIC_METHOD
bool TWSolanaAddressIsValidString(TWString *_Nonnull string);

/// Creates an address from a string representaion.
TW_EXPORT_STATIC_METHOD
struct TWSolanaAddress *_Nullable TWSolanaAddressCreateWithString(TWString *_Nonnull string);

/// Creates an address from a public key.
TW_EXPORT_STATIC_METHOD
struct TWSolanaAddress *_Nonnull TWSolanaAddressCreateWithPublicKey(struct TWPublicKey *_Nonnull publicKey);

TW_EXPORT_METHOD
void TWSolanaAddressDelete(struct TWSolanaAddress *_Nonnull address);

/// Returns the address string representation.
TW_EXPORT_PROPERTY
TWString *_Nonnull TWSolanaAddressDescription(struct TWSolanaAddress *_Nonnull address);

TW_EXTERN_C_END
