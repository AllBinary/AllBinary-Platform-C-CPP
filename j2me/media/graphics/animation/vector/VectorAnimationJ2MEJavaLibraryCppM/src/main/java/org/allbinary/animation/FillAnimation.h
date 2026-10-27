
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_FILLANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_FILLANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class BasicColor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/IndexedAnimation.h"
class AnimationBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
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

    /*protected*/ public: void paint(Graphics* g);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_FILLANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_FILLANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_FILLANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehavior.h")
#include "org/allbinary/animation/AnimationBehavior.h"
#endif

        #endif
    
