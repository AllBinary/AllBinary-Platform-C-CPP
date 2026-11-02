
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTFILEHELPER_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTFILEHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/document/DomDocumentFileHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"


DomDocumentFileHelper::DomDocumentFileHelper(){
}


                //@Throws(Exception.constructor)
            
    auto DomDocumentFileHelper::createDocument(AbFile* xmlFile) -> Document*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomDocumentHelper::create(new AbFileInputStream(xmlFile));;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto DomDocumentFileHelper::save(AbFile* file, Document* document) -> void{

    AbDataOutputStream* dataOutputStream = 
                null
            ;;
    

        {
        
        auto finallyFunction_N66116 = [&]() {
            StreamUtil::getInstance()->close(dataOutputStream);
    

        };
        
        struct FinallyGuard_N66116 { decltype(finallyFunction_N66116)& function; ~FinallyGuard_N66116() { function(); } } finallyGuard_N66116{finallyFunction_N66116};
        
        try {
            
    TransformerFactory* copyTransformerFactory = TransformerFactory::newInstance();;
    

    Transformer* copyTransformer = copyTransformerFactory->newTransformer();;
    

    DOMSource* domSource = new DOMSource(document);;
    

                        if(file->isFile())
                        
                                    {
                                    file->delete_();
    

                                    }
                                
file->createNewFile();
    
dataOutputStream= DataOutputStreamFactory::getInstance()->getInstanceForAbFile(file);
    

    StreamResult* streamResult = new StreamResult(dataOutputStream);;
    
copyTransformer->transform(domSource, streamResult);
    
dataOutputStream->flush();
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

        }

}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOMDOCUMENTFILEHELPER_CPP
