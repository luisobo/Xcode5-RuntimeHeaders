/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTExtension, IDETemplateFactory, NSArray, NSString;

@interface IDETemplateKind : NSObject
{
    Class _instantiationContextClass;
    IDETemplateFactory *_factory;
    NSArray *_conformedToTemplateKinds;
    DVTExtension *_extension;
    NSString *_assistantIdentifier;
}

+ (id)targetTemplateKind;
+ (id)projectTemplateKind;
+ (id)fileTemplateKind;
+ (id)allTemplateKinds;
+ (id)templateKindForIdentifier:(id)arg1;
+ (id)_templateKindForExtension:(id)arg1;
+ (void)initialize;
@property(readonly, copy) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (id)nextAssistantIdentifierForWorkspace:(id)arg1;
- (id)newTemplateInstantiationContext;
- (id)createdObjectTypeName;
- (BOOL)conformsToTemplateKind:(id)arg1;
@property(readonly, copy) NSArray *conformedToTemplateKinds; // @synthesize conformedToTemplateKinds=_conformedToTemplateKinds;
@property(readonly) Class templateClass;
@property(readonly) IDETemplateFactory *factory; // @synthesize factory=_factory;
- (id)description;
- (id)initWithExtension:(id)arg1;

@end

