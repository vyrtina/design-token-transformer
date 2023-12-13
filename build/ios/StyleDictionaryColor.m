
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Wed, 13 Dec 2023 23:21:10 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
#57bc90ff,
#77c9d4ff,
#015249ff,
#f5f5f5ff,
#ffffffff,
#ccccccff,
#333333ff,
#555555ff,
#b3261eff,
#ffffffff,
#000000ff,
#57bc9026,
#77c9d433,
#01524933,
#b3261e33,
#e0e0e0ff,
#989598ff,
#000000ff,
#000000ff,
#ffffffff,
#1c1b1fff
    ];
  });

  return colorArray;
}

@end
