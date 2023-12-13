
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 13 Dec 2023 23:21:10 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorsColorPrimary,
ColorsColorSecondary,
ColorsColorAccent,
ColorsColorContainer,
ColorsColorBackground,
ColorsColorBorder,
ColorsColorDarkGray,
ColorsColorCharcoalGray,
ColorsColorError,
ColorsColorWhite,
ColorsColorBlack,
ColorsColorPrimaryContainer,
ColorsColorSecondaryContainer,
ColorsColorTertiaryContainer,
ColorsColorErrorContainer,
ColorsColorDisabledContainer,
ColorsColorDisabledText,
ColorsColorOnprimary,
ColorsColorOnsecondary,
ColorsColorOntertiary,
ColorsLightBlack
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
