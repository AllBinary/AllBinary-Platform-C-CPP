
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_SIMPLETRANSFORM_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_SIMPLETRANSFORM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/SimpleTransform.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/StringBufferInputStream.h>

      
#include <javax/xml/transform/stream/StreamSource.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/dom/XslHelper.h"


SimpleTransform::SimpleTransform(AbPath* xsltFilePath, AbPath* dataFilePath){
this->xsltFilePath= xsltFilePath;
    
this->dataFilePath= dataFilePath;
    
}


                //@Throws(Exception.constructor)
            
    auto SimpleTransform::transform() -> std::string{

    AbFileLocalInputStream* inputStream = new AbFileLocalInputStream(AbFile::createAbFileFromAbPath(this->xsltFilePath));;
    

    Document* document = DomDocumentHelper::create(new AbFileLocalInputStream(AbFile::createAbFileFromAbPath(this->dataFilePath)));;
    

    std::string result = XslHelper::getInstance()->translate(new StreamSource(inputStream), new StreamSource(new StringBufferInputStream(XmlDocumentHelper::toString(document))));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_SIMPLETRANSFORM_CPP
