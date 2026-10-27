
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_ANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_ANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GL;
class Graphics;
class BasicColor;
class BasicColorFactory;
class BasicColorSetUtil;
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Animation
            : public virtual Object
        , public AnimationInterface, public OpenGLSurfaceChangedInterface {

    /*protected*/ public: BasicColorSetUtil* basicSetColorUtil;

    /*protected*/ public: BasicColor* basicColor;

    /*protected*/ public: int32_t colorP= 0;

    /*protected*/ public: BasicColor* changeBasicColorP;

    /*protected*/ public: int32_t changeColorP= 0;

    public: int32_t alphaP= 0;

public: Animation();

    public: void setAlpha(int32_t alpha);

                //@Throws(Exception.constructor)
            
    public: void nextFrame();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z);

    public: bool isThreed();

    public: BasicColor* getBasicColorP();

    public: void setBasicColorP(BasicColor* basicColor);

    public: void setBackgroundBasicColorP(BasicColor* basicColor);

    public: BasicColor* getChangeBasicColor();

    public: void changeBasicColor(BasicColor* basicColor);

    public: int32_t getChangeColor();

    public: int32_t getColor();

    public: void setScale(float scaleX, float scaleY);

    public: void setMaxScale(float maxScaleX, float maxScaleY);

                //@Throws(Exception.constructor)
            
    public: void set(GL* gl);

    public: void setDx(int32_t dx);

    public: int32_t getDx();

    public: void setDy(int32_t dy);

    public: int32_t getDy();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_ANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_ANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_ANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL.h>)
#include <javax/microedition/khronos/opengles/GL.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorSetUtil.h>)
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>)
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>
#endif
#if __has_include("org/allbinary/animation/AnimationInterface.h")
#include "org/allbinary/animation/AnimationInterface.h"
#endif

        #endif
    
