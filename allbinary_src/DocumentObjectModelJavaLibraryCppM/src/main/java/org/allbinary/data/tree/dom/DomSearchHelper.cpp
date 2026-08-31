
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DomSearchHelper
            : public Object
         {
        

    public static Node getNodeNoThrow(string nodeName, NodeList nodeList){

    numberOfNodes: int32_t = nodeList!.getLength()!;;
    




                        for (
    index: int32_t = 0;index < numberOfNodes; index++)
        {

    node: Node = nodeList!.item(index)!;;
    

                        if(node.getNodeName()!.compareTo(nodeName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public static Node getNode(string nodeName, NodeList nodeList){

    node: Node = DomSearchHelper.getNodeNoThrow(nodeName, nodeList)!;;
    

                        if(node != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                
                        else {
                            


                            throw new Exception(nodeName +" Node Not Found in search");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public static NodeList getChildNodeList(string nodeName, NodeList nodeList){

    node: Node = DomSearchHelper.getNode(nodeName, nodeList)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node.getChildNodes();;
    
}


                //@Throws(Exception.constructor)
            
    public static Vector getAllNodes(string nodeName, NodeList nodeList){

    vector: Vector = DomSearchHelper.getAllNodesNoThrow(nodeName, nodeList)!;;
    

                        if(vector == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception(nodeName +" Node Not Found in search");
                    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    

                        }
                            
}


    public static Vector getAllNodesNoThrow(string nodeName, NodeList nodeList){

    nodeVector: Vector = new Vector();;
    

    numberOfNodes: int32_t = nodeList!.getLength()!;;
    




                        for (
    index: int32_t = 0;index < numberOfNodes; index++)
        {

    node: Node = nodeList!.item(index)!;;
    

                        if(node.getNodeName()!.compareTo(nodeName) == 0)
                        
                                    {
                                    nodeVector!.add(node);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nodeVector;
    
}


private constructor (){

            super();
        }


};

            

