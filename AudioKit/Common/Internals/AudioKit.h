//
//  AudioKit.h
//  AudioKit
//
//  Created by Aurelius Prochazka on 10/4/15.
//  Copyright © 2015 AudioKit. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for AudioKit.
FOUNDATION_EXPORT double AudioKitVersionNumber;

//! Project version string for AudioKit.
FOUNDATION_EXPORT const unsigned char AudioKitVersionString[];

// Analysis
#import "AKAmplitudeTrackerAudioUnit.h"
#import "AKFrequencyTrackerAudioUnit.h"

// Effects
#import "AKOperationEffectAudioUnit.h"

// Effects / Delay
#import "AKVariableDelayAudioUnit.h"

// Effects / Distortion
#import "AKBitCrusherAudioUnit.h"
#import "AKClipperAudioUnit.h"
#import "AKTanhDistortionAudioUnit.h"

// Effects / Envelopes
#import "AKAmplitudeEnvelopeAudioUnit.h"

// Efffects / Filters
#import "AKAutoWahAudioUnit.h"
#import "AKBandPassButterworthFilterAudioUnit.h"
#import "AKBandRejectButterworthFilterAudioUnit.h"
#import "AKCombFilterAudioUnit.h"
#import "AKDCBlockAudioUnit.h"
#import "AKEqualizerFilterAudioUnit.h"
#import "AKHighPassButterworthFilterAudioUnit.h"
#import "AKHighShelfParametricEqualizerFilterAudioUnit.h"
#import "AKLowPassButterworthFilterAudioUnit.h"
#import "AKLowShelfParametricEqualizerFilterAudioUnit.h"
#import "AKModalResonanceFilterAudioUnit.h"
#import "AKMoogLadderAudioUnit.h"
#import "AKPeakingParametricEqualizerFilterAudioUnit.h"
#import "AKFormantFilterAudioUnit.h"
#import "AKRolandTB303FilterAudioUnit.h"
#import "AKStringResonatorAudioUnit.h"
#import "AKThreePoleLowpassFilterAudioUnit.h"
#import "AKToneComplementFilterAudioUnit.h"
#import "AKToneFilterAudioUnit.h"

// Effects / Reverb
#import "AKChowningReverbAudioUnit.h"
#import "AKCostelloReverbAudioUnit.h"
#import "AKFlatFrequencyResponseReverbAudioUnit.h"

// Generators
#import "AKOperationGeneratorAudioUnit.h"

// Generators / Oscillators
#import "AKFMOscillatorAudioUnit.h"
#import "AKOscillatorAudioUnit.h"
#import "AKSawtoothOscillatorAudioUnit.h"
#import "AKSquareWaveOscillatorAudioUnit.h"
#import "AKTriangleOscillatorAudioUnit.h"

//Generators / Physical Models
#import "AKPluckedStringAudioUnit.h"
#import "AKDripAudioUnit.h"

#import "AKPhaseLockedVocoderAudioUnit.h"

// Generators / Noise
#import "AKPinkNoiseAudioUnit.h"
#import "AKWhiteNoiseAudioUnit.h"

// Mixing
#import "AKBalancerAudioUnit.h"
#import "AKPannerAudioUnit.h"

// Testing
#import "AKTesterAudioUnit.h"

// Plots
#import "EZAudio.h"