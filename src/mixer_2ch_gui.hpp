#ifndef MIXER_2CH_GUI_H
#define MIXER_2CH_GUI_H

class Mixer2ChGUI: public UI<Mixer2ChGUI, GtkUI<true>>
{
	public:
		Mixer2ChGUI(const std::string& URI);
		void port_event(uint32_t port, uint32_t buffer_size, uint32_t format, const void* buffer);

	private:
		LabeledDial* m_dialGain;
		LabeledDial* m_dialVolume1;
		LabeledDial* m_dialVolume2;
};

#endif
