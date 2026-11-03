
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPERBASE_CPP
        #define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPERBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CaptionAnimationHelperBase::CaptionAnimationHelperBase() {
        }
        auto CaptionAnimationHelperBase::INSTANCE_owner() -> CaptionAnimationHelperBase* { static std::unique_ptr<CaptionAnimationHelperBase> value(new CaptionAnimationHelperBase()); return value.get(); }
CaptionAnimationHelperBase* CaptionAnimationHelperBase::INSTANCE = CaptionAnimationHelperBase::INSTANCE_owner();

    auto CaptionAnimationHelperBase::isShowing() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto CaptionAnimationHelperBase::tick() -> void{
}


    auto CaptionAnimationHelperBase::update(std::string message, BasicColor* basicColor) -> void{
}


    auto CaptionAnimationHelperBase::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONANIMATIONHELPERBASE_CPP
