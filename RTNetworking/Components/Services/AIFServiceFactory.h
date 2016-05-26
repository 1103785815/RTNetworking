//
//  AXServiceFactory.h
//  RTNetworking
//
//  Created by casa on 14-5-12.
//  Copyright (c) 2014年 anjuke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AIFService.h"

@interface AIFServiceFactory : NSObject

+ (instancetype)sharedInstance;
- (AIFService<AIFServiceProtocol> *)serviceWithIdentifier:(NSString *)identifier;

@end
