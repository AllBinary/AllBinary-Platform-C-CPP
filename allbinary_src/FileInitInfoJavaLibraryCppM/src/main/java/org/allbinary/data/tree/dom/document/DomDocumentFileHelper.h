
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTFILEHELPER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTFILEHELPER_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/xml/transform/Transformer.h>

      
#include <javax/xml/transform/TransformerFactory.h>

      
#include <javax/xml/transform/dom/DOMSource.h>

      
#include <javax/xml/transform/stream/StreamResult.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DomDocumentHelper.h"

class DomDocumentFileHelper
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static Document createDocument(AbFile xmlFile);

                //@Throws(Exception.constructor)
            
    public: static void save(AbFile file, Document document);

private: DomDocumentFileHelper();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTFILEHELPER_H
