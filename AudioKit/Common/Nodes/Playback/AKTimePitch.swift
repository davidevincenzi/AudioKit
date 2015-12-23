//
//  AKTimePitch.swift
//  AudioKit
//
//  Autogenerated by scripts by Aurelius Prochazka. Do not edit directly.
//  Copyright (c) 2015 Aurelius Prochazka. All rights reserved.
//

import AVFoundation

/** AudioKit version of Apple's TimePitch Audio Unit */
public struct AKTimePitch: AKNode {
    
    private let timePitchAU = AVAudioUnitTimePitch()
    public var avAudioNode: AVAudioNode
    
    /** Rate (rate) ranges from 0.03125 to 32.0 (Default: 1.0) */
    public var rate: Float = 1.0 {
        didSet {
            if rate < 0.03125 {
                rate = 0.03125
            }
            if rate > 32.0 {
                rate = 32.0
            }
            timePitchAU.rate = rate
        }
    }
    
    /** Pitch (Cents) ranges from -2400 to 2400 (Default: 1.0) */
    public var pitch: Float = 1.0 {
        didSet {
            if pitch < -2400 {
                pitch = -2400
            }
            if pitch > 2400 {
                pitch = 2400
            }
            timePitchAU.pitch = pitch
        }
    }
    
    /** Overlap (generic) ranges from 3.0 to 32.0 (Default: 8.0) */
    public var overlap: Float = 8.0 {
        didSet {
            if overlap < 3.0 {
                overlap = 3.0
            }
            if overlap > 32.0 {
                overlap = 32.0
            }
            timePitchAU.overlap = overlap
        }
    }

    
    /** Initialize the time pitch node */
    public init(
        _ input: AKNode,
        rate: Float = 1.0,
        pitch: Float = 1.0,
        overlap: Float = 8.0) {
            
        self.rate = rate
        self.pitch = pitch
        self.overlap = overlap
        
        self.avAudioNode = timePitchAU
        AKManager.sharedInstance.engine.attachNode(self.avAudioNode)
        AKManager.sharedInstance.engine.connect(input.avAudioNode, to: self.avAudioNode, format: AKManager.format)
    }
}