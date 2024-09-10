#  IOS package for using Xray core on client side

Framework source code in  [Mobile wrapper XrayCore](https://github.com/lestar348/xray-core-mobile-wrapper)

### Usage

```swift
import XRayCoreIOSWrapper


// Set assets direcory if need (this directory can include geosite.dat, geoip.dat or other files, witch satisfies the established xray format)
XRaySetAssetsDirectory(AppConstant.assetDirectoryPath)

// let data = ... 

// Create error instanse
var error: NSError? = nil

// Start xray core
XRayStartXray(data, self, &error)

// Check errors
try error.flatMap { throw $0 }
```
