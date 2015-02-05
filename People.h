//
//  People.h
//  SocialPeople
//
//  Created by SantiagoDls on 02/02/15.
//  Copyright (c) 2015 ConstruApps. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface People : NSObject
{
NSString *name;
NSString *twitter;
NSString *status;
}
@property(nonatomic, retain) NSString *name;
@property(nonatomic, retain) NSString *twitter;
@property(nonatomic, retain) NSString *status;
@end
