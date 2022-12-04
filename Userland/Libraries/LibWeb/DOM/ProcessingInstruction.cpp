/*
 * Copyright (c) 2021, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/DOM/ProcessingInstruction.h>
#include <LibWeb/Layout/TextNode.h>

namespace Web::DOM {

ProcessingInstruction::ProcessingInstruction(Document& document, DeprecatedString const& data, DeprecatedString const& target)
    : CharacterData(document, NodeType::PROCESSING_INSTRUCTION_NODE, data)
    , m_target(target)
{
}

}
