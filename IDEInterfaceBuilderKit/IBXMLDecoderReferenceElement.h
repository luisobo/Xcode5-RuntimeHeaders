/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBXMLDecoderAbstractObjectElement.h>

@class NSString;

@interface IBXMLDecoderReferenceElement : IBXMLDecoderAbstractObjectElement
{
    NSString *_referencedIdentifier;
    IBXMLDecoderAbstractObjectElement *_resolvedAbstractObjectElement;
}

+ (id)elementName;
@property IBXMLDecoderAbstractObjectElement *resolvedAbstractObjectElement; // @synthesize resolvedAbstractObjectElement=_resolvedAbstractObjectElement;
- (void).cxx_destruct;
- (id)referencedIdentifier;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;
- (id)initWithAttributes:(const char **)arg1 stringTable:(id)arg2 error:(id *)arg3;

@end

