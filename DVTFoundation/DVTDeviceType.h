//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSOrderedSet, NSSet, NSString;

@interface DVTDeviceType : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSString *_UTI;
    NSOrderedSet *_supportedArchitectures;
    NSString *_deviceSpecifierPrefix;
    NSDictionary *_deviceSpecifierOptionDefaults;
    NSSet *_knownDeviceSpecifierOptions;
    NSSet *_requiredDeviceSpecifierOptions;
}

+ (id)deviceTypeWithIdentifier:(id)arg1;
+ (void)initialize;
@property(readonly, copy) NSSet *requiredDeviceSpecifierOptions; // @synthesize requiredDeviceSpecifierOptions=_requiredDeviceSpecifierOptions;
@property(readonly, copy) NSSet *knownDeviceSpecifierOptions; // @synthesize knownDeviceSpecifierOptions=_knownDeviceSpecifierOptions;
@property(readonly, copy) NSDictionary *deviceSpecifierOptionDefaults; // @synthesize deviceSpecifierOptionDefaults=_deviceSpecifierOptionDefaults;
@property(readonly, copy) NSString *deviceSpecifierPrefix; // @synthesize deviceSpecifierPrefix=_deviceSpecifierPrefix;
@property(readonly, copy) NSOrderedSet *supportedArchitectures; // @synthesize supportedArchitectures=_supportedArchitectures;
@property(readonly, copy) NSString *UTI; // @synthesize UTI=_UTI;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithExtension:(id)arg1;

@end

