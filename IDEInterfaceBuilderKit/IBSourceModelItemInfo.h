//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTSourceModelItem, NSString;

@interface IBSourceModelItemInfo : NSObject
{
    DVTSourceModelItem *_item;
    NSString *_type;
    NSString *_name;
    NSString *_collectionType;
    long long _relationshipType;
    unsigned long long _annotationKind;
    struct _NSRange _range;
}

@property unsigned long long annotationKind; // @synthesize annotationKind=_annotationKind;
@property long long relationshipType; // @synthesize relationshipType=_relationshipType;
@property(retain) NSString *collectionType; // @synthesize collectionType=_collectionType;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *type; // @synthesize type=_type;
@property struct _NSRange range; // @synthesize range=_range;
@property(retain) DVTSourceModelItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithSourceModelItem:(id)arg1 name:(id)arg2 type:(id)arg3 collectionType:(id)arg4 range:(struct _NSRange)arg5 relationshipType:(long long)arg6;

@end

