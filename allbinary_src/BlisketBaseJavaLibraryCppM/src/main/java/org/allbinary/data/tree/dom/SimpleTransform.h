
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_SIMPLETRANSFORM_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_SIMPLETRANSFORM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/StringBufferInputStream.h>
class StreamSource;
class DomDocumentHelper;
class XmlDocumentHelper;
class AbFileLocalInputStream;
class AbFile;
class AbPath;
class Document;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class XslHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SimpleTransform
            : public virtual Object
         {

    private: AbPath* xsltFilePath;

    private: AbPath* dataFilePath;

public: SimpleTransform(AbPath* xsltFilePath, AbPath* dataFilePath);

                //@Throws(Exception.constructor)
            
    public: std::string transform();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_SIMPLETRANSFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_SIMPLETRANSFORM_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_SIMPLETRANSFORM_H_COMPLETE
        #if __has_include(<java/io/StringBufferInputStream.h>)
#include <java/io/StringBufferInputStream.h>
#endif
#if __has_include(<javax/xml/transform/stream/StreamSource.h>)
#include <javax/xml/transform/stream/StreamSource.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileLocalInputStream.h>)
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include("org/allbinary/data/tree/dom/XslHelper.h")
#include "org/allbinary/data/tree/dom/XslHelper.h"
#endif

        #endif
    
