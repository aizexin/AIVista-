//
//  AIPictureViewController.m
//  AIVista看天下
//
//  Created by 艾泽鑫 on 15/10/7.
//  Copyright © 2015年 艾泽鑫. All rights reserved.
//

#import "AIPictureViewController.h"
#import "AICollectionViewCell.h"
#import "AIDefine.h"
#import "AIPictureModel.h"
@interface AIPictureViewController ()<AIRequestModelDelegate,UICollectionViewDelegate,UICollectionViewDataSource>
@property(nonatomic,strong)NSMutableArray *dataSource;
@property(nonatomic,strong)UICollectionView *collectionView;
@end
static NSString *identifier = @"cell";
@implementation AIPictureViewController

-(NSMutableArray *)dataSource{
    if (!_dataSource) {
        _dataSource = [NSMutableArray array];
    }
    return _dataSource;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    //初始化collection
    UICollectionViewFlowLayout *flowLayout = [[UICollectionViewFlowLayout alloc]init];
    flowLayout.itemSize = CGSizeMake(80, 80);
    self.collectionView = [[UICollectionView alloc]initWithFrame:self.view.bounds collectionViewLayout:flowLayout];
    self.collectionView.dataSource = self;
    self.collectionView.delegate = self;
    [self.collectionView setBackgroundColor:[UIColor whiteColor]];
    [self.view addSubview:self.collectionView];
    
    UINib *nib = [UINib nibWithNibName:@"AICollectionViewCell" bundle:nil];
    [self.collectionView registerNib:nib forCellWithReuseIdentifier:identifier];
    //加载数据
    AIRequestModel *requestModel = [[AIRequestModel alloc]init];
    requestModel.path = Path_Picture;
    requestModel.delegate = self;
    [requestModel startRequestInfo];
}
-(void)requestSendMessage:(NSData *)data andPath:(NSString *)path{
    NSDictionary *root = [NSJSONSerialization JSONObjectWithData:data options:(NSJSONReadingMutableContainers) error:nil];
    NSArray *array = root[@"list"];
    self.dataSource = [NSMutableArray array];
    for (NSDictionary *dict in array) {
        AIPictureModel *model = [AIPictureModel pictureWithDict:dict];
        [self.dataSource addObject:model];
    }
    [self.collectionView reloadData];
}

-(NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section{
    return self.dataSource.count;
}
-(UICollectionViewCell*)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath{
    AICollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:identifier forIndexPath:indexPath];
    cell.data = self.dataSource[indexPath.row];
    return cell;
}



@end
