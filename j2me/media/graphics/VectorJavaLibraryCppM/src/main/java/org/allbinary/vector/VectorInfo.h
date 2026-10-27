
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
        



        #ifndef ORG_ALLBINARY_VECTOR_VECTORINFO_H
        #define ORG_ALLBINARY_VECTOR_VECTORINFO_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VectorInfo
            : public Object
         {

    private: int32_t width;

    private: int32_t height;

    private: std::vector<std::vector<int32_t>> points;

    private: int32_t totalFrames;

public: VectorInfo(int32_t width, int32_t height, std::vector<std::vector<int32_t>> points, int32_t totalFrames);

    public: int32_t getWidth();

    private: void setWidth(int32_t width);

    public: int32_t getHeight();

    private: void setHeight(int32_t height);

    public: std::vector<std::vector<int32_t>> getPoints();

    private: void setPoints(std::vector<std::vector<int32_t>> points);

    public: int32_t getTotalFrames();

    private: void setTotalFrames(int32_t totalFrames);

};

            


        #endif //ORG_ALLBINARY_VECTOR_VECTORINFO_H
