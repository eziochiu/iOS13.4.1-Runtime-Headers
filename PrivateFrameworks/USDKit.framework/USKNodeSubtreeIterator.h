/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

@interface USKNodeSubtreeIterator : NSObject <USKIterator> {
    struct iterator { 
        struct Usd_PrimData {} *m_iterator; 
        struct UsdPrimRange {} *_range; 
        struct SdfPath { 
            struct Sdf_PathNodeHandleImpl<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathNode> { 
                struct Handle { 
                    unsigned int value; 
                } _poolHandle; 
            } _primPart; 
            struct Sdf_PathNodeHandleImpl<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathNode> { 
                struct Handle { 
                    unsigned int value; 
                } _poolHandle; 
            } _propPart; 
        } _proxyPrimPath; 
        unsigned int _depth; 
        bool _pruneChildrenFlag; 
        bool _isPost; 
    }  _it;
    struct UsdPrimRange { 
        struct Usd_PrimData {} *_begin; 
        struct Usd_PrimData {} *_end; 
        struct SdfPath { 
            struct Sdf_PathNodeHandleImpl<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathNode> { 
                struct Handle { 
                    unsigned int value; 
                } _poolHandle; 
            } _primPart; 
            struct Sdf_PathNodeHandleImpl<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathNode> { 
                struct Handle { 
                    unsigned int value; 
                } _poolHandle; 
            } _propPart; 
        } _initProxyPrimPath; 
        struct Usd_PrimFlagsPredicate { 
            struct bitset<13> { 
                unsigned long long __first_; 
            } _mask; 
            struct bitset<13> { 
                unsigned long long __first_; 
            } _values; 
            bool _negate; 
        } _predicate; 
        unsigned int _initDepth; 
        bool _postOrder; 
    }  _range;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPrim:(const struct UsdPrim { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_19__pxrReserved__usdkit__::Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_1_2_1; } x_3_1_1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_2_2_1; } x_3_1_2; } x3; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_19__pxrReserved__usdkit__::TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; }*)arg1;
- (id)initWithPrim:(const struct UsdPrim { int x1; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_19__pxrReserved__usdkit__::Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_1_2_1; } x_3_1_1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_2_2_1; } x_3_1_2; } x3; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_19__pxrReserved__usdkit__::TfToken::_Rep> { struct _Rep {} *x_1_2_1; } x_4_1_1; } x4; }*)arg1 withPredicate:(struct Usd_PrimFlagsPredicate { struct bitset<13> { unsigned long long x_1_1_1; } x1; struct bitset<13> { unsigned long long x_2_1_1; } x2; bool x3; })arg2;
- (id)initWithScene:(const struct TfWeakPtr<pxrInternal_v0_19__pxrReserved__usdkit__::UsdStage> { struct UsdStage {} *x1; struct TfRefPtr<pxrInternal_v0_19__pxrReserved__usdkit__::Tf_Remnant> { struct TfRefBase {} *x_2_1_1; } x2; }*)arg1;
- (id)initWithScene:(const struct TfWeakPtr<pxrInternal_v0_19__pxrReserved__usdkit__::UsdStage> { struct UsdStage {} *x1; struct TfRefPtr<pxrInternal_v0_19__pxrReserved__usdkit__::Tf_Remnant> { struct TfRefBase {} *x_2_1_1; } x2; }*)arg1 withPredicate:(struct Usd_PrimFlagsPredicate { struct bitset<13> { unsigned long long x_1_1_1; } x1; struct bitset<13> { unsigned long long x_2_1_1; } x2; bool x3; })arg2;
- (id)initWithSubtreeRange:(const struct UsdPrimRange { struct Usd_PrimData {} *x1; struct Usd_PrimData {} *x2; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_1_2_1; } x_3_1_1; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_Pool<pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_19__pxrReserved__usdkit__::Sdf_PathNode> { struct Handle { unsigned int x_1_3_1; } x_2_2_1; } x_3_1_2; } x3; struct Usd_PrimFlagsPredicate { struct bitset<13> { unsigned long long x_1_2_1; } x_4_1_1; struct bitset<13> { unsigned long long x_2_2_1; } x_4_1_2; bool x_4_1_3; } x4; unsigned int x5; bool x6; }*)arg1;
- (id)nextObject;

@end