
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ArtificialIntelligenceInterface.h"

class ArtificialIntelligence
            : public Object
        : public ArtificialIntelligenceInterface {

    public: static const int32_t AI_ID = 2;

    private: static ArtificialIntelligence instance() { return ArtificialIntelligence(); }

    public: static ArtificialIntelligence getInstance();

public: ArtificialIntelligence();

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager layerManager);

    public: int32_t getId();

};

            


        #endif //ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_H
