//
//  Asset.h
//  yourFirstClassCh17
//
//  Created by Laurence Wingo on 12/30/12.
//  Copyright (c) 2012 Laurence Wingo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Asset : NSObject

{
    NSString *label;
    unsigned int resaleValue;
    NSString *serialNumber;
}
@property (strong) NSString *label;
@property unsigned int resaleValue;
@property (strong) NSString *serialNumber;

@end
