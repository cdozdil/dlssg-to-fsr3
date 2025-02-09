#pragma once

namespace Util
{
	void InitializeLog();
	bool GetSetting(const wchar_t *Key, bool DefaultValue);
	std::optional<bool> FSRDebugViewStatus();
}
