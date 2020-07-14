
#ifndef _ThemeColor_H_
#define _ThemeColor_H_
#include <iostream>
#include <vector>
#include <string>
//#include <windef.h>


class ThemeColor
{
private:
	std::vector <std::string> ColorList;
public:
	ThemeColor() 
	{
		ColorList = { "#3F51B5",
                       "#009688",
                       "#FF5722",
                       "#607D8B",
                       "#FF9800",
                       "#9C27B0",
                       "#2196F3",
                       "#EA676C",
                       "#E41A4A",
                       "#5978BB",
                       "#018790",
                       "#0E3441",
                       "#00B0AD",
                       "#721D47",
                       "#EA4833",
                       "#EF937E",
                       "#F37521",
                       "#A12059",
                       "#126881",
                       "#8BC240",
                       "#364D5B",
                       "#C7DC5B",
                       "#0094BC",
                       "#E4126B",
                       "#43B76E",
                       "#7BCFE9",
                       "#B71C46" };
		
	}
	~ThemeColor() {}

	std::vector <std::string> Get_List()
	{
		return ColorList;
	}


	 System::Drawing::Color ChangeColorBrightness(System::Drawing::Color color, double correctionFactor)
	{
		double red = color.R;
		double green = color.G;
		double blue = color.B;

		//If correction factor is less than 0, darken color.
		if (correctionFactor < 0)
		{
			correctionFactor = 1 + correctionFactor;
			red *= correctionFactor;
			green *= correctionFactor;
			blue *= correctionFactor;
		}
		//If correction factor is greater than zero, lighten color.
		else
		{
			red = (255 - red) * correctionFactor + red;
			green = (255 - green) * correctionFactor + green;
			blue = (255 - blue) * correctionFactor + blue;
		}

		return System::Drawing::Color::FromArgb(color.A, (unsigned char)red, (unsigned char)green, (unsigned char)blue);
	}

};


#endif // !_ThemeColor_H_






