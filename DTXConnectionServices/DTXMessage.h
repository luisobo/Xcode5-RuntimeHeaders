//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError;

@interface DTXMessage : NSObject
{
    int _messageType;
    int _status;
    CDUnknownBlockType _destructor;
    const char *_internalBuffer;
    unsigned long long _internalBufferLength;
    unsigned long long _cost;
    id <NSCoding><NSObject> _payloadObject;
    void *_auxiliary;
    BOOL _deserialized;
    BOOL _immutable;
    BOOL _expectsReply;
    unsigned int _identifier;
    unsigned int _channelCode;
    unsigned int _conversationIndex;
    NSDictionary *_auxiliaryPromoted;
}

+ (id)message;
+ (id)messageWithSelector:(SEL)arg1 objectArguments:(id)arg2;
+ (id)messageWithSelector:(SEL)arg1 typesAndArguments:(int)arg2;
+ (id)messageReferencingBuffer:(const void *)arg1 length:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;
+ (id)messageWithBuffer:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)messageWithPrimitive:(void *)arg1;
+ (id)messageWithError:(id)arg1;
+ (id)messageWithObject:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(nonatomic) int errorStatus; // @synthesize errorStatus=_status;
@property(readonly, nonatomic) BOOL deserialized; // @synthesize deserialized=_deserialized;
@property(nonatomic) unsigned int conversationIndex; // @synthesize conversationIndex=_conversationIndex;
@property(nonatomic) BOOL expectsReply; // @synthesize expectsReply=_expectsReply;
@property(nonatomic) unsigned int channelCode; // @synthesize channelCode=_channelCode;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long serializedLength;
- (void)serializedFormExpectingReply:(BOOL)arg1 apply:(CDUnknownBlockType)arg2;
- (id)initWithSerializedForm:(const char *)arg1 length:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;
- (void)invokeWithTarget:(id)arg1 replyChannel:(id)arg2 validator:(CDUnknownBlockType)arg3;
- (BOOL)shouldInvokeWithTarget:(id)arg1;
@property(readonly, nonatomic) BOOL isBarrier;
@property(readonly, nonatomic) BOOL isDispatch;
@property(nonatomic) NSError *error;
- (id)valueForMessageKey:(id)arg1;
- (void)setData:(id)arg1 forMessageKey:(id)arg2;
- (void)setInteger:(long long)arg1 forMessageKey:(id)arg2;
- (void)setString:(id)arg1 forMessageKey:(id)arg2;
- (void)setObject:(id)arg1 forMessageKey:(id)arg2;
- (id)orderedValues;
- (void)appendObject:(id)arg1;
- (void)_appendTypesAndValues:(int)arg1 withKey:(id)arg2 list:(struct __va_list_tag [1])arg3;
- (void)_willModifyAuxiliary;
- (void)_makeBarrier;
- (void)_makeDispatch;
- (void)_makeImmutable;
- (const void *)getBufferWithReturnedLength:(unsigned long long *)arg1;
- (id)object;
@property(copy, nonatomic) id <NSCoding><NSObject> payloadObject;
- (void)_setPayloadBuffer:(const char *)arg1 length:(unsigned long long)arg2 shouldCopy:(BOOL)arg3 destructor:(CDUnknownBlockType)arg4;
- (void)_clearPayloadBuffer;
- (void)dealloc;
- (id)initWithInvocation:(id)arg1;
- (id)initWithSelector:(SEL)arg1 firstArg:(id)arg2 remainingObjectArgs:(struct __va_list_tag [1])arg3;
- (id)newReplyWithError:(id)arg1;
- (id)newReplyWithObject:(id)arg1;
- (id)newReply;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

