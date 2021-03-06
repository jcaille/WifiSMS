/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MobileQuickLook.framework/MobileQuickLook
 */

@class RTFHTMLWriter, NSMutableDictionary, RTFReaderState, RTFCPZArchive, NSData, RTF_CMArchiveManager, NSMutableString, RTFNSColor, NSMapTable;



@interface RTFReader : NSObject 
{
    RTFReaderState *_readerState;
    RTFHTMLWriter *_htmlWriter;
    RTF_CMArchiveManager *_archiver;
    RTFCPZArchive *_zipArchive;
    NSMutableString *_currentString;
    NSMutableString *_topString;
    NSData *_rtfData;
    NSMutableDictionary *_fontTable;
    union { 
        unsigned char thin[128]; 
        unsigned short fat[128]; 
    } _textBuffer;
    NSUInteger _textBufferIndex;
    NSInteger _rtfVersion;
    NSInteger _cocoaVersion;
    NSInteger _cocoaSubVersion;
    NSInteger _readOnly;
    RTFNSColor *_documentBackgroundColor;
    NSMutableDictionary *_documentInfoDictionary;
    NSMapTable *_cachedRTFFontTable;
    float _hyphenationFactor;
    float _defaultTabInterval;
    struct _NSRTFPriv { 
        void *reader; 
        char *rtfInput; 
        NSUInteger rtfInputLength; 
        NSUInteger rtfInputLocation; 
        NSUInteger rtfHeaderEndLocation; 
        NSInteger pushedChar; 
        NSInteger pushedClass; 
        NSInteger pushedMajor; 
        NSInteger pushedMinor; 
        NSInteger pushedParam; 
        BOOL pushedTextBuf[1024]; 
        NSInteger prevChar; 
        NSInteger bumpLine; 
        struct RTFFont {} *fontList; 
        struct RTFColor {} *colorList; 
        struct RTFStyle {} *styleList; 
        char *inputName; 
        char *outputName; 
        int (*ccb[5])(); 
        int (*readHook)(); 
        int (*msgProc)(); 
        int (*panicProc)(); 
        BOOL textBuf[1024]; 
        NSInteger textLen; 
        NSInteger tokenClass; 
        NSInteger major; 
        NSInteger minor; 
        NSInteger param; 
        NSInteger lineNum; 
        NSInteger linePos; 
        NSInteger groupState; 
    } _private;
    BOOL _textBufferContentsIsFat;
    BOOL _explicitCharSetEncountered;
    BOOL _isRTLDocument;
    NSInteger _readLimit;
    NSInteger _thumbnailLimit;
    BOOL _limitReached;
    BOOL _currentRowIsLast;
}


- (id)_initWithArchiver:(id)arg1;
- (id)initWithData:(id)arg1 archiver:(id)arg2;
- (id)initWithZippedRTFD:(id)arg1 archiver:(id)arg2;
- (void)dealloc;
- (NSInteger)cocoaVersion;
- (NSInteger)cocoaSubVersion;
- (void)setCocoaVersion:(NSInteger)arg1;
- (void)setCocoaSubVersion:(NSInteger)arg1;
- (float)floatCocoaVersion;
- (void)setReadOnly:(NSInteger)arg1;
- (void)setHyphenationFactor:(float)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDefaultTabInterval:(float)arg1;
- (float)defaultTabInterval;
- (void)read;
- (void)_insertAttachmentNamed:(id)arg1;

@end
