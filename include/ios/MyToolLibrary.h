#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MyToolObjC : NSObject

- (NSString*)version;

- (int)getMathAddResult:(int)x y:(int)y;

- (int)getMathSubResult:(int)x y:(int)y;

@end