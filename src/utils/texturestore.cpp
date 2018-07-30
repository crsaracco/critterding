// #include "common/be_image.h"
#include "texturestore.h"

std::shared_ptr<BeTexture2DResource> Texturestore::load(const std::string& filename)
{
// 	if ( m_resources[filename] )
// 	{
// 		return m_resources[filename];
// 	}
// 	else
// 	{
		std::shared_ptr<BeTexture2DResource> t( new BeTexture2DResource(filename.c_str()) );
// 		m_resources[filename]=t;
		return t;
// 	}
}


