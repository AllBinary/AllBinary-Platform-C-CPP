
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
        

    private: static const XMLROOT: string = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>";

    private: static const XMLROOTSTART: string = "<?xml";

    private: static const XMLROOTEND: string = "?>";

    private: static const XMLJSPROOTSTART: string = "<jsp:root";

    private: static const XMLEND: string = ">";

    private: static const XMLJSPROOTENDSTART: string = "</jsp:root";

                //@Throws(Exception.constructor)
            
    public static string convertDocumentToNodeString(string documentString);

    public static string removeXmlDefinitionFromDocumentString(string documentString);

    public static string remove(string documentString, string start, string end);

private constructor ();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOCUMENTTONODE_H
