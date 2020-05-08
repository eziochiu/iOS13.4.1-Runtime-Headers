/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocument : NSObject <NSCopying> {
    PDFDocumentPrivate * _private;
}

@property (nonatomic, readonly) bool allowsCommenting;
@property (nonatomic, readonly) bool allowsContentAccessibility;
@property (nonatomic, readonly) bool allowsCopying;
@property (nonatomic, readonly) bool allowsDocumentAssembly;
@property (nonatomic, readonly) bool allowsDocumentChanges;
@property (nonatomic, readonly) bool allowsFormFieldEntry;
@property (nonatomic, readonly) bool allowsPrinting;
@property (nonatomic) <PDFDocumentDelegate> *delegate;
@property (nonatomic, copy) NSDictionary *documentAttributes;
@property (nonatomic, readonly) struct CGPDFDocument { }*documentRef;
@property (nonatomic, readonly) NSURL *documentURL;
@property (nonatomic, readonly) bool isEncrypted;
@property (nonatomic, readonly) bool isFinding;
@property (nonatomic, readonly) bool isLocked;
@property (nonatomic, readonly) long long majorVersion;
@property (nonatomic, readonly) long long minorVersion;
@property (nonatomic, retain) PDFOutline *outlineRoot;
@property (nonatomic, readonly) Class pageClass;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) long long permissionsStatus;
@property (nonatomic, readonly) PDFSelection *selectionForEntireDocument;
@property (nonatomic, readonly) NSString *string;

+ (bool)pdfDocumentAppendModeActiveForThisThread;
+ (void)setPDFDocumentAppendModeActiveForThisThread:(bool)arg1;

- (void).cxx_destruct;
- (id)PDFAKControllerDelegate;
- (id)_SASLSanitize:(id)arg1;
- (id)_addEncryptionFromOptions:(id)arg1;
- (id)_bookmarksCatalog;
- (bool)_canSaveWithEncryption;
- (void)_commonInit;
- (struct CGPDFName { }*)_convertCFStringToCGPDFName:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (id)_convertWriteOptions:(id)arg1;
- (struct CGPDFAnnotation { }*)_createCGPDFAnnotationForAnnotation:(id)arg1;
- (struct __CFDictionary { }*)_createInfoDictionary;
- (id)_dataFromXMP:(struct __CFData { }*)arg1 withRootPath:(id)arg2 keys:(id)arg3;
- (id)_documentCatalogMetadataForRootPath:(id)arg1 withKeys:(id)arg2;
- (id)_findString:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)_getNearestOutline:(id)arg1 forDestination:(id)arg2;
- (bool)_isCommonlyMappedToNothing:(id)arg1;
- (bool)_isNonAsciiSpace:(id)arg1;
- (id)_namedDestination:(id)arg1 forNameDictionary:(struct CGPDFDictionary { }*)arg2;
- (void)_notifyAKAdaptorPagePlaceholder:(id)arg1 wasReplacedWithPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_rawPageAtIndex:(unsigned long long)arg1;
- (void)_sanitizeAnnotationArray:(struct __CFArray { }*)arg1;
- (void)_sanitizeAnnotationDictionary:(struct __CFDictionary { }*)arg1;
- (void)_setDocumentCatalogMetadata:(id)arg1 withNSpace:(id)arg2 prefix:(id)arg3 rootPath:(id)arg4;
- (bool)_writeAppendMode:(struct CGDataConsumer { }*)arg1;
- (id)akController;
- (id)akDocumentAdaptor;
- (bool)allowsCommenting;
- (bool)allowsContentAccessibility;
- (bool)allowsCopying;
- (bool)allowsDocumentAssembly;
- (bool)allowsDocumentChanges;
- (bool)allowsFormFieldEntry;
- (bool)allowsPrinting;
- (Class)annotationSubclassForType:(id)arg1;
- (id)annotationsForFieldName:(id)arg1;
- (void)asyncFindString:(id)arg1 withDelegate:(id)arg2 onQueue:(id)arg3;
- (void)beginFindString:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)beginFindStrings:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)bookmarkedPages;
- (bool)bookmarksChanged;
- (bool)canSaveWithAppendModeUsingOptions:(id)arg1;
- (void)cancelFindString;
- (void)cleanupFind;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)coreFindString:(id)arg1;
- (void)coreFindStrings:(id)arg1;
- (id)dataRepresentation;
- (id)dataRepresentationWithOptions:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didMatchString:(id)arg1;
- (id)documentAttributes;
- (bool)documentChanged;
- (struct CGPDFDocument { }*)documentRef;
- (id)documentURL;
- (void)enableDocumentMRUMode:(bool)arg1;
- (void)enableLimitedSearch;
- (void)enqueueLayoutThreadForPage:(id)arg1;
- (void)exchangePageAtIndex:(unsigned long long)arg1 withPageAtIndex:(unsigned long long)arg2;
- (bool)findOnPage;
- (id)findPageWithCGPDFDictionaryPageRef:(struct CGPDFDictionary { }*)arg1;
- (id)findString:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)findString:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)findStringPerPage:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)formData;
- (unsigned long long)indexForPage:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)insertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEncrypted;
- (bool)isFinding;
- (bool)isLocked;
- (long long)majorVersion;
- (long long)minorVersion;
- (id)namedDestination:(id)arg1;
- (struct __CFData { }*)newXMPFromData:(id)arg1 preserveExistingXMPMetadata:(bool)arg2;
- (void)normalizeFindOptions:(unsigned long long)arg1;
- (id)outlineItemForSelection:(id)arg1;
- (id)outlineRoot;
- (id)pageAnnotationChanges;
- (id)pageAtIndex:(unsigned long long)arg1;
- (Class)pageClass;
- (unsigned long long)pageCount;
- (id)passwordUsedForUnlocking;
- (long long)permissionsStatus;
- (void)redo:(id)arg1;
- (void)removePageAtIndex:(unsigned long long)arg1;
- (id)renderingProperties;
- (void)requirePasswordsIfNeeded:(id /* block */)arg1;
- (void)resetPageAnnotationChanges;
- (void)revert;
- (void)scheduledFindOnPage:(id)arg1;
- (id)selectionForEntireDocument;
- (id)selectionFromPage:(id)arg1 atCharacterIndex:(unsigned long long)arg2 toPage:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (id)selectionFromPage:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toPage:(id)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4;
- (id)selectionFromPage:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toPage:(id)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4 type:(int)arg5;
- (void)setBookmarked:(bool)arg1 atPageIndex:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(struct CGPDFDocument { }*)arg1;
- (void)setDocumentAttributes:(id)arg1;
- (void)setDocumentHasBurnInAnnotations:(bool)arg1;
- (void)setFormData:(id)arg1;
- (void)setOutlineRoot:(id)arg1;
- (void)setPDFAKControllerDelegate:(id)arg1;
- (void)setPageChangeDelegate:(id)arg1;
- (void)setRenderingProperties:(id)arg1;
- (void)setShowsAnnotations:(bool)arg1;
- (void)setupAKDocumentAdaptorIfNecessaryWithView:(id)arg1;
- (bool)showsAnnotations;
- (id)string;
- (void)undo:(id)arg1;
- (bool)unlockWithPassword:(id)arg1;
- (void)updateBookmarksInPDFDocument;
- (bool)validateRedo:(id)arg1;
- (bool)validateUndo:(id)arg1;
- (bool)viewPreferenceRightToLeft;
- (bool)writeToConsumer:(struct CGDataConsumer { }*)arg1 withOptions:(id)arg2;
- (bool)writeToFile:(id)arg1;
- (bool)writeToFile:(id)arg1 withOptions:(id)arg2;
- (bool)writeToURL:(id)arg1;
- (bool)writeToURL:(id)arg1 withOptions:(id)arg2;

@end