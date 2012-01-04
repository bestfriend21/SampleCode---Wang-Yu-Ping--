//
//  NoiseMakerViewController.h
//  NoiseMaker
//
//  Created by John Abeel on 7/15/11.
//  Copyright 2011 Wakefield School. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface NoiseMakerViewController : UIViewController {
    IBOutlet UIButton *playPauseButton; //Toggles the playback state
    IBOutlet UISlider *volumeControl; //Sets the volume for the audio player
    IBOutlet UILabel *alertLabel; //The alert label showing the status of the loading of the file
    
    AVAudioPlayer *audioPlayer; //Plays the audio
}

@property (nonatomic, retain) IBOutlet UIButton *playPauseButton;
@property (nonatomic, retain) IBOutlet UISlider *volumeControl;
@property (nonatomic, retain) IBOutlet UILabel *alertLabel; 

@property (nonatomic, retain) AVAudioPlayer *audioPlayer;

- (IBAction)volumeDidChange:(id)slider; //handle the slider movement
- (IBAction)togglePlayingState:(id)button; //handle the button tapping

- (void)playAudio; //play the audio
- (void)pauseAudio; //pause the audio
- (void)togglePlayPause; //toggle the state of the audio

@end
