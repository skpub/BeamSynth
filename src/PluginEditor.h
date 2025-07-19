#pragma once

#include "PluginProcessor.h"

//==============================================================================
class BeamSynthAudioProcessorEditor final : public juce::AudioProcessorEditor
{
public:
    explicit BeamSynthAudioProcessorEditor (BeamSynthAudioProcessor&);
    ~BeamSynthAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    BeamSynthAudioProcessor& processorRef;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BeamSynthAudioProcessorEditor)
};
