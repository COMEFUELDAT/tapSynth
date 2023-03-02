/*
  ==============================================================================

    SynthSound.h
    Created: 2 Mar 2023 11:51:38am
    Author:  sasch

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote(int midiNitoNumber) override { return true;  }
    bool appliesToChannel(int midiChannel) override { return true;  }
};