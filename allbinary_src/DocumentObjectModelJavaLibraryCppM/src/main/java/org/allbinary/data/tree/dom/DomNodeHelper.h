
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOMNODEHELPER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOMNODEHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class StringMaker;
class StringUtil;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DomSearchHelper;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DomNodeHelper
            : public virtual Object
         {

    public: static Node* getFirstChildElement(Node* parentNode);

    public: static std::string getTextNodeValue(Node* node);

                //@Throws(Exception.constructor)
            
    public: static std::string getTextNodeValue(std::string nodeName, NodeList* nodeList);

    public: static std::string getTextNodesValue(Node* node);

private: DomNodeHelper();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOMNODEHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TREE_DOM_DOMNODEHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOMNODEHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/data/tree/dom/DomSearchHelper.h")
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#endif

        #endif
    
