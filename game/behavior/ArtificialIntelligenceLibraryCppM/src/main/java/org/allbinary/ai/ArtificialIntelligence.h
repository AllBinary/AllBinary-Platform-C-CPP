
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
        



        #ifndef ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_H
        #define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryLayerManager;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/ai/ArtificialIntelligenceInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ArtificialIntelligence
            : public virtual Object
        , public virtual ArtificialIntelligenceInterface {

    public: static inline const int32_t AI_ID = 2;

    private: static ArtificialIntelligence* instance_owner();
    private: static ArtificialIntelligence* instance;

    public: static ArtificialIntelligence* getInstance();

public: ArtificialIntelligence();

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* layerManager);

    public: int32_t getId();

};

            


        #endif //ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_H_COMPLETE)
        #define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include("org/allbinary/ai/ArtificialIntelligenceInterface.h")
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#endif

        #endif
    
