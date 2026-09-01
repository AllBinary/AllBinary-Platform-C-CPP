
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DocumentToNode
            : public Object
         {

    private: static const std::string XMLROOT = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>";

    private: static const std::string XMLROOTSTART = "<?xml";

    private: static const std::string XMLROOTEND = "?>";

    private: static const std::string XMLJSPROOTSTART = "<jsp:root";

    private: static const std::string XMLEND = ">";

    private: static const std::string XMLJSPROOTENDSTART = "</jsp:root";

                //@Throws(Exception.constructor)
            
    public: static std::string convertDocumentToNodeString(std::string documentString){
documentString= DocumentToNode::remove(documentString, DocumentToNode::XMLJSPROOTSTART, DocumentToNode::XMLEND);
    
documentString= DocumentToNode::remove(documentString, DocumentToNode::XMLJSPROOTENDSTART, DocumentToNode::XMLEND);
    

    Replace replaceXmlRoot = Replace(XMLROOT, StringUtil::getInstance().EMPTY_STRING);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return replaceXmlRoot.all(documentString);;
    
}


    public: static std::string removeXmlDefinitionFromDocumentString(std::string documentString){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DocumentToNode::remove(documentString, XMLROOTSTART, XMLROOTEND);;
    
}


    public: static std::string remove(std::string documentString, std::string start, std::string end){

    int32_t startIndex= 0;;
    

        while((startIndex= documentString.indexOf(start)) !=  -1)
        {

                        if(startIndex >= 0)
                        
                                    {
                                    
    int32_t endIndex = documentString.indexOf(end, startIndex);;
    

                        if(endIndex >= 0)
                        
                                    {
                                    
    std::string startString = documentString.substring(0, startIndex);;
    

    std::string resultString = documentString.substring(endIndex +1);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return startString +resultString;
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return documentString;
    
}


private: DocumentToNode(){
}


};

            

