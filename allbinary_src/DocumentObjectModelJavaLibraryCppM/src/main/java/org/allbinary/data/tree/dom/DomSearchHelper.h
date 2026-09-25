
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOMSEARCHHELPER_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOMSEARCHHELPER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DomSearchHelper
            : public Object
         {

    public: static Node getNodeNoThrow(std::string nodeName, NodeList nodeList);

                //@Throws(Exception.constructor)
            
    public: static Node getNode(std::string nodeName, NodeList nodeList);

                //@Throws(Exception.constructor)
            
    public: static NodeList getChildNodeList(std::string nodeName, NodeList nodeList);

                //@Throws(Exception.constructor)
            
    public: static BasicArrayList getAllNodes(std::string nodeName, NodeList nodeList);

    public: static BasicArrayList getAllNodesNoThrow(std::string nodeName, NodeList nodeList);

private: DomSearchHelper();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOMSEARCHHELPER_H
