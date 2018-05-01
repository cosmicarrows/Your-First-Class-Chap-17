//
//  Person.m
//  yourFirstClassCh17
//
//  Created by Laurence Wingo on 12/30/12.
//  Copyright (c) 2012 Laurence Wingo. All rights reserved.
//

#import "Person.h"

@implementation Person


@synthesize heightInMeters, weightInKilos, firstName, string1, string2;

/*
-(float)heightInMeters
{
    return heightInMeters;
}

-(void)setHeightInMeters:(float)h
{
    heightInMeters = h;
}



-(int)weightInKilos
{
    return weightInKilos;
}
-(void)setWeightInKilos:(int)w
{
    weightInKilos = w;
}
*/





-(float)bodyMassIndex
{
    float h = [self heightInMeters];
    return [self weightInKilos] / (h * h);
    
    //return [self weightInKilos] / (heightInMeters * heightInMeters);
    //return weightInKilos / (heightInMeters * heightInMeters);
}


@end
