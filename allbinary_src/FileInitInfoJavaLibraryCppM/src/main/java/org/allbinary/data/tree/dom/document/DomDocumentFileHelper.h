
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Transformer;
class TransformerFactory;
class DOMSource;
class StreamResult;
class AbDataOutputStream;
class AbFileInputStream;
class DataOutputStreamFactory;
class StreamUtil;
class AbFile;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DomDocumentHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DomDocumentFileHelper
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static Document* createDocument(AbFile* xmlFile);

                //@Throws(Exception.constructor)
            
    public: static void save(AbFile* file, Document* document);

private: DomDocumentFileHelper();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTFILEHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTFILEHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTFILEHELPER_H_COMPLETE
        #if __has_include(<javax/xml/transform/Transformer.h>)
#include <javax/xml/transform/Transformer.h>
#endif
#if __has_include(<javax/xml/transform/TransformerFactory.h>)
#include <javax/xml/transform/TransformerFactory.h>
#endif
#if __has_include(<javax/xml/transform/dom/DOMSource.h>)
#include <javax/xml/transform/dom/DOMSource.h>
#endif
#if __has_include(<javax/xml/transform/stream/StreamResult.h>)
#include <javax/xml/transform/stream/StreamResult.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbDataOutputStream.h>)
#include <org/allbinary/logic/io/AbDataOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileInputStream.h>)
#include <org/allbinary/logic/io/AbFileInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/DataOutputStreamFactory.h>)
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/data/tree/dom/document/DomDocumentHelper.h")
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#endif

        #endif
    
