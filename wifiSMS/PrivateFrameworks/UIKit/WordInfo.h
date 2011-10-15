/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_3_2

#import "UIKit-Structs.h"
#import "CandWord.h"

@class CandWordString;

@interface WordInfo : CandWord {
	CandWordString* _yomi;
	int _inConnection;
	int _outConnection[10];
	unsigned char _readingLens[10];
	unsigned short _lcAttrs[10];
	unsigned short _rcAttrs[10];
	unsigned _trievalues[10];
	int _outConnections;
	int _weight;
}
-(id)initWithWord:(id)word withYomi:(id)yomi inConnection:(int)connection outConnection:(int)connection4 weight:(int)weight;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(void)addOutConnection:(int)connection;
-(void)addWeight:(int)weight;
-(id)yomi;
-(const char*)yomiUTF8String;
-(int)inConnection;
-(int*)anOutConnection;
-(int)anOutConnections;
-(void)getInConnection:(int*)connection outConnection:(int**)connection2 andOutConnections:(int*)connections;
-(int)weight;
-(void)setWeight:(int)weight;
-(char*)readingLens;
-(unsigned short*)lcAttrs;
-(unsigned*)trievalues;
-(unsigned short*)rcAttrs;
@end

#endif