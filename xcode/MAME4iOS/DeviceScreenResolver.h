//
//  DeviceScreenResolver.h
//  MAME4iOS
//
//  Created by Yoshi Sugawara on 10/4/18.
//  Copyright © 2018 Seleuco. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, DeviceScreenType) {
    IPHONE_4_OR_LESS,
    IPHONE_5,
    IPHONE_6_7_8,
    IPHONE_6_7_8_PLUS,
    IPHONE_X_XS,
    IPHONE_XR_XS_MAX,
    IPAD,
    IPAD_PRO_10_5,
    IPAD_PRO_12_9
};

@interface DeviceScreenResolver : NSObject
+(DeviceScreenType) resolve;
@end

NS_ASSUME_NONNULL_END
