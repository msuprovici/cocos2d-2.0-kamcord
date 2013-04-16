/*
 *
 * Kamcord Zynga extensions
 *
 */

#import "Core/ZyngaKamcordProtocols.h"

@interface Kamcord (Zynga)

/*
 * Set the delegate to receive Zynga-specific callbacks from the push notification receive vew.
 */
+ (void)setPushNotifDelegate:(id <KamcordPushNotificationDelegate>)pushNotifDelegate;

/*
 * Get the push notification delegate.
 */
+ (id <KamcordPushNotificationDelegate>)pushNotifDelegate;

/*
 * Show the Zynga-skinned and customized share view.
 */
+ (void)showZyngaShareViewInViewController:(UIViewController *)parentViewController;

/*
 * Show the autopop view for when the user scores a high score.
 */
+ (void)showAutoPopViewInViewController:(UIViewController *)parentViewController;

/*
 * Show the push notification receive view for when the PN is received with a video ID.
 */
+ (void)showVideoPushNotificationReceiverViewInParentViewController:(UIViewController *)parentViewController
                                                         withParams:(NSDictionary *)params;

@end
