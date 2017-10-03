#include "BatteryIcon.h"
#ifdef useBatteryIcon

Rectangle BatteryIcon::Draw(DriverBase &tft, Rectangle location, uint8_t pctCharged,
	std::vector<tColor> barColors, bool showPct, tColor borderColor, tColor bgColor,
	eUITextFont pctFont, tColor pctTextColor,
	bool rightAlignment)
{
	// First draw the box, depending on the shift we move it left or right
	Rectangle mainBox;
	mainBox.x1 = location.width / 5 + location.x1;
	mainBox.x2 = location.x2 - (location.width / 5);
	mainBox.y1 = location.center().y - location.height / 5;
	mainBox.y2 = location.center().y + location.height / 5;
	mainBox.update();
	Rectangle connector;
	connector.x1 = location.x2 - (location.width / 4);
	connector.x2 = connector.x1 + (location.width / 9);
	connector.y1 = mainBox.center().y - mainBox.height / 4;
	connector.y2 = mainBox.center().y + mainBox.height / 4;
	connector.update();
	if (!rightAlignment)
	{
		connector.x1 -= mainBox.width - connector.width;
		connector.x2 -= mainBox.width - connector.width;
	}	
	// Now we actually draw them	
	tft.fillRoundRect(mainBox.x1, mainBox.y1, mainBox.width, mainBox.height, 3, borderColor);
	tft.fillRoundRect(connector.x1, connector.y1, connector.width, connector.height, 3, borderColor);
	tft.fillRoundRect(mainBox.x1 + 3, mainBox.y1 + 3, mainBox.width - 6, mainBox.height - 6, 3, bgColor);
	//Now time for the pct bars
	uint16_t barWidth = (mainBox.width/ barColors.size())-6;
	uint8_t numBarsToShow = ((float)(pctCharged / 100)*barColors.size()) + 1;
	if (numBarsToShow > barColors.size())
		numBarsToShow = barColors.size();
	numBarsToShow=Max(1, numBarsToShow);
	uint16_t startX = mainBox.x1 + 3;
	uint16_t barSize = barWidth - 3;
	for (int x = 0; x < numBarsToShow; x++)
	{
		tft.fillRect(startX + ((barWidth + 6)*x), mainBox.y1 + 3, barWidth, mainBox.height - 6, barColors[x]);
	}

	if (showPct)
	{
		char buf[8];
		sprintf(buf, "%d\%%", pctCharged);	
		std::string pString(buf);
		UIPrimitives::Text(tft, pctTextColor, 255, location.center().x, mainBox.y2 + 6, pctFont, true, pString.c_str());
	}
}

#endif