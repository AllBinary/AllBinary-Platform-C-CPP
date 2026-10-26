
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageArrayRotationAnimationInfo
            : public Object
         {

    private: std::vector<Image> imageArray;

    private: int32_t angleIncrement;

    private: int32_t totalAngle;

    private: int32_t dx;

    private: int32_t dy;

public: ImageArrayRotationAnimationInfo(std::vector<Image> imageArray, int32_t angleIncrement, int32_t totalAngle, int32_t dx, int32_t dy){
this->imageArray= imageArray;
    
this->angleIncrement= angleIncrement;
    
this->totalAngle= totalAngle;
    
this->dx= dx;
    
this->dy= dy;
    
}


    public: void setImageArray(std::vector<Image> imageArray){
this->imageArray= imageArray;
    
}


    public: std::vector<Image> getImageArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->imageArray;
    
}


    public: AngleInfo getAngleInfoP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AngleInfo::getInstance(this->angleIncrement);;
    
}


    public: void setTotalAngle(int32_t totalAngle){
this->totalAngle= totalAngle;
    
}


    public: int32_t getTotalAngle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalAngle;
    
}


    public: void setDx(int32_t dx){
this->dx= dx;
    
}


    public: int32_t getDx(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dx;
    
}


    public: void setDy(int32_t dy){
this->dy= dy;
    
}


    public: int32_t getDy(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->dy;
    
}


};

            

