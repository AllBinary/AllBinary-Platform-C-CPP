
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class StringUtil;
class Replace;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DocumentToNode
            : public virtual Object
         {

    private: static inline const std::string XMLROOT = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>";

    private: static inline const std::string XMLROOTSTART = "<?xml";

    private: static inline const std::string XMLROOTEND = "?>";

    private: static inline const std::string XMLJSPROOTSTART = "<jsp:root";

    private: static inline const std::string XMLEND = ">";

    private: static inline const std::string XMLJSPROOTENDSTART = "</jsp:root";

                //@Throws(Exception.constructor)
            
    public: static std::string convertDocumentToNodeString(std::string documentString);

    public: static std::string removeXmlDefinitionFromDocumentString(std::string documentString);

    public: static std::string remove(std::string documentString, std::string start, std::string end);

private: DocumentToNode();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOCUMENTTONODE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOCUMENTTONODE_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOCUMENT_DOCUMENTTONODE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/regex/replace/Replace.h>)
#include <org/allbinary/logic/string/regex/replace/Replace.h>
#endif

        #endif
    
