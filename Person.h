//
//  Person.h
//  yourFirstClassCh17
//
//  Created by Laurence Wingo on 12/30/12.
//  Copyright (c) 2012 Laurence Wingo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Social/Social.h>
#import <GameKit/GameKit.h>
#import <Accounts/Accounts.h>

@interface Person : NSObject
{
    float heightInMeters;
    int weightInKilos;
    NSString *firstName;
    
   
}
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *string1;
@property (nonatomic, strong) NSString *string2;


/*
//You will be able to set those instance variables using these methods
-(float)heightInMeters;
-(void)setHeightInMeters:(float)h;
-(int)weightInKilos;
-(void)setWeightInKilos:(int)w;
*/

//New and easier way to set and get methods
@property float heightInMeters;
@property int weightInKilos;

//This method calculates the Body Mass Index
-(float)bodyMassIndex;

@end
