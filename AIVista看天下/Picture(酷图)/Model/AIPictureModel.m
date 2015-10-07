//
//  AIPictureModel.m
//  AIVista看天下
//
//  Created by 艾泽鑫 on 15/10/7.
//  Copyright © 2015年 艾泽鑫. All rights reserved.
//

#import "AIPictureModel.h"

@implementation AIPictureModel
-(instancetype)initWithDict:(NSDictionary*)dict{
    self = [super init];
    if (self) {
        [self setValuesForKeysWithDictionary:dict];
    }
    return self;
}
+(instancetype)pictureWithDict:(NSDictionary*)dict{
    return [[self alloc]initWithDict:dict];
}
@end
