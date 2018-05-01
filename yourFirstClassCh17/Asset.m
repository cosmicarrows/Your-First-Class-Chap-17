//
//  Asset.m
//  yourFirstClassCh17
//
//  Created by Laurence Wingo on 12/30/12.
//  Copyright (c) 2012 Laurence Wingo. All rights reserved.
//

#import "Asset.h"

@implementation Asset

@synthesize label, resaleValue, serialNumber;

-(NSString *)description
{
    return [NSString stringWithFormat:@"<This item: %@, has a resale value of : $%d >", [self label], [self resaleValue]];
}

-(void)dealloc
{
    NSLog(@"deallocating %@", self);
}



@end
