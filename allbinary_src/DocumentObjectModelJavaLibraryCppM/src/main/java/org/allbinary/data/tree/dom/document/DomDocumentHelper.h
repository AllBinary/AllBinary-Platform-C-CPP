
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/io/InputStream.h>
#include <java/io/StringBufferInputStream.h>
class DocumentBuilder;
class DocumentBuilderFactory;
class CommonPhoneStrings;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DomDocumentHelper
            : public virtual Object
         {

    public: static void init();

    public: static Document* create();

                //@Throws(Exception.constructor)
            
    public: static Document* create(InputStream* inputStream);

                //@Throws(Exception.constructor)
            
    public: static Document* create(std::string xmlString);

private: DomDocumentHelper();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTHELPER_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<java/io/StringBufferInputStream.h>)
#include <java/io/StringBufferInputStream.h>
#endif
#if __has_include(<javax/xml/parsers/DocumentBuilder.h>)
#include <javax/xml/parsers/DocumentBuilder.h>
#endif
#if __has_include(<javax/xml/parsers/DocumentBuilderFactory.h>)
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif

        #endif
    
