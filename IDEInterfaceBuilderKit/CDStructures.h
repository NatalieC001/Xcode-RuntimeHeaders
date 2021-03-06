/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct Token {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _xmlDoc;

struct _xmlHashTable;

struct _xmlNode;

struct _xmlParserInput;

struct _xmlParserNodeInfo;

struct _xmlValidState;

struct option {
    char *_field1;
    int _field2;
    int *_field3;
    int _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    SEL _field1;
    SEL _field2;
    SEL _field3;
    long long _field4;
} CDStruct_8b9402de;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    char _field2;
    unsigned long long _field3;
    long long _field4;
    id _field5;
} CDStruct_96d6799e;

typedef struct {
    char *_field1;
    long long _field2;
} CDStruct_ac8ae556;

typedef struct {
    unsigned int isMutable:1;
    unsigned int forceArbitrationAfterCompletion:1;
    unsigned int invalidateDescendants:1;
} CDStruct_c60c94c2;

typedef struct {
    char _field1;
    char _field2;
    char _field3;
    char _field4;
    char _field5;
    char _field6;
} CDStruct_53793daa;

typedef struct {
    double minX;
    double minY;
    double maxX;
    double maxY;
} CDStruct_c519178c;

typedef struct {
    double start;
    double length;
} CDStruct_79f57be0;

typedef struct {
    long long _field1;
    id _field2;
} CDStruct_6db0658e;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct CDStruct_183601bc;

typedef struct {
    CDStruct_183601bc *_field1;
    double _field2;
    double _field3;
} CDStruct_3d08495f;

typedef struct {
    struct {
        char *_field1;
        unsigned long long _field2;
        unsigned long long _field3;
    } _field1;
    char *_field2;
    long long _field3;
    long long _field4;
    struct Token _field5;
    long long _field6;
} CDStruct_30f319a3;

typedef struct {
    struct CGPoint start;
    struct CGPoint end;
} CDStruct_f6143a38;

typedef struct {
    struct CGRect _field1[8];
} CDStruct_648df176;

typedef struct {
    struct CGRect rect;
    unsigned long long rectEdge;
    CDStruct_79f57be0 range;
} CDStruct_700ccd87;

#pragma mark Typedef'd Unions

typedef union {
    double _field1[2];
    CDStruct_79f57be0 _field2;
} CDUnion_37ff53f0;

typedef union {
    double _field1[4];
    CDStruct_c519178c _field2;
} CDUnion_24d33b01;

typedef union {
    double _field1[5];
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
        double _field5;
    } _field2;
} CDUnion_b8f7e27c;

