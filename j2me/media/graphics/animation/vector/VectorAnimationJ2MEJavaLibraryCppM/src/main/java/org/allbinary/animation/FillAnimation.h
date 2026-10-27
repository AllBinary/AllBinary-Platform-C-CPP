
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_FILLANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_FILLANIMATION_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"

class FillAnimation: public IndexedAnimation {

    private: std::vector<int32_t> pixelBuffer;

    private: int32_t width;

    private: int32_t height;

public: FillAnimation(std::vector<int32_t> pixelBuffer, int32_t width, int32_t height, AnimationBehavior* animationBehavior);

    public: void setBasicColorP(BasicColor* basicColor);

    public: void changeBasicColor(BasicColor* basicColor);

    public: void setAlpha(int32_t alpha);

    public: void setScale(float scaleX, float scaleY);

    public: void setMaxScale(float maxScaleX, float maxScaleY);

    private: void updateModifiers();

    protected: void paint(Graphics* g);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_FILLANIMATION_H
