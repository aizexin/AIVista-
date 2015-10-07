//
//  AIDefine.h
//  Mypredictions
//
//  Created by 艾泽鑫 on 15/8/26.
//  Copyright (c) 2015年 艾泽鑫. All rights reserved.
//

#ifndef Mypredictions_AIDefine_h
#define Mypredictions_AIDefine_h


#endif
//包含的头文件
#import "UIImage+Extension.h"
#import "UIView+Extension.h"
#import "AIRequestModel.h"
#ifdef DEBUG//调试阶段的log
#define AILog(...) NSLog(__VA_ARGS__)
#else
#define AILog(...)
#endif

//屏幕大小
#define Mainsize ([[UIScreen mainScreen]bounds].size)
//字体
#define TEXT_Font [UIFont boldSystemFontOfSize:Mainsize.height * 0.03]
//字体颜色
#define TEXT_Color [UIColor colorWithRed:55/255.0 green:38/255.0 blue:25/255.0 alpha:1.0]
// 导航栏标题的字体
#define AINavigationTitleFont [UIFont boldSystemFontOfSize:20]


//资讯
#define Path_Information @"http://ktx.cms.palmtrends.com/api_v2.php?action=home_list&sa=&uid=10067566&mobile=iphone5&offset=0&count=15&&e=b7849d41b00bbacc9a62544402abed9e&uid=10067566&pid=10053&mobile=iphone5&platform=i"
//资讯详情（html）
#define Path_Information_Details @"http://ktx.cms.palmtrends.com/api_v2.php?action=article&uid=10067567&id=4093&mobile=iphone5&e=40dab97d773e7860febfc897c04824e2&fontsize=m"

//杂志
#define Path_Magazine @"http://ktx.cms.palmtrends.com/api_v2.php?action=get_mags_list&sa=&uid=10067567&mobile=iphone5&offset=0&count=15&&e=40dab97d773e7860febfc897c04824e2&uid=10067567&pid=10053&mobile=iphone5&platform=i"
//杂志详情
#define Path_Magazine_Details @"http://ktx.cms.palmtrends.com/api_v2.php?action=get_mags_detail&sa=&uid=10067567&mobile=iphone5&offset=0&count=1000&magid=113&e=40dab97d773e7860febfc897c04824e2&uid=10067567&pid=10053&mobile=iphone5&platform=i"

//酷图

#define Path_Picture @"http://ktx.cms.palmtrends.com/api_v2.php?action=piclist&sa=&uid=10067567&mobile=iphone5&offset=0&count=9&&e=40dab97d773e7860febfc897c04824e2&uid=10067567&pid=10053&mobile=iphone5&platform=i"
//酷图详情
#define Path_Picture_Detail @"http://ktx.cms.palmtrends.com/api_v2.php?action=picture&sa=&uid=10067567&mobile=iphone5&offset=0&count=15&gid=4086&moblie=iphone5&e=40dab97d773e7860febfc897c04824e2&uid=10067567&pid=10053&mobile=iphone5&platform=i"


