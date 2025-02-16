//
// Created by cpasjuste on 25/11/16.
//

#ifndef C2DUI_VIDEO_H_
#define C2DUI_VIDEO_H_

namespace c2dui {

    class C2DUIVideo : public c2d::C2DTexture {

    public:

        C2DUIVideo(UiMain *ui, uint8_t **pixels, int *pitch, const c2d::Vector2i &size,
                   const c2d::Vector2i &aspect = {4, 3}, c2d::Texture::Format format = c2d::Texture::Format::RGB565);

        virtual void updateScaling(bool vertical = false, bool flip = false);

        c2d::Vector2i aspect;

    private:

        UiMain *ui = nullptr;
    };
}

#endif //C2DUI_VIDEO_H_
