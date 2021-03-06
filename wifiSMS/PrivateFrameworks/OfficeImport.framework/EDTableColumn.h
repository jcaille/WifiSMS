/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString, EDResources;



@interface EDTableColumn : NSObject 
{
    EDResources *mResources;
    NSUInteger mHeaderRowDxfIndex;
    NSUInteger mTotalsRowDxfIndex;
    NSUInteger mDataAreaDxfIndex;
    EDString *mName;
    EDString *mUniqueName;
    EDString *mTotalsRowLabel;
}

+ (id)tableColumnWithResources:(id)arg1;

- (id)initWithResources:(id)arg1;
- (void)dealloc;
- (id)headerRowDxf;
- (void)setHeaderRowDxf:(id)arg1;
- (id)totalsRowDxf;
- (void)setTotalsRowDxf:(id)arg1;
- (id)dataAreaDxf;
- (void)setDataAreaDxf:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)uniqueName;
- (void)setUniqueName:(id)arg1;
- (id)totalsRowLabel;
- (void)setTotalsRowLabel:(id)arg1;
- (NSUInteger)headerRowDxfIndex;
- (void)setHeaderRowDxfIndex:(NSUInteger)arg1;
- (NSUInteger)totalsRowDxfIndex;
- (void)setTotalsRowDxfIndex:(NSUInteger)arg1;
- (NSUInteger)dataAreaDxfIndex;
- (void)setDataAreaDxfIndex:(NSUInteger)arg1;

@end
