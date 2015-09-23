//
//  UIImage+TBOriginImage.h
//  彩票1
//
//  Created by MAC BOOK on 15/9/21.
//  Copyright © 2015年 XMG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (TBOriginImage)

+ (instancetype)imageWithOriginImage:(UIImage *)image;
+ (UIImage *)resizableImage:(UIImage *)normal;
@end
