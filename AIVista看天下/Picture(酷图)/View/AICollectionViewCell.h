//
//  AICollectionViewCell.h
//  AIVista看天下
//
//  Created by 艾泽鑫 on 15/10/7.
//  Copyright © 2015年 艾泽鑫. All rights reserved.
//

#import <UIKit/UIKit.h>
@class AIPictureModel;
@interface AICollectionViewCell : UICollectionViewCell

@property (strong, nonatomic) IBOutlet UIImageView *imageV;
@property (strong, nonatomic) IBOutlet UILabel *titleLable;
@property(nonatomic,strong)AIPictureModel *data;
@end
