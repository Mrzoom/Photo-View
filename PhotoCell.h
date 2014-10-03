//
//  PhotoCell.h
//  Photo View
//
//  Created by zoom on 14-5-4.
//  Copyright (c) 2014年 Jiance Tong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoCell : UICollectionViewCell
@property(nonatomic,strong) UIImageView * imageView;
@property(nonatomic) NSDictionary * photos;
@end
