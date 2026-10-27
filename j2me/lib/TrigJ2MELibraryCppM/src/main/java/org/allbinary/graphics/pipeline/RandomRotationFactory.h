
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMROTATIONFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMROTATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class MyRandomFactory;
class AngleFactory;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicGraphicsPipeline;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RandomRotationFactory
            : public virtual Object
         {

    private: static RandomRotationFactory* instance_owner();
    private: static RandomRotationFactory* instance;

    public: static RandomRotationFactory* getInstance();


            
    public: RandomRotationFactory();
        
    private: MyRandomFactory* myRandomFactory;

    private: AngleFactory* angleFactory;

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getInstanceList(BasicArrayList* vector, int32_t howMuch);

    public: int32_t getNextRandomAngle(int32_t howMuch);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMROTATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMROTATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMROTATIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/rand/MyRandomFactory.h>)
#include <org/allbinary/game/rand/MyRandomFactory.h>
#endif
#if __has_include(<org/allbinary/math/AngleFactory.h>)
#include <org/allbinary/math/AngleFactory.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h")
#include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"
#endif

        #endif
    
