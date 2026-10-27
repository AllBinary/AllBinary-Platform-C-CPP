
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORROTATIONGENERATOR_H
        #define ORG_ALLBINARY_ANIMATION_VECTORROTATIONGENERATOR_H

        
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
class Angle;
class AngleFactory;
class CommonStrings;
class BasicArrayList;
class BasicArrayListS;
class VectorInfo;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class VectorAnimationUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VectorRotationGenerator
            : public virtual Object
         {

    private: static VectorRotationGenerator* instance_owner();
    private: static VectorRotationGenerator* instance;

    public: static VectorRotationGenerator* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: VectorAnimationUtil* vectorAnimationUtil;

private: VectorRotationGenerator();

    public: std::vector<std::vector<std::vector<int32_t>>> getInstance(VectorInfo* vectorRotationInfo);

    private: AngleFactory* angleFactory;

    public: std::vector<std::vector<std::vector<int32_t>>> getInstanceFrames(int32_t width, int32_t height, std::vector<std::vector<int32_t>> points, int32_t frames);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getListAtAngle(int32_t width, int32_t height, BasicArrayList* pointBasicArrayList, Angle* angle);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORROTATIONGENERATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTORROTATIONGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTORROTATIONGENERATOR_H_COMPLETE
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
#if __has_include(<org/allbinary/math/Angle.h>)
#include <org/allbinary/math/Angle.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
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
#if __has_include(<org/allbinary/vector/VectorInfo.h>)
#include <org/allbinary/vector/VectorInfo.h>
#endif
#if __has_include("org/allbinary/animation/VectorAnimationUtil.h")
#include "org/allbinary/animation/VectorAnimationUtil.h"
#endif

        #endif
    
