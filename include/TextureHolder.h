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

class TextureHolder
{
public:
	void load(Textures::ID id, std::string& filename);
	sf::Texture& get(Textures::ID id);
	const sf::Texture& get(Textures::ID id) const;

private:
	std::map<Textures::ID, std::unique_ptr<sf::Texture>> mTextureMap;
};
#endif