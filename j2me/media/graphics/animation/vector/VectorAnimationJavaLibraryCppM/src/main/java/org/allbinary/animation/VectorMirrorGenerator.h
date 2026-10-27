
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_H
        #define ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class PointFactory;
class BasicGraphicsPipeline;
class NullUtil;
class LogUtil;
class CommonStrings;
class BasicArrayList;
class BasicArrayListS;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class VectorAnimationUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VectorMirrorGenerator
            : public virtual Object
         {

    private: static VectorMirrorGenerator* instance_owner();
    private: static VectorMirrorGenerator* instance;

    public: static VectorMirrorGenerator* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: VectorAnimationUtil* vectorAnimationUtil;

private: VectorMirrorGenerator();

    public: std::vector<std::vector<std::vector<int32_t>>> getInstance(std::vector<std::vector<std::vector<int32_t>>> points, int32_t width);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getInstance(BasicArrayList* pointBasicArrayList, int32_t width);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>)
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListS.h>)
#include <org/allbinary/util/BasicArrayListS.h>
#endif
#if __has_include("org/allbinary/animation/VectorAnimationUtil.h")
#include "org/allbinary/animation/VectorAnimationUtil.h"
#endif

        #endif
    
