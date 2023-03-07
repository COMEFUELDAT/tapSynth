/*
  ==============================================================================

    FilterData.h
    Created: 7 Mar 2023 10:34:30am
    Author:  sasch

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class FilterData
{
public:
    void prepareToPlay(double sampleRate, int samplesPerBlock, int numChannels);
    void process(juce::AudioBuffer<float>& buffer);
    void updateParameters(const float modulator, const int filterType, const float frequency, const float resonance);
    void reset();

private:
    juce::dsp::StateVariableTPTFilter<float> filter;
    bool isPrepared{ false };
};
