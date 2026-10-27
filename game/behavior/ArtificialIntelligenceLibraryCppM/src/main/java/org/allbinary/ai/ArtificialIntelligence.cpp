
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/ai/ArtificialIntelligenceInterface.h"

class ArtificialIntelligence
            : public Object
        , public ArtificialIntelligenceInterface {

    public: static inline const int32_t AI_ID = 2;

    private: static ArtificialIntelligence* instance() { static std::unique_ptr<ArtificialIntelligence> value(new ArtificialIntelligence()); return value.get(); }

    public: static ArtificialIntelligence* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ArtificialIntelligence::instance();
    
}


public: ArtificialIntelligence(){
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* layerManager){
}


    public: int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}


};

            

