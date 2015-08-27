//
//  CashBackCustomAlert.m
//  Koolkat
//
//  Created by 1Store on 8/11/15.
//  Copyright (c) 2015 Swipr. All rights reserved.
//

#import "CashBackCustomAlert.h"
#import "SIAlertView.h"
#import "StringConstant.h"


@implementation CashBackCustomAlert


+ (void)showAlertViewCashBack:(NSString *)title message:(NSString *)message{
  //  [[SIAlertView appearance] setViewBackgroundColor:[UIColor colorWithRed:0.891 green:0.936 blue:0.978 alpha:1.000]];

  
    SIAlertView *alertView = [[SIAlertView alloc] initWithTitle:@"" andMessage:message];
   [alertView addButtonWithTitle:@"Got It"
                             type:SIAlertViewButtonTypeCancel
                          handler:^(SIAlertView *alertView) {
                              NSLog(@"Cancel Clicked");
                          }];
  /*
   [alertView addButtonWithTitle:@"OK"
                             type:SIAlertViewButtonTypeDefault
                          handler:^(SIAlertView *alertView) {
                              NSLog(@"OK Clicked");
                              
                           }];*/
    
    alertView.titleColor = [UIColor grayColor];
    alertView.messageColor = ThemeColor;
   // alertView.buttonColor = ThemeColor;
    alertView.cancelButtonColor = [UIColor whiteColor];
    //alertView.destructiveButtonColor = ThemeColor;

    alertView.cornerRadius = 10;
    alertView.buttonFont = [UIFont boldSystemFontOfSize:15];
    alertView.transitionStyle = SIAlertViewTransitionStyleBounce;
    
    alertView.willShowHandler = ^(SIAlertView *alertView) {
        NSLog(@"%@, willShowHandler2", alertView);
    };
    alertView.didShowHandler = ^(SIAlertView *alertView) {
        NSLog(@"%@, didShowHandler2", alertView);
    };
    alertView.willDismissHandler = ^(SIAlertView *alertView) {
        NSLog(@"%@, willDismissHandler2", alertView);
    };
    alertView.didDismissHandler = ^(SIAlertView *alertView) {
        NSLog(@"%@, didDismissHandler2", alertView);
    };
    
    [alertView show];



}


+(void)customAlert{
    
#if TEST_UIAPPEARANCE
    [[SIAlertView appearance] setMessageFont:[UIFont systemFontOfSize:13]];
    [[SIAlertView appearance] setTitleColor:[UIColor greenColor]];
    [[SIAlertView appearance] setMessageColor:[UIColor purpleColor]];
    [[SIAlertView appearance] setCornerRadius:12];
    [[SIAlertView appearance] setShadowRadius:20];
    [[SIAlertView appearance] setViewBackgroundColor:[UIColor colorWithRed:0.891 green:0.936 blue:0.978 alpha:1.000]];
    [[SIAlertView appearance] setButtonColor:[UIColor greenColor]];
    [[SIAlertView appearance] setCancelButtonColor:[UIColor redColor]];
    [[SIAlertView appearance] setDestructiveButtonColor:[UIColor blueColor]];
    
    [[SIAlertView appearance] setDefaultButtonImage:[[self imageWithColor:[UIColor greenColor]] resizableImageWithCapInsets:UIEdgeInsetsMake(15,5,14,6)] forState:UIControlStateNormal];
    [[SIAlertView appearance] setDefaultButtonImage:[[self imageWithColor:[UIColor greenColor]] resizableImageWithCapInsets:UIEdgeInsetsMake(15,5,14,6)] forState:UIControlStateHighlighted];
    /*
    [[SIAlertView appearance] setCancelButtonImage:[[UIImage imageNamed:@"button-cancel"] resizableImageWithCapInsets:UIEdgeInsetsMake(15,5,14,6)] forState:UIControlStateNormal];
    [[SIAlertView appearance] setCancelButtonImage:[[UIImage imageNamed:@"button-cancel-d"] resizableImageWithCapInsets:UIEdgeInsetsMake(15,5,14,6)] forState:UIControlStateHighlighted];
     */
    [[SIAlertView appearance] setCancelButtonImage:[[self imageWithColor:[UIColor greenColor]]resizableImageWithCapInsets:UIEdgeInsetsMake(15,5,14,6)] forState:UIControlStateNormal];
    [[SIAlertView appearance] setCancelButtonImage:[[self imageWithColor:[UIColor greenColor]] resizableImageWithCapInsets:UIEdgeInsetsMake(15,5,14,6)] forState:UIControlStateHighlighted];

    [[SIAlertView appearance] setDestructiveButtonImage:[[self imageWithColor:[UIColor greenColor]]] resizableImageWithCapInsets:UIEdgeInsetsMake(15,5,14,6)] forState:UIControlStateNormal];
    [[SIAlertView appearance] setDestructiveButtonImage:[[self imageWithColor:[UIColor greenColor]] resizableImageWithCapInsets:UIEdgeInsetsMake(15,5,14,6)] forState:UIControlStateHighlighted];
#endif
}




@end
