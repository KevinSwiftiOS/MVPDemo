//
//  TemplateCellProtocol.h
//  MVPDesignDemo
//
//  Created by hznucai on 2016/9/1.
//  Copyright © 2016年 hznucai. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol TemplateBaseProtocol;
typedef void(^TapBlock)(NSIndexPath *index);
@protocol TemplateCellProtocol <NSObject>
@optional
+ (CGSize)calculateSizeWithData:(id<TemplateRenderProtocol>)data constrainedToSize:(CGSize)size;

- (void)processData:(id <TemplateRenderProtocol>)data;

- (void)tapOnePlace:(TapBlock) block;
@end
