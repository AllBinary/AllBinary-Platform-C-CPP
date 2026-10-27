
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PointsUtil
            : public virtual Object
         {

    private: static PointsUtil* instance_owner();
    private: static PointsUtil* instance;

    public: static PointsUtil* getInstance();


            
    public: PointsUtil();
        
    public: std::vector<std::vector<std::vector<int32_t>>> adjustXY(std::vector<std::vector<std::vector<int32_t>>> points, int32_t x, int32_t y);

    public: std::vector<std::vector<int32_t>> adjust(std::vector<std::vector<int32_t>> points, int32_t both);

    public: std::vector<std::vector<int32_t>> adjust(std::vector<std::vector<int32_t>> points, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_VECTOR_POINTSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_VECTOR_POINTSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_VECTOR_POINTSUTIL_H_COMPLETE
        
        #endif
    
