
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H
        #define ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class GPoint;
class PointFactory;
class RandomRotationFactory;
class RandomTranslation;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListS;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class VectorExplosionType;
class VectorAnimationUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VectorExplosionGenerator
            : public virtual Object
         {

    private: static VectorExplosionGenerator* instance_owner();
    private: static VectorExplosionGenerator* instance;

    public: static VectorExplosionGenerator* getInstance();

    public: VectorExplosionType* RANDOM;

    public: VectorExplosionType* ROTATION;

    private: VectorAnimationUtil* vectorAnimationUtil;

private: VectorExplosionGenerator();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* createList(BasicArrayList* list, int32_t howMuch, VectorExplosionType* type);

                //@Throws(Exception.constructor)
            
    public: std::vector<std::vector<std::vector<int32_t>>> getInstance(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType* type);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getInstanceStartFrame(std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType* type, bool startFrame);

    private: RandomRotationFactory* randomRotationFactory;

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* createListFromPoints(BasicArrayList* tempBasicArrayList, std::vector<std::vector<int32_t>> points, int32_t howMuch, VectorExplosionType* type);

                //@Throws(Exception.constructor)
            
    private: BasicArrayList* createPointsBasicArrayList(std::vector<std::vector<int32_t>> points);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONGENERATOR_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/pipeline/RandomRotationFactory.h>)
#include <org/allbinary/graphics/pipeline/RandomRotationFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/pipeline/RandomTranslation.h>)
#include <org/allbinary/graphics/pipeline/RandomTranslation.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListS.h>)
#include <org/allbinary/util/BasicArrayListS.h>
#endif
#if __has_include("org/allbinary/animation/VectorExplosionType.h")
#include "org/allbinary/animation/VectorExplosionType.h"
#endif
#if __has_include("org/allbinary/animation/VectorAnimationUtil.h")
#include "org/allbinary/animation/VectorAnimationUtil.h"
#endif

        #endif
    
