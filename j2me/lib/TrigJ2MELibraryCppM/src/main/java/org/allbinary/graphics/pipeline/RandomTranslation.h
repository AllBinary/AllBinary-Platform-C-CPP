
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMTRANSLATION_H
        #define ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMTRANSLATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class MyRandomFactory;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicGraphicsPipeline;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RandomTranslation
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList* getInstance(BasicArrayList* vector, int32_t howMuch);


            
    public: RandomTranslation();
        
};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMTRANSLATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMTRANSLATION_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_PIPELINE_RANDOMTRANSLATION_H_COMPLETE
        #if __has_include(<org/allbinary/game/rand/MyRandomFactory.h>)
#include <org/allbinary/game/rand/MyRandomFactory.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h")
#include "org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h"
#endif

        #endif
    
