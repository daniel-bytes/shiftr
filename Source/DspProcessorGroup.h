#ifndef __DSPPROCESSORGROUP_H__
#define __DSPPROCESSORGROUP_H__

#include "../JuceLibraryCode/JuceHeader.h"
#include "PointerArray.h"
#include "DspProcessor.h"

class DspProcessorGroup
	: public DspProcessor
{
public:
	DspProcessorGroup()
	{
	}

public:
	virtual void init(double sampleRate, int numInputChannels, int numOutputChannels);

public:
	virtual float process(float input, int channel);

	virtual void parameterChanged(const Parameter *value);

	virtual PointerArray<ParameterListener> getChildListeners();

protected:
	OwnedPointerArray<DspProcessor> processors;
};

#endif //__DSPPROCESSORGROUP_H__