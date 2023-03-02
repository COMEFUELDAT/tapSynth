/*
  ==============================================================================

    SynthVoice.cpp
    Created: 2 Mar 2023 11:51:22am
    Author:  sasch

  ==============================================================================
*/

#include "SynthVoice.h"

bool SynthVoice::canPlaySound(juce::SynthesiserSound* sound)
{
    return dynamic_cast<juce::SynthesiserSound*>(sound) != nullptr;
}

void SynthVoice::startNote(int midiNoteNumber, float velocity, juce::SynthesiserSound* sound, int currentPitchWheelPosition)
{

}

void SynthVoice::stopNote(float velocity, bool allowTailOff)
{

}

void SynthVoice::controllerMoved(int conrollerNumber, int newControllerValue)
{

}

void SynthVoice::pitchWheelMoved(int newPitchWheelValue)
{

}

void SynthVoice::renderNextBlock(juce::AudioBuffer< float >& outputBuffer, int startSample, int numSample)
{

}