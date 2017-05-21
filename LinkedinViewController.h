//
//  LinkedinViewController.h
//  Mole
//
//  Created by Chris Mitchell on 9/27/15.
//  Copyright (c) 2015 Chris Mitchell. All rights reserved.
//

#import <UIKit/UIKit.h>


//#import <Parse/Parse.h>

#import <linkedin-sdk/LISDK.h>
#import "RegisterTableViewController.h"

#import "LoginViewController.h"



#import <Firebase/Firebase.h>




@interface LinkedinViewController : UIViewController

//@property (nonatomic) PFUser *currentUser;




@property (nonatomic, strong) NSString *linked_idval;



-(IBAction)sync:(id)sender;


//-(IBAction)execute:(id)sender;


-(IBAction)syncTwo:(id)sender;




@end
