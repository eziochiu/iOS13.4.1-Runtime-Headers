/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMetalDrawable : NSObject <CAMetalDrawable, MTLDrawableSPI> {
    <MTLTexture> * _cachedTexture;
    unsigned long long  _drawableID;
    unsigned int  _insertSeed;
    CAMetalLayer * _layer;
    NSMutableArray * _presentScheduledHandlers;
    unsigned int  _presentScheduledInsertSeed;
    bool  _presentScheduledInsertSeedValid;
    NSMutableArray * _presentedHandlers;
    double  _presentedTime;
    struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; struct _CAMetalLayerPrivate {} *x7; struct __IOSurface {} *x8; id x9; id x10; struct CGColorSpace {} *x11; unsigned int x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; } * _priv;
    IOSurfaceSharedEvent * _sharedEvent;
    unsigned long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long drawableID;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int insertSeed;
@property (readonly) CAMetalLayer *layer;
@property (nonatomic) unsigned int presentScheduledInsertSeed;
@property (nonatomic) bool presentScheduledInsertSeedValid;
@property (nonatomic) double presentedTime;
@property (nonatomic) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic) unsigned long long status;
@property (readonly) Class superclass;
@property (readonly) <MTLTexture> *texture;

- (void).cxx_destruct;
- (void)addPresentScheduledHandler:(id /* block */)arg1;
- (void)addPresentedHandler:(id /* block */)arg1;
- (id)cachedTexture;
- (void)dealloc;
- (void)didPresentAtTime:(double)arg1;
- (void)didScheduledPresent;
- (unsigned long long)drawableID;
- (bool)hasPresentedHandlers;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; struct _CAMetalLayerPrivate {} *x7; struct __IOSurface {} *x8; id x9; id x10; struct CGColorSpace {} *x11; unsigned int x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; }*)arg1 layer:(id)arg2;
- (unsigned int)insertSeed;
- (id)layer;
- (void)present;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
- (unsigned int)presentScheduledInsertSeed;
- (bool)presentScheduledInsertSeedValid;
- (double)presentedTime;
- (struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; struct _CAMetalLayerPrivate {} *x7; struct __IOSurface {} *x8; id x9; id x10; struct CGColorSpace {} *x11; unsigned int x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; }*)priv;
- (void)releasePrivateReferences:(struct _CAMetalLayerPrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct SpinLock { struct { int x_1_2_1; } x_3_1_1; } x3; struct _CAImageQueue {} *x4; id x5; double x6; double x7; struct List<_CAMetalDrawablePrivate *> {} *x8; unsigned int x9; id x10; id x11; unsigned long long x12; unsigned long long x13; struct CGSize { double x_14_1_1; double x_14_1_2; } x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; struct Atomic { struct { int x_1_2_1; } x_19_1_1; } x19; id x20; struct Atomic { struct { int x_1_2_1; } x_21_1_1; } x21; struct Atomic { struct { int x_1_2_1; } x_22_1_1; } x22; id x23; id x24; id x25; struct SpinLock { struct { int x_1_2_1; } x_26_1_1; } x26; id x27; unsigned long long x28; struct SpinLock { struct { int x_1_2_1; } x_29_1_1; } x29; id x30; unsigned long long x31; struct CGColorSpace {} *x32; unsigned long long x33; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg1;
- (void)setDrawableID:(unsigned long long)arg1;
- (void)setInsertSeed:(unsigned int)arg1;
- (void)setPresentScheduledInsertSeed:(unsigned int)arg1;
- (void)setPresentScheduledInsertSeedValid:(bool)arg1;
- (void)setPresentedTime:(double)arg1;
- (void)setSharedEvent:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (id)sharedEvent;
- (unsigned long long)status;
- (id)texture;

@end