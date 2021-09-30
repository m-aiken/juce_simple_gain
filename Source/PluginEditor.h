/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class SimpleGainAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    SimpleGainAudioProcessorEditor (SimpleGainAudioProcessor&);
    ~SimpleGainAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider mGainSlider;
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SimpleGainAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SimpleGainAudioProcessorEditor)
};
