/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection;



@interface EDLink : NSObject 
{
    NSInteger mType;
    EDCollection *mExternalNames;
}

+ (id)linkWithType:(NSInteger)arg1;

- (id)initWithType:(NSInteger)arg1;
- (void)dealloc;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (id)externalNames;

@end
