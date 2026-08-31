
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTQUEUEINTERFACE_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTQUEUEINTERFACE_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DomDocumentQueueInterface {
        

                //@Throws(Exception.constructor)
            
    bool offer(DomDocumentMappingInterface domDocumentMappingInterface);

                //@Throws(Exception.constructor)
            
    DomDocumentMappingInterface remove();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTQUEUEINTERFACE_H
