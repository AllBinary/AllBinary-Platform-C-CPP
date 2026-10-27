
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
        



        #ifndef ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_H
        #define ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GPoint;
class AllBinaryLayer;
class MathUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerDistanceUtil
            : public virtual Object
         {

    private: static LayerDistanceUtil* instance_owner();
    private: static LayerDistanceUtil* instance;

    public: static LayerDistanceUtil* getInstance();


            
    public: LayerDistanceUtil();
        
    private: MathUtil* mathUtil;

    public: int32_t getDistance(AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2);

    public: int32_t getDistance3D(AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2);

    public: int32_t getDistanceAt(AllBinaryLayer* layerInterface, GPoint* point);

};

            


        #endif //ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/math/MathUtil.h>)
#include <org/allbinary/logic/math/MathUtil.h>
#endif

        #endif
    
