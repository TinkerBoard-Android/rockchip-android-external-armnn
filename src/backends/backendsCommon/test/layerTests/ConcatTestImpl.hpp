//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include "LayerTestResult.hpp"

#include <ResolveType.hpp>
#include <Half.hpp>

#include <backendsCommon/IBackendInternal.hpp>
#include <backendsCommon/WorkloadFactory.hpp>

template<armnn::DataType ArmnnType, typename T = armnn::ResolveType<ArmnnType>>
LayerTestResult<T, 3> ConcatDifferentInputOutputQParamTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    bool useSubtensor);

LayerTestResult<float, 3> ConcatTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<armnn::Half, 3> ConcatFloat16Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 3> ConcatUint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint16_t, 3> ConcatUint16Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 3> ConcatUint8DifferentQParamsTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 1> Concat1dTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 2> Concat2dDim0Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 2> Concat2dDim1Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 2> Concat2dDim0DiffInputDimsTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 2> Concat2dDim1DiffInputDimsTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 3> Concat3dDim0Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 3> Concat3dDim1Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 3> Concat3dDim2Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    bool useSubtensor);

LayerTestResult<float, 3> Concat3dDim0DiffInputDimsTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 3> Concat3dDim1DiffInputDimsTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 3> Concat3dDim2DiffInputDimsTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    bool useSubtensor);

LayerTestResult<float, 4> Concat4dDim0Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 4> Concat4dDim1Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 4> Concat4dDim2Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 4> Concat4dDim3Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    bool useSubtensor);

LayerTestResult<float, 4> Concat4dDiffShapeDim0Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 4> Concat4dDiffShapeDim1Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 4> Concat4dDiffShapeDim2Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<float, 4> Concat4dDiffShapeDim3Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    bool useSubtensor);

LayerTestResult<uint8_t, 4> Concat4dDim0Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 4> Concat4dDim1Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 4> Concat4dDim2Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 4> Concat4dDim3Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    bool useSubtensor);

LayerTestResult<uint8_t, 4> Concat4dDiffShapeDim0Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 4> Concat4dDiffShapeDim1Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 4> Concat4dDiffShapeDim2Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 4> Concat4dDiffShapeDim3Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    bool useSubtensor);

LayerTestResult<uint8_t, 1> Concat1dUint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 2> Concat2dDim0Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 2> Concat2dDim1Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 2> Concat2dDim0DiffInputDimsUint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 2> Concat2dDim1DiffInputDimsUint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 3> Concat3dDim0Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 3> Concat3dDim1Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 3> Concat3dDim2Uint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    bool useSubtensor);

LayerTestResult<uint8_t, 3> Concat3dDim0DiffInputDimsUint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 3> Concat3dDim1DiffInputDimsUint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager);

LayerTestResult<uint8_t, 3> Concat3dDim2DiffInputDimsUint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    bool useSubtensor);

LayerTestResult<uint8_t, 3> ConcatDifferentInputOutputQParamUint8Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    bool useSubtensor);

LayerTestResult<int16_t, 3> ConcatDifferentInputOutputQParamInt16Test(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    bool useSubtensor);
