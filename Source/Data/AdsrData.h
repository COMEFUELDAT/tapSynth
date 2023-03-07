/*
  ==============================================================================

    AdsrData.h
    Created: 7 Mar 2023 9:57:17am
    Author:  sasch

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class AdsrData : public juce::ADSR
{
public:
    void update(const float attack, const float decay, const float sustain, const float release);

private:
    juce::ADSR::Parameters adsrParams;
};
