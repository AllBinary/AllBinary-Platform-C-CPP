
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

            #include <vector>
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/layer/PositionInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LineAnimation: public Animation, public ColorCompositeInterface, public PositionInterface {

    private: std::vector<std::vector<int32_t>> newLine = std::vector<std::vector<int32_t>>(2, std::vector<int32_t>(2));

    private: std::vector<std::vector<int32_t>> tempLine = NullUtil::getInstance().NULL_INT_ARRAY_ARRAY;

    private: std::vector<std::vector<int32_t>> line = std::vector<std::vector<int32_t>>(2, std::vector<int32_t>(2));

public: LineAnimation(BasicColor basicColor);

    public: void init(int32_t x, int32_t y);

    public: void setPosition(int32_t x, int32_t y, int32_t z);

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: void nextFrame();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H
