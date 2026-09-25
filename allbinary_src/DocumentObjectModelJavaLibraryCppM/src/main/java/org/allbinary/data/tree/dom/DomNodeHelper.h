
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DomSearchHelper.h"

class DomNodeHelper
            : public Object
         {

    public: static Node getFirstChildElement(Node parentNode);

    public: static std::string getTextNodeValue(Node node);

                //@Throws(Exception.constructor)
            
    public: static std::string getTextNodeValue(std::string nodeName, NodeList nodeList);

    public: static std::string getTextNodesValue(Node node);

private: DomNodeHelper();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOMNODEHELPER_H
