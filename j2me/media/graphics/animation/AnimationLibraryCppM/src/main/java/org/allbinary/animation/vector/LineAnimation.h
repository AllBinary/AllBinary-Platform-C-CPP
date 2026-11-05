
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
#include <org/allbinary/animation/Animation.h>
class BasicColor;
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>
#include <org/allbinary/layer/PositionInterface.h>
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LineAnimation: public Animation, public virtual ColorCompositeInterface, public virtual PositionInterface {

    private: std::vector<std::vector<int32_t>> newLine;

    private: std::vector<std::vector<int32_t>> tempLine;

    private: std::vector<std::vector<int32_t>> line;

public: LineAnimation(BasicColor* basicColor);

    public: void init(int32_t x, int32_t y);

    public: void setPosition(int32_t x, int32_t y, int32_t z);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void nextFrame();

    public: BasicColor* getBasicColorP();

    public: void setBasicColorP(BasicColor* basicColor);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorCompositeInterface.h>)
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>
#endif
#if __has_include(<org/allbinary/layer/PositionInterface.h>)
#include <org/allbinary/layer/PositionInterface.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif

        #endif
    
