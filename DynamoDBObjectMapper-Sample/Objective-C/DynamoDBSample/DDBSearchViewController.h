/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import <UIKit/UIKit.h>
@class AWSDynamoDBPaginatedOutput;

@interface DDBSearchViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>

@property (weak, nonatomic) IBOutlet UIPickerView *gameTitlePickerView;
@property (weak, nonatomic) IBOutlet UISegmentedControl *sortSegControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *orderSegControl;
@property (weak, nonatomic) IBOutlet UIStepper *rangeStepper;
@property (weak, nonatomic) IBOutlet UILabel *rangeConditionLabel;

@property (strong, nonatomic) AWSDynamoDBPaginatedOutput *paginatedOutput;
- (IBAction)searchBtnPressed:(id)sender;
- (IBAction)rangeStepperChanged:(UIStepper *)sender;

@end
