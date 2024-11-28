﻿// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

// THIS FILE IS AUTOMATICALLY GENERATED; DO NOT EDIT IT

// INPUT FILE: dev\common\TerminalVelocityFeatures-CameraCaptureUI.xml
// OPTIONS: -Channel Experimental -Language C++ -Namespace Microsoft.Windows.Media.Capture -Path dev\common\TerminalVelocityFeatures-CameraCaptureUI.xml -Output dev\common\TerminalVelocityFeatures-CameraCaptureUI.h

#if defined(__midlrt)
namespace features
{
    feature_name Feature_CameraCaptureUI = { DisabledByDefault, FALSE };
}
#endif // defined(__midlrt)

// Feature constants
#define WINDOWSAPPRUNTIME_MICROSOFT_WINDOWS_MEDIA_CAPTURE_FEATURE_CAMERACAPTUREUI_ENABLED 1

#if defined(__cplusplus)

namespace Microsoft::Windows::Media::Capture
{

__pragma(detect_mismatch("ODR_violation_WINDOWSAPPRUNTIME_MICROSOFT_WINDOWS_MEDIA_CAPTURE_FEATURE_CAMERACAPTUREUI_ENABLED_mismatch", "AlwaysEnabled"))
struct Feature_CameraCaptureUI
{
    static constexpr bool IsEnabled() { return WINDOWSAPPRUNTIME_MICROSOFT_WINDOWS_MEDIA_CAPTURE_FEATURE_CAMERACAPTUREUI_ENABLED == 1; }
};

} // namespace Microsoft.Windows.Media.Capture

#endif // defined(__cplusplus)
