//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface JKClassLibrary : NSObject
{
    NSMutableArray *_classStores;
}

+ (id)defaultClassLibrary;
- (id)packageNameEnumerator;
- (id)classNameEnumerator;
- (id)_packageNamesInPackage:(id)arg1;
- (id)_classNamesInPackage:(id)arg1;
- (id)_namesInPackage:(id)arg1 lookingForClassNames:(BOOL)arg2;
- (id)description;
- (id)rootPackage;
- (id)packageWithName:(id)arg1;
- (id)dataForClassWithName:(id)arg1;
- (id)classStoreForClassWithName:(id)arg1;
- (id)classWithName:(id)arg1;
- (BOOL)containsClassWithName:(id)arg1;
- (id)classPaths;
- (void)removeClassPaths:(id)arg1;
- (void)removeClassPath:(id)arg1;
- (void)addClassPaths:(id)arg1;
- (void)addClassPath:(id)arg1;
- (void)dealloc;
- (id)initWithClassPaths:(id)arg1;
- (id)init;
- (id)classPath;
- (void)appendToClassPath:(id)arg1;
- (id)initWithClassPath:(id)arg1;

@end

