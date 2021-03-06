/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, EDWorksheet;



@interface EDMergedCells : NSObject 
{
    EDWorksheet *mWorksheet;
    NSMutableArray *mMergedCells;
}


- (id)initWithWorksheet:(id)arg1;
- (void)dealloc;
- (NSUInteger)count;
- (id)mergedCellAtIndex:(NSUInteger)arg1;
- (void)addMergedCell:(id)arg1;
- (void)insertMergedCell:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)worksheet;

@end
