/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardKeyplaneTransition : NSObject {
    id /* block */  _completionBlock;
    double  _currentProgress;
    CADisplayLink * _displayLink;
    UIKBTree * _end;
    UIView * _endView;
    double  _finalTransitionStartTime;
    double  _finishDuration;
    double  _finishProgress;
    bool  _initiallyAtEnd;
    double  _liftOffProgress;
    UIKBTree * _start;
    UIView * _startView;
    <UIKeyboardKeyplaneTransitionDelegate> * _transitionDelegate;
    NSMutableArray * _transitionViews;
}

@property (copy) id /* block */ completionBlock;
@property (nonatomic, readonly) double endHeight;
@property (nonatomic) bool initiallyAtEnd;
@property (nonatomic, readonly) double startHeight;
@property (nonatomic) <UIKeyboardKeyplaneTransitionDelegate> *transitionDelegate;

- (void)addTransitionView:(id)arg1 startFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 endFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)commitTransitionRebuild;
- (id /* block */)completionBlock;
- (void)dealloc;
- (double)endHeight;
- (void)finalizeTransition;
- (void)finishWithProgress:(double)arg1 completionBlock:(id /* block */)arg2;
- (bool)initiallyAtEnd;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)removeAllAnimations;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setInitiallyAtEnd:(bool)arg1;
- (void)setTransitionDelegate:(id)arg1;
- (double)startHeight;
- (id)transitionDelegate;
- (void)transitionToFinalState:(id)arg1;
- (void)updateWithProgress:(double)arg1;

@end
