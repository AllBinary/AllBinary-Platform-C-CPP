
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOCUMENTTONODE_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOCUMENTTONODE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/document/DocumentToNode.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DocumentToNode::DocumentToNode(){
}


                //@Throws(Exception.constructor)
            
    auto DocumentToNode::convertDocumentToNodeString(std::string documentString) -> std::string{
documentString= DocumentToNode::remove(documentString, DocumentToNode::XMLJSPROOTSTART, DocumentToNode::XMLEND);
    
documentString= DocumentToNode::remove(documentString, DocumentToNode::XMLJSPROOTENDSTART, DocumentToNode::XMLEND);
    

    Replace* replaceXmlRoot = new Replace(XMLROOT, StringUtil::getInstance()->EMPTY_STRING);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return replaceXmlRoot->all(documentString);;
    
}


    auto DocumentToNode::removeXmlDefinitionFromDocumentString(std::string documentString) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DocumentToNode::remove(documentString, XMLROOTSTART, XMLROOTEND);;
    
}


    auto DocumentToNode::remove(std::string documentString, std::string start, std::string end) -> std::string{

    int32_t startIndex= 0;;
    

        while((startIndex= JavaString::indexOf(documentString, start)) !=  -1)
        {

                        if(startIndex >= 0)
                        
                                    {
                                    
    int32_t endIndex = JavaString::indexOf(documentString, end, startIndex);;
    

                        if(endIndex >= 0)
                        
                                    {
                                    
    std::string startString = JavaString::substring(documentString, 0, startIndex);;
    

    std::string resultString = JavaString::substring(documentString, endIndex +1);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::valueOf(startString) +JavaString::valueOf(resultString);
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return documentString;
    
}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOCUMENTTONODE_CPP
