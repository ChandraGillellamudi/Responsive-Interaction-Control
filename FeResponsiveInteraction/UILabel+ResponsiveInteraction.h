//
//  UILabel+ResponsiveInteraction.h
//  FeResponsiveInteraction
//
//  Created by Nghia Tran on 6/27/14.
//  Copyright (c) 2014 Fe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (ResponsiveInteraction) <UIGestureRecognizerDelegate>

// ACtive
-(void) activeResponsiveInteraction;

// Disable
-(void) disableResponsiveInteraction;

-(void) setGlobleResponsiveInteractionWithView:(UIView *) view;

@end
