#ifndef __GL_COMPONENT
#define __GL_COMPONENT

#define PI           3.14159
#define TWO_PI       PI*2.0
#define HALF_PI      PI/2.0

class CTargaImage;

class CGfxOpenGL
{
private:
    int m_windowWidth;
    int m_windowHeight;

    CTargaImage *m_textureOne;

    unsigned int m_textureObjectOne;
    unsigned int m_textureObjectTwo;

    float m_zPos;
    bool  m_zMoveNegative;

public:
    CGfxOpenGL();
    virtual ~CGfxOpenGL();

    bool Init();
    bool Shutdown();

    void SetupProjection(int width, int height);

    void Prepare(float dt);
    void Render();

    void DrawPlane();
};

#endif