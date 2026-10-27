
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_MAPPING_DOMDOCUMENTMAPPINGINTERFACE_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_MAPPING_DOMDOCUMENTMAPPINGINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DomDocumentMappingInterface {

                //@Throws(Exception.constructor)
            
    public: virtual Document* toXmlDoc() = 0;

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_MAPPING_DOMDOCUMENTMAPPINGINTERFACE_H
