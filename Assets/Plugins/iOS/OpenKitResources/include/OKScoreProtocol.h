//
//  OKScoreProtocol.h
//  OpenKit
//
//  Created by Suneet Shah on 6/17/13.
//  Copyright (c) 2013 OpenKit. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol OKScoreProtocol <NSObject>

-(NSString*)scoreDisplayString;
-(NSString*)userDisplayString;
-(NSString*)rankDisplayString;
-(int64_t)scoreValue;
@end