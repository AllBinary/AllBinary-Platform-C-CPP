
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
        



        #ifndef ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEINTERFACE_H
        #define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/IdentifierInterface.h>
class AllBinaryLayerManager;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ArtificialIntelligenceInterface: public IdentifierInterface {

                //@Throws(Exception.constructor)
            
    public: virtual void processAI(AllBinaryLayerManager* layerManager) = 0;

};

            


        #endif //ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/IdentifierInterface.h>)
#include <org/allbinary/graphics/IdentifierInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif

        #endif
    
