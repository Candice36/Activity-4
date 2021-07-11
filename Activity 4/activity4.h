#pragma once
#include <string>

class string_to_int_TryParse

{
	static void Main()
	{
		string;  str_conv = "101";
			int int_conv;
			bool flg_con = Int32.TryParse(str_conv, out int_conv);

			Console.Writeline("Converted number by TryParse =" + int_conv);

			Console.ReadLine();
		
	}

		
};

