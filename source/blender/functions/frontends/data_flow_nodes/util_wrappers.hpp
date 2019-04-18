#pragma once

#include "BLI_listbase_wrapper.hpp"
#include "BLI_small_vector.hpp"

struct bNode;
struct bNodeLink;
struct bNodeSocket;

namespace FN {
namespace DataFlowNodes {

using bNodeList = ListBaseWrapper<struct bNode, true>;
using bLinkList = ListBaseWrapper<struct bNodeLink, true>;
using bSocketList = ListBaseWrapper<struct bNodeSocket, true>;
using BSockets = SmallVector<struct bNodeSocket *>;
using BNodes = SmallVector<struct bNode *>;

}  // namespace DataFlowNodes
}  // namespace FN