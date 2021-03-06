//
//  CJDragDropView.h
//  CJCrashTools
//
//  Created by ChiJinLian on 2017/9/10.
//  Copyright © 2017年 ChiJinLian. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol CJDragDropViewDelegate <NSObject>
- (void)dragDropViewFileLists:(NSArray*)fileLists;
@end

@interface CJDragDropView : NSView
@property (nonatomic, weak) id<CJDragDropViewDelegate> delegate;
@end
