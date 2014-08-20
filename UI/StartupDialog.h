#ifndef __STARTUP_DIALOG_H__
#define __STARTUP_DIALOG_H__

#if HAS_UI

#include "../UmodelSettings.h"


class UIStartupDialog : public UIBaseDialog
{
public:
	UIStartupDialog(UmodelSettings& settings);

	bool Show();
	virtual void InitUI();

protected:
	UmodelSettings&	Opt;

	UICheckboxGroup*	OverrideGameGroup;
	UICombobox*			OverrideEngineCombo;
	UICombobox*			OverrideGameCombo;

	void FillGameList();
	void OnEngineChanged(UICombobox* sender, int value, const char* text);
};

#endif // HAS_UI

#endif // __STARTUP_DIALOG_H__
