#include "config.h"

// CBA to make proper atm, it's 03:42 right now.
// For now just stores config values don't mind it too much
//
// (FYI THIS IS A HORRID SOLUTION BUT FUNCTIONS) 

namespace Config {
	bool esp = false;
	bool glow = false;
	bool showHealth = false;
	bool teamCheck = false;
	bool espFill = false;
	bool Night = false;

	float espThickness = 1.0f;
	float espFillOpacity = 0.5f;
	ImVec4 espColor = ImVec4(1, 0, 0, 1);
	ImVec4 NightColor = ImVec4(0.1, 0.1, 0.1, 1);

}
