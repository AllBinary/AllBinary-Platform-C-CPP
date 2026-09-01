
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORY_H
        #define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORY_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ArtificialIntelligenceFactoryInterface.h"
#include "ArtificialIntelligence.h"

class ArtificialIntelligenceFactory
            : public Object
        : public ArtificialIntelligenceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: ArtificialIntelligence getInstance(Object* anyType);

};

            


        #endif //ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCEFACTORY_H
