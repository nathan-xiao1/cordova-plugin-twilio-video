#import <Foundation/Foundation.h>

@interface TwilioVideoConfig : NSObject

@property NSString *primaryColorHex;
@property NSString *secondaryColorHex;
@property BOOL hangUpInApp;
@property BOOL audioOnly;

-(void) parse:(NSDictionary*)config;
+ (UIColor *)colorFromHexString:(NSString *)hexString;

@end
