#pragma once
#include <vector>
#include "../../Options.h"

#ifdef useBatteryIcon

#ifdef FT8XX
#include "../FT8XX/UIPrimitives.h"
#endif
#ifdef RA8875
#include "../RA8875/UIPrimitives.h"
#endif

class BatteryIcon
{
public:
	static Rectangle Draw(DriverBase &tft, Rectangle location, uint8_t pctCharged,
		std::vector<tColor> barColors, bool showPct = true, tColor borderColor = Color::White, tColor bgColor=Color::Black,
		eUITextFont pctFont = eUITextFont::AntiAliasFont27, tColor pctTextColor = Color::White,
		bool rightAlignment = true);

};

#endif