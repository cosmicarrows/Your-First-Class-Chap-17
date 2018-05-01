//
//  playgroundClass.h
//  yourFirstClassCh17
//
//  Created by Laurence Wingo on 1/3/13.
//  Copyright (c) 2013 Laurence Wingo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface playgroundClass : NSObject{
    
    
    float heightInMeters;
    int weightInKilos;
}
@property (nonatomic, strong) NSString *firstName;

-(float)setHeightInMeters;
-(void)setHeightInMeters:(float)h;
-(void)setWeightInKilos:(int)w;
-(void)setFirstName:(NSString *)paramfirstName;


-(float)bodyMassIndex;


//method overloading


@end
