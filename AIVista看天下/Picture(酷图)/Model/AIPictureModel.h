//
//  AIPictureModel.h
//  AIVista看天下
//
//  Created by 艾泽鑫 on 15/10/7.
//  Copyright © 2015年 艾泽鑫. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIPictureModel : NSObject

@property(nonatomic,copy)NSString *gid;
/**
 *  图片路径
 */
@property(nonatomic,copy)NSString *icon;
@property(nonatomic,copy)NSString *timestamp;
/**
 *  标题
 */
@property(nonatomic,copy)NSString *title;

-(instancetype)initWithDict:(NSDictionary*)dict;
+(instancetype)pictureWithDict:(NSDictionary*)dict;
@end
