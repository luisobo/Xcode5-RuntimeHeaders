//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICMappedMultipartImage.h>

@interface IBICImageSet : IBICMappedMultipartImage
{
    long long _templateRenderingIntent;
}

+ (id)pluralTypeNameForIssues;
+ (id)typeNameForIssues;
+ (id)fileExtension;
+ (id)defaultInstanceForPlatforms:(id)arg1;
+ (id)defaultImageName;
+ (double)currentContentsJSONVersionNumber;
+ (double)latestUnderstoodContentsJSONVersionNumber;
+ (double)earliestUnderstoodContentsJSONVersionNumber;
+ (Class)imageRepClass;
@property(nonatomic) long long templateRenderingIntent; // @synthesize templateRenderingIntent=_templateRenderingIntent;
- (id)infoDictionary;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)validatedContentsJSONInfoFromSnapshot:(id)arg1 results:(id)arg2;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (void)populateContentsJSONImageEntry:(id)arg1 forImageRep:(id)arg2;
- (BOOL)shouldIncludeImageRepInContentsJSON:(id)arg1;
- (id)suggestedFileNameForImageRepInSlot:(id)arg1;
- (id)imageRepFromImageEntry:(id)arg1 results:(id)arg2;
- (double)latestUnderstoodContentsJSONVersionNumber;
- (id)descriptionShortClassName;
- (id)childForIdentifier:(id)arg1;
- (id)imageRepForIdentifier:(id)arg1;
- (id)imageRepForImageRepIdentifier:(id)arg1;
- (id)imageRepForSlot:(id)arg1;

@end

