
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOCUMENTTONODE_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOCUMENTTONODE_H

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
            
    public: static std::string convertDocumentToNodeString(std::string documentString);

    public: static std::string removeXmlDefinitionFromDocumentString(std::string documentString);

    public: static std::string remove(std::string documentString, std::string start, std::string end);

private: DocumentToNode();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOCUMENTTONODE_H
