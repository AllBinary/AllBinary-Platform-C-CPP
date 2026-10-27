
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONINFO_CPP
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ImageArrayRotationAnimationInfo::ImageArrayRotationAnimationInfo(std::vector<Image*> imageArray, int32_t angleIncrement, int32_t totalAngle, int32_t dx, int32_t dy){
this->imageArray= imageArray;
    
this->angleIncrement= angleIncrement;
    
this->totalAngle= totalAngle;
    
this->dx= dx;
    
this->dy= dy;
    
}


    auto ImageArrayRotationAnimationInfo::setImageArray(std::vector<Image*> imageArray) -> void{
this->imageArray= imageArray;
    
}


    auto ImageArrayRotationAnimationInfo::getImageArray() -> std::vector<Image*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageArray;
    
}


    auto ImageArrayRotationAnimationInfo::getAngleInfoP() -> AngleInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AngleInfo::getInstance(this->angleIncrement);;
    
}


    auto ImageArrayRotationAnimationInfo::setTotalAngle(int32_t totalAngle) -> void{
this->totalAngle= totalAngle;
    
}


    auto ImageArrayRotationAnimationInfo::getTotalAngle() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalAngle;
    
}


    auto ImageArrayRotationAnimationInfo::setDx(int32_t dx) -> void{
this->dx= dx;
    
}


    auto ImageArrayRotationAnimationInfo::getDx() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dx;
    
}


    auto ImageArrayRotationAnimationInfo::setDy(int32_t dy) -> void{
this->dy= dy;
    
}


    auto ImageArrayRotationAnimationInfo::getDy() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dy;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONINFO_CPP
