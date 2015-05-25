//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@interface XDDevPropertyMapping : NSManagedObject
{
    BOOL _isObservingSourceName;
}

+ (void)setPropertyMappingTriggerNotifications;
- (BOOL)hasDuplicateName;
- (BOOL)isInDestinationEntity;
- (BOOL)hasValidName;
- (id)mappingStatusIconData;
- (id)possibleNames;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (BOOL)validateValueExpressionAsString:(id *)arg1 error:(id *)arg2;
- (void)setValueExpressionAsString:(id)arg1;
- (id)valueExpressionAsString;
- (void)setEntityMapping:(id)arg1;
- (id)entityMapping;
- (id)shortPropertyType;
- (Class)propertyClassType;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)setUserInfoData:(id)arg1;
- (id)userInfoData;
- (void)setValueExpressionData:(id)arg1;
- (id)valueExpressionData;
- (void)setName:(id)arg1;
- (id)name;
- (void)setValueExpression:(id)arg1;
- (id)valueExpression;

@end

