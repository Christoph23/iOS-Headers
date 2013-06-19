/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct SBBannerDismissGestureState {
    char _field1;
    char _field2;
    struct CGSize _field3;
    struct CGSize _field4;
    struct CGRect _field5;
    int _field6;
    float _field7;
    char _field8;
};

struct SBIconCoordinate {
    int row;
    int col;
};

struct SBWindowLevelRange_struct {
    float start;
    float end;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _opaque_pthread_t {
    long _field1;
    struct __darwin_pthread_handler_rec *_field2;
    char _field3[596];
};

struct vImage_Buffer {
    void *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    char itemIsEnabled[25];
    char timeString[64];
    int gsmSignalStrengthRaw;
    int gsmSignalStrengthBars;
    char serviceString[100];
    char serviceCrossfadeString[100];
    char serviceImages[2][100];
    char operatorDirectory[1024];
    unsigned int serviceContentType;
    int wifiSignalStrengthRaw;
    int wifiSignalStrengthBars;
    unsigned int dataNetworkType;
    int batteryCapacity;
    unsigned int batteryState;
    char batteryDetailString[150];
    int bluetoothBatteryCapacity;
    int thermalColor;
    unsigned int thermalSunlightMode:1;
    unsigned int slowActivity:1;
    unsigned int syncActivity:1;
    char activityDisplayId[256];
    unsigned int bluetoothConnected:1;
    unsigned int displayRawGSMSignal:1;
    unsigned int displayRawWifiSignal:1;
    unsigned int locationIconType:1;
} CDStruct_87a532be;

typedef struct {
    unsigned int _field1[8];
} CDStruct_6ad76789;

typedef struct {
    unsigned int willActivate:1;
    unsigned int didActivate:1;
    unsigned int willDeactivate:1;
    unsigned int didDeactivate:1;
    unsigned int didChangeTop:1;
    unsigned int willTearDownWindow:1;
    unsigned int didTearDownWindow:1;
    unsigned int didRemoveFromWindow:1;
} CDStruct_8a76bf7f;

typedef struct {
    char _field1;
    char _field2;
    char _field3;
    char _field4;
    float _field5;
    int _field6;
} CDStruct_af7d35ee;

typedef struct {
    float x;
    float y;
    float scale;
    float rotate;
} CDStruct_812d5f7b;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    int startStyle;
    int startOrientation;
    int endStyle;
    int endOrientation;
    int transitionType;
    char zoomOther;
} CDStruct_5d575efc;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    char _field1[25];
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    CDStruct_87a532be _field2;
} CDStruct_70a52081;

typedef struct {
    int type;
    int modifier;
    unsigned int pathIndex;
    unsigned int pathIdentity;
    struct CGPoint location;
    struct CGPoint previousLocation;
    struct CGPoint unrotatedLocation;
    struct CGPoint previousUnrotatedLocation;
    float totalDistanceTraveled;
    int interfaceOrientation;
    int previousInterfaceOrientation;
    double timestamp;
} CDStruct_9bf48c9a;

