
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONINFO_H
        #define ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONINFO_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageArrayRotationAnimationInfo
            : public Object
         {
        

    private: imageArray: std::vector<Image>;

    private: angleIncrement: int32_t;

    private: totalAngle: int32_t;

    private: dx: int32_t;

    private: dy: int32_t;

public constructor (std::vector<Image> imageArray, int32_t angleIncrement, int32_t totalAngle, int32_t dx, int32_t dy);

    public setImageArray(std::vector<Image> imageArray);

    public std::vector<Image> getImageArray();

    public AngleInfo getAngleInfoP();

    public setTotalAngle(int32_t totalAngle);

    public int32_t getTotalAngle();

    public setDx(int32_t dx);

    public int32_t getDx();

    public setDy(int32_t dy);

    public int32_t getDy();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_IMAGE_IMAGEARRAYROTATIONANIMATIONINFO_H
