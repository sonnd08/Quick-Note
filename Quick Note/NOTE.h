#pragma once
#include "stdafx.h"

class NOTE
{
public:
	long Id;
	vector<wstring> Tag;
	wstring Content;
public:

	NOTE()
	{
	}
	NOTE(long id, vector<wstring> tag, wstring content)
	{
		Id = id;
		Tag = tag;
		Content = content;
	}
	~NOTE()
	{
	}
};

