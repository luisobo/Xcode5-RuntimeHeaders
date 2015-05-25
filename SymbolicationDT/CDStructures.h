//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct LSItemInfoRecord {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct __CFString *_field4;
};

struct VMULabelUniquingDataForStringType {
    id _field1;
    id _field2;
};

struct _CSTypeRef {
    unsigned long long _opaque_1;
    unsigned long long _opaque_2;
};

struct _VMUBlockNode {
    unsigned long long _field1;
    unsigned int :3;
    unsigned int :36;
    unsigned int :25;
};

struct _VMUDirectedGraphEdge {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct _VMUObjectGraphEdge {
    union {
        struct {
            unsigned int :24;
            unsigned int :2;
            unsigned int :5;
            unsigned int :1;
        } _field1;
        struct {
            unsigned int :31;
            unsigned int :1;
        } _field2;
    } _field1;
};

struct _VMUObjectGraphEdgeLarge {
    unsigned int :56;
    unsigned int :8;
    unsigned int :56;
    unsigned int :8;
};

struct _VMURange {
    unsigned long long location;
    unsigned long long length;
};

struct _VMURegionMap {
    void *_field1;
    struct _VMURegionNode *_field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned int _field6[0];
};

struct _VMURegionNode {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned int _field3;
    unsigned int _field4;
    void *_field5;
    unsigned long long _field6;
    struct _VMURegionNode *_field7;
    _Bool _field8;
    _Bool _field9;
    struct *_field10;
    unsigned int _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    int _field14;
    int _field15;
    unsigned int _field16;
    unsigned char _field17;
    unsigned char _field18;
};

struct _VMUThreadNode {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long *_field4;
};

struct _VMUZoneNode {
    unsigned long long _field1;
    struct malloc_introspection_t *_field2;
    id _field3;
};

struct __CFRuntimeBase {
    unsigned long long _field1;
    unsigned char _field2[4];
    unsigned int _field3;
};

struct malloc_introspection_t;

struct timeval {
    long long tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned int :60;
    unsigned int :4;
    id _field2;
} CDStruct_599faf0f;

typedef struct {
    unsigned long long _field1;
    int _field2;
    unsigned long long _field3;
} CDStruct_df82e459;

