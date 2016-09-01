//
//  TemplateRenderProtocol.h
//  MVPDesignDemo
//
//  Created by hznucai on 2016/9/1.
//  Copyright © 2016年 hznucai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TemplateActionProtocol.h"
@protocol TemplateRenderProtocol <NSObject,TemplateActionProtocol>
@required
-(NSString *)floorIdentifier;
@end
