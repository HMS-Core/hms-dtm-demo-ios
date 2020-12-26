/*
 * Copyright 2020. Huawei Technologies Co., Ltd. All rights reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/


#import "ViewController.h"
#import <HiAnalytics/HiAnalytics.h>
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextField *eventName;
@property (weak, nonatomic) IBOutlet UITextField *customKey;
@property (weak, nonatomic) IBOutlet UITextField *customValue;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)executeAction:(id)sender {
    NSMutableDictionary *params = [[NSMutableDictionary alloc] init];
    [params setObject:@"9.99" forKey:@"price"];
    [params setObject:@"100L" forKey:@"quantity"];
    [params setObject:@"CNY" forKey:@"currency"];
    if (self.customKey.text.length >0 &&
        self.customValue.text.length >0) {
        [params setObject:self.customValue.text forKey:self.customKey.text];
    }
    [HiAnalytics onEvent:self.eventName.text setParams:params];
}

@end
