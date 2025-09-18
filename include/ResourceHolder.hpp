#ifndef TEXTURE_HOLDER_HPP
#define TEXTURE_HOLDER_HPP
#include<map>
#include<SFML/Graphics.hpp>
#include<memory>
namespace Textures
{
	enum ID
	{
		Lanscape, Airplane, Missile
	};
}
template<typename Resource, typename Identifier>
class ResourceHolder
{
public:
	void load(Identifier id, std::string& filename);
	template<typename Parameter>
	void load(Identifier id, const std::string& filename, const Parameter& typeParam);
	Resource& get(Identifier id);
	const Resource& get(Identifier id) const;

private:
	std::map<Identifier, std::unique_ptr<Resource>> mResourceMap;
};
#include "ResourceHolder.inl"
#endif