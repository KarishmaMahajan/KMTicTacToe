//
//  ViewController.h
//  ticTacToe
//
//  Created by Student P_03 on 26/09/16.
//  Copyright © 2016 RD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    int numberOfTurns,currentPlayer;
    BOOL isGameFinished;
    NSArray *winningCombinations;
    NSMutableArray *currentState;
    
}
- (IBAction)buttonTap:(id)sender;


@end

