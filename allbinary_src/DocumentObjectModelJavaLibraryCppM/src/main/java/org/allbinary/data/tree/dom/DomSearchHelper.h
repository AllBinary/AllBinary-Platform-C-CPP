
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
        
#include <java/util/Vector.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DomSearchHelper
            : public Object
         {
        

    public static Node getNodeNoThrow(string nodeName, NodeList nodeList);

                //@Throws(Exception.constructor)
            
    public static Node getNode(string nodeName, NodeList nodeList);

                //@Throws(Exception.constructor)
            
    public static NodeList getChildNodeList(string nodeName, NodeList nodeList);

                //@Throws(Exception.constructor)
            
    public static Vector getAllNodes(string nodeName, NodeList nodeList);

    public static Vector getAllNodesNoThrow(string nodeName, NodeList nodeList);

private constructor ();

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOMSEARCHHELPER_H
