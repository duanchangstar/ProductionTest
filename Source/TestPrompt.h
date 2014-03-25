#pragma once

class TestPrompt
{
public:
	TestPrompt(XmlElement *xe,int input_,int output_,bool &ok);
	~TestPrompt();

	void Setup(int samples_per_block,ToneGeneratorAudioSource &tone,uint32 &active_outputs, float &dc_offset, int &sawtooth, int &pulsate);

	bool ShowMeterWindow(Component *parent,ehw *dev,volatile float *peaks);

	String title;
	String text;
	int input;
	int output;
	int num_channels;
	int sample_rate;
	int wait_for_user;
	float output_amplitude_db;
	float min_input_db;
	float max_input_db;
	float _dc_offset;
	int _sawtooth;
	int _pulsate;
	
	enum
	{
		skip = 0,
		ok
	};
};
