// Tencent is pleased to support the open source community by making TNN available.
//
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#include "tnn/network/tensorrt/layer_builder/tensorrt_plugin_layer_builder.h"

namespace TNN_NS {

DECLARE_TENSORRT_PLUGIN_LAYER_BUILDER(Shuffle, LAYER_SHUFFLE_CHANNEL);

bool ShuffleTRTPluginLayerBuilder::supportsFormat(nvinfer1::DataType type, PluginFormat format) const {
    if (type == nvinfer1::DataType::kFLOAT) {
        return true;
    }
    return false;
}

ILayer* ShuffleTRTPluginLayerBuilder::AddToNetwork(INetworkDefinition* network) {
    return TensorRTPluginLayerBuilder::AddToNetwork(network);
}

REGISTER_TENSORRT_PLUGIN_LAYER_BUILDER(Shuffle, LAYER_SHUFFLE_CHANNEL);

}  //  namespace TNN_NS