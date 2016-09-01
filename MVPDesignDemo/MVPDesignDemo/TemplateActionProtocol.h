//
//  TemplateActionProtocol.h
//  MVPDesignDemo
//
//  Created by hznucai on 2016/9/1.
//  Copyright © 2016年 hznucai. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol TemplateActionProtocol <NSObject>
@optional
-(TemplateAction *)jumpFloorModelAtIndexPath:(NSIndexPath *)indexPath;
@end
