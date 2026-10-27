
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
        



        #ifndef ORG_ALLBINARY_VECTOR_VECTORINFO_CPP
        #define ORG_ALLBINARY_VECTOR_VECTORINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/vector/VectorInfo.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

VectorInfo::VectorInfo(int32_t width, int32_t height, std::vector<std::vector<int32_t>> points, int32_t totalFrames){
this->width= width;
    
this->height= height;
    
this->points= points;
    
this->totalFrames= totalFrames;
    
}


    auto VectorInfo::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->width;
    
}


    auto VectorInfo::setWidth(int32_t width) -> void{
this->width= width;
    
}


    auto VectorInfo::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->height;
    
}


    auto VectorInfo::setHeight(int32_t height) -> void{
this->height= height;
    
}


    auto VectorInfo::getPoints() -> std::vector<std::vector<int32_t>>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->points;
    
}


    auto VectorInfo::setPoints(std::vector<std::vector<int32_t>> points) -> void{
this->points= points;
    
}


    auto VectorInfo::getTotalFrames() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalFrames;
    
}


    auto VectorInfo::setTotalFrames(int32_t totalFrames) -> void{
this->totalFrames= totalFrames;
    
}




        #endif //ORG_ALLBINARY_VECTOR_VECTORINFO_CPP
