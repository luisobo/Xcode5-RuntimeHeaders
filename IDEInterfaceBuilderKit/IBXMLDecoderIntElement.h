//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBXMLDecoderAbstractValueElement.h>

@interface IBXMLDecoderIntElement : IBXMLDecoderAbstractValueElement
{
    long long _value;
}

+ (id)elementName;
- (long long)interpretedLongLongValue;
- (BOOL)acceptsData;
- (BOOL)interpretDataReturningError:(id *)arg1;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;

@end

