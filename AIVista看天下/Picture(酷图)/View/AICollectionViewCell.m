//
//  AICollectionViewCell.m
//  AIVista看天下
//
//  Created by 艾泽鑫 on 15/10/7.
//  Copyright © 2015年 艾泽鑫. All rights reserved.
//

#import "AICollectionViewCell.h"
#import "AIPictureModel.h"
#import "UIKit+AFNetworking.h"
@implementation AICollectionViewCell

- (void)awakeFromNib {
    // Initialization code
}
-(void)setData:(AIPictureModel *)data{
    NSURL *imageUrl = [NSURL URLWithString:data.icon];
    [self.imageV setImageWithURL:imageUrl placeholderImage:[UIImage imageNamed:@"列表缺省图"]];
    self.titleLable.text = data.title;
}
@end
