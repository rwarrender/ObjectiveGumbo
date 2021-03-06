//
//  OGParseError.m
//  ObjectiveGumbo
//
//  Copyright (c) 2017 Richard Warrender. All rights reserved.
//
//

#import "OGError.h"
#import "error.h"

NSString * const OGErrorDomain = @"OGErrorDomain";

@interface OGParseError ()

@property (nonatomic, assign) OGErrorPosition position;

@end


@implementation OGParseError

- (instancetype)initWithDomain:(NSErrorDomain)domain
                          code:(NSInteger)code
                      position:(OGErrorPosition)position
                      userInfo:(NSDictionary *)dict
{
    if (self = [super initWithDomain:domain code:code userInfo:dict]) {
        self.position = position;
    }
    return self;
}

+ (instancetype)errorWithDomain:(NSErrorDomain)domain
                           code:(NSInteger)code
                       position:(OGErrorPosition)position
                       userInfo:(nullable NSDictionary *)dict
{
    return [[OGParseError alloc] initWithDomain:domain code:code position:position userInfo:dict];
}

@end
