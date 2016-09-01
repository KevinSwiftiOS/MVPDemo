//
//  TemplateContainerModel.h
//  MVPDesignDemo
//
//  Created by hznucai on 2016/9/1.
//  Copyright © 2016年 hznucai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TemplateRenderProtocol.h"
#import "TemplateActionProtocol.h"
@protocol TemplateContainerProtocol <NSObject>
@required
-(id<TemplateRenderProtocol>)childFloorModelAtIndex:(NSInteger)index;
@end
@class TemplateChannelModel;
@interface TemplateContainerModel : NSObject<TemplateContainerProtocol,TemplateActionProtocol>

//identityID;
@property(nonatomic,strong)NSNumber *identityId;
@property(nonatomic,strong)NSString *pattern;
@property(nonatomic,strong)