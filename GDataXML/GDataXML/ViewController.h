//
//  ViewController.h
//  GDataXML
//
//  Created by Li Zhe on 10/3/16.
//  Copyright © 2016 SH10. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextView *textView;

- (IBAction)startXMLParsing:(id)sender;
- (IBAction)startHTMLParsing;
- (IBAction)runXPathTests:(id)sender;
@end

