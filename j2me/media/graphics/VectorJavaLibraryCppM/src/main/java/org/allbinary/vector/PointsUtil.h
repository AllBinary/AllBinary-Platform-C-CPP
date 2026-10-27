
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
        



        #ifndef ORG_ALLBINARY_VECTOR_POINTSUTIL_H
        #define ORG_ALLBINARY_VECTOR_POINTSUTIL_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PointsUtil
            : public Object
         {

    private: static PointsUtil* instance() { static std::unique_ptr<PointsUtil> value(new PointsUtil()); return value.get(); }

    public: static PointsUtil* getInstance();

    public: std::vector<std::vector<std::vector<int32_t>>> adjustXY(std::vector<std::vector<std::vector<int32_t>>> points, int32_t x, int32_t y);

    public: std::vector<std::vector<int32_t>> adjust(std::vector<std::vector<int32_t>> points, int32_t both);

    public: std::vector<std::vector<int32_t>> adjust(std::vector<std::vector<int32_t>> points, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_VECTOR_POINTSUTIL_H
