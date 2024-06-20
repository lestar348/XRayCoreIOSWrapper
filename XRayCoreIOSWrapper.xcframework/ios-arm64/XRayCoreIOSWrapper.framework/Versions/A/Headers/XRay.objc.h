// Objective-C API for talking to github.com/lestar348/xray-core-mobile-wrapper Go package.
//   gobind -lang=objc github.com/lestar348/xray-core-mobile-wrapper
//
// File is generated by gobind. Do not edit.

#ifndef __XRay_H__
#define __XRay_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@protocol XRayLogger;
@class XRayLogger;

@protocol XRayLogger <NSObject>
- (void)logInput:(NSString* _Nullable)s;
@end

/**
 * / Real ping
 */
FOUNDATION_EXPORT BOOL XRayMeasureOutboundDelay(NSData* _Nullable config, NSString* _Nullable url, int64_t* _Nullable ret0_, NSError* _Nullable* _Nullable error);

/**
 * Ser AssetsDirectory in Xray env
 */
FOUNDATION_EXPORT void XRaySetAssetsDirectory(NSString* _Nullable path);

FOUNDATION_EXPORT void XRaySetMemoryLimit(void);

/**
 * [key] can be:
PluginLocation  = "xray.location.plugin"
ConfigLocation  = "xray.location.config"
ConfdirLocation = "xray.location.confdir"
ToolLocation    = "xray.location.tool"
AssetLocation   = "xray.location.asset"
UseReadV         = "xray.buf.readv"
UseFreedomSplice = "xray.buf.splice"
UseVmessPadding  = "xray.vmess.padding"
UseCone          = "xray.cone.disabled"
BufferSize           = "xray.ray.buffer.size"
BrowserDialerAddress = "xray.browser.dialer"
XUDPLog              = "xray.xudp.show"
XUDPBaseKey          = "xray.xudp.basekey"
 */
FOUNDATION_EXPORT void XRaySetXrayEnv(NSString* _Nullable key, NSString* _Nullable path);

FOUNDATION_EXPORT BOOL XRayStartXray(NSData* _Nullable config, id<XRayLogger> _Nullable logger, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT void XRayStopXray(void);

@class XRayLogger;

@interface XRayLogger : NSObject <goSeqRefInterface, XRayLogger> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (void)logInput:(NSString* _Nullable)s;
@end

#endif
