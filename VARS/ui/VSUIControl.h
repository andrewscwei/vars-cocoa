/**
 *  VARSobjc
 *  (c) VARIANTE <http://variante.io>
 *
 *  This software is released under the MIT License:
 *  http://www.opensource.org/licenses/mit-license.php
 */

#import <UIKit/UIKit.h>

#import "VSUIViewUpdate.h"

#pragma mark - INTERFACE

/**
 *  VARS UIControl wrapper class.
 */
@interface VSUIControl : UIControl <VSUIViewUpdateDelegate>

#pragma mark - PROPERTIES
#pragma mark - Behaviors

/**
 *  Speicifies whether this button ignores touch events so they can be passed to the next object in the
 *  responder chain.
 */
@property (nonatomic) BOOL shouldRedirectTouchesToNextResponder;

#pragma mark - INSTANCE METHODS
#pragma mark - Lifecycle

/**
 *  Automatically invoked on init, do not call this manually. If overridden, invoke the predecessor's didInit
 *  method at the end.
 */
- (void)didInit;

/**
 *  Automatically invoked on dealloc, do not call this manually. If overridden, invoke the predecessor's willDealloc
 *  method at the end.
 */
- (void)willDealloc;

@end