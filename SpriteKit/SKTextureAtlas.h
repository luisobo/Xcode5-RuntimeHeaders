//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDictionary, NSString;

@interface SKTextureAtlas : NSObject <NSCoding>
{
    NSDictionary *_textureDict;
    NSString *_atlasName;
}

+ (void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)atlasNamed:(id)arg1;
+ (id)atlasWithDictionary:(id)arg1;
+ (BOOL)canUseObjectForAtlas:(id)arg1;
+ (id)findTextureNamed:(id)arg1;
+ (id)getSupportedPostfixes;
- (void).cxx_destruct;
- (id)textureNamed:(id)arg1;
- (id)findTextureNamedFromAtlas:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)preloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadTextures;
- (void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *textureNames;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)unload;
- (void)preload;
- (id)_copyImageData;

@end

