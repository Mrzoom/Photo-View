//
//  PhotoController.h
//  Photo View
//
//  Created by zoom on 14-5-5.
//  Copyright (c) 2014年 Jiance Tong. All rights reserved.
//

#import <Foundation/Foundation.h> //we add this class, because we want to share something between different classes

@interface PhotoController : NSObject

+(void)imageForPhoto:(NSDictionary *)photo size:(NSString *)size completion:(void(^)(UIImage *image))completion;

@end
