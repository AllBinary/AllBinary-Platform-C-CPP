
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMSTOREDOCUMENTFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMSTOREDOCUMENTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/data/TransformStoreDocumentFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/data/TransformStoreDocument.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"


TransformStoreDocumentFactory::TransformStoreDocumentFactory(){
}


                //@Throws(Exception.constructor)
            
    auto TransformStoreDocumentFactory::getInstance(PageContext* pageContext, WeblisketSession* weblisketSession) -> TransformDocumentInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<TransformDocumentInterface*>(new TransformStoreDocument(pageContext, weblisketSession));
    
}


                //@Throws(Exception.constructor)
            
    auto TransformStoreDocumentFactory::getInstance(SearchRequest* searchRequest) -> TransformDocumentInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<TransformDocumentInterface*>(new TransformStoreDocument(searchRequest));
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_DATA_TRANSFORMSTOREDOCUMENTFACTORY_CPP
