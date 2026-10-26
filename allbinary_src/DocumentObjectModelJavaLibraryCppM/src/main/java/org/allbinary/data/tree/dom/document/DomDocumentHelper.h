
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTHELPER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTHELPER_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/io/InputStream.h>

      
#include <java/io/StringBufferInputStream.h>

      
#include <javax/xml/parsers/DocumentBuilder.h>

      
#include <javax/xml/parsers/DocumentBuilderFactory.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DomDocumentHelper
            : public Object
         {

    public: static void init();

    public: static Document create();

                //@Throws(Exception.constructor)
            
    public: static Document create(InputStream inputStream);

                //@Throws(Exception.constructor)
            
    public: static Document create(std::string xmlString);

private: DomDocumentHelper();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTHELPER_H
