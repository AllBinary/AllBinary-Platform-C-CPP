
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_BASICERRORNODEUTIL_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_BASICERRORNODEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/BasicErrorNodeUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/error/ErrorData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/dom/ModDomHelper.h"


BasicErrorNodeUtil::BasicErrorNodeUtil(){
}


                //@Throws(Exception.constructor)
            
    auto BasicErrorNodeUtil::get(Document* document, std::string errorText) -> Node*{

        try {
            
    Node* node = document->createElement(ErrorData::getInstance()->NAME);;
    
node->appendChild(ModDomHelper::createNameValueNodes(document, ErrorData::getInstance()->TEXT, errorText));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    

                //: 
} catch(Exception& e) 
            {



                            throw Exception("Error Node Creation Failure");
                    
}

}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_BASICERRORNODEUTIL_CPP
