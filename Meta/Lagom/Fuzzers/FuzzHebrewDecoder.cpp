/*
 * Copyright (c) 2021, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <AK/DeprecatedString.h>
#include <LibTextCodec/Decoder.h>
#include <stddef.h>
#include <stdint.h>

extern "C" int LLVMFuzzerTestOneInput(uint8_t const* data, size_t size)
{
    auto* decoder = TextCodec::decoder_for("windows-1255");
    VERIFY(decoder);
    decoder->to_utf8({ data, size });
    return 0;
}
