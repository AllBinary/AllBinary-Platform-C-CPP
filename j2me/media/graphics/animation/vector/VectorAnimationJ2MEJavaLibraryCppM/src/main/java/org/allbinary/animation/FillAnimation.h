
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_FILLANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_FILLANIMATION_H

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IndexedAnimation.h"
#include "AnimationBehavior.h"

class FillAnimation: public IndexedAnimation {
        

    private: const pixelBuffer: std::vector<int32_t>;

    private: const width: int32_t;

    private: const height: int32_t;

public constructor (std::vector<int32_t> pixelBuffer, int32_t width, int32_t height, AnimationBehavior animationBehavior);

    public setBasicColorP(BasicColor basicColor);

    public changeBasicColor(BasicColor basicColor);

    public setAlpha(int32_t alpha);

    public setScale(float scaleX, float scaleY);

    public setMaxScale(float maxScaleX, float maxScaleY);

    updateModifiers();

    paint(Graphics g);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_FILLANIMATION_H
