#import <Foundation/Foundation.h>

#import "SpectacleMacros.h"

@class NSScreen;

@interface SpectacleScreenDetectionResult : NSObject

@property (nonatomic, readonly) NSScreen *sourceScreen;
@property (nonatomic, readonly) NSScreen *destinationScreen;

- (instancetype)initWithSourceScreen:(NSScreen *)sourceScreen
                   destinationScreen:(NSScreen *)destinationScreen NS_DESIGNATED_INITIALIZER;

+ (instancetype)resultWithSourceScreen:(NSScreen *)sourceScreen
                     destinationScreen:(NSScreen *)destinationScreen;

SPECTACLE_INIT_AND_NEW_UNAVAILABLE

@end
