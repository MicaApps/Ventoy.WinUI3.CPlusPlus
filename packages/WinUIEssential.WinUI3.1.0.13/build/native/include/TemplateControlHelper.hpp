#pragma once
template<typename Self>
struct TemplateControlHelper
{
	TemplateControlHelper()
	{
		using ProjectionType = Self::class_type;
		static_cast<Self*>(this)->DefaultStyleKey(winrt::box_value(winrt::xaml_typename<ProjectionType>()));
	}
};
