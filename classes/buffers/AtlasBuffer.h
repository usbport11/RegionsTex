#ifndef atlasbufferH
#define atlasbufferH

#include "../image/Texture.h"

class MAtlasBuffer
{
protected:
	GLuint VerticiesBufferId;
	GLuint UVBufferId;
	int BufferSize;
	vector<glm::vec2> Verticies;
	vector<glm::vec2> UV;
	stTexture* pTexture;
	unsigned int BindNumber;
	unsigned int TextureSize[2];
	unsigned int TilesCount[2];
	glm::vec2 HalfPixelOffset;
	glm::vec2 TileSize;
public:
	MAtlasBuffer();
	~MAtlasBuffer();
	bool Initialize(stTexture* inpTexture, unsigned int TexSizeX, unsigned int TexSizeY, unsigned int TilesCountX, unsigned int TilesCountY);
	void SetBindNumber(unsigned char Number);
	bool AddData(glm::vec2 vLeftBottom, glm::vec2 vRightTop, glm::vec2 tLeftBottom, glm::vec2 tRightTop);
	bool AddFixedData(glm::vec2 vLeftBottom, glm::vec2 vRightTop, unsigned int TileNumberX, unsigned int TileNumberY);
	bool Dispose();
	void Draw();
	void Begin();
	void End();
	void Clear();
	void Close();
};

#endif
