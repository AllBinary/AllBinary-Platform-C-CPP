
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
        
            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VectorInfo
            : public Object
         {

    private: int32_t width;

    private: int32_t height;

    private: std::vector<std::vector<int32_t>> points;

    private: int32_t totalFrames;

public: VectorInfo(int32_t width, int32_t height, std::vector<std::vector<int32_t>> points, int32_t totalFrames){
this->width= width;
    
this->height= height;
    
this->points= points;
    
this->totalFrames= totalFrames;
    
}


    public: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->width;
    
}


    private: void setWidth(int32_t width){
this->width= width;
    
}


    public: int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->height;
    
}


    private: void setHeight(int32_t height){
this->height= height;
    
}


    public: std::vector<std::vector<int32_t>> getPoints(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->points;
    
}


    private: void setPoints(std::vector<std::vector<int32_t>> points){
this->points= points;
    
}


    public: int32_t getTotalFrames(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalFrames;
    
}


    private: void setTotalFrames(int32_t totalFrames){
this->totalFrames= totalFrames;
    
}


};

            

