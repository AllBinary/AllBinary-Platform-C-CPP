
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DomSearchHelper
            : public Object
         {

    public: static Node getNodeNoThrow(std::string nodeName, NodeList nodeList){

    int32_t numberOfNodes = nodeList.getLength();;
    




                        for (
    int32_t index = 0;index < numberOfNodes; index++)
        {

    Node node = nodeList.item(index);;
    

                        if(node.getNodeName().compareTo(nodeName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: static Node getNode(std::string nodeName, NodeList nodeList){

    Node node = DomSearchHelper::getNodeNoThrow(nodeName, nodeList);;
    

                        if(node != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                
                        else {
                            


                            throw Exception(nodeName +" Node Not Found in search");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: static NodeList getChildNodeList(std::string nodeName, NodeList nodeList){

    Node node = DomSearchHelper::getNode(nodeName, nodeList);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node.getChildNodes();;
    
}


                //@Throws(Exception.constructor)
            
    public: static BasicArrayList getAllNodes(std::string nodeName, NodeList nodeList){

    BasicArrayList vector = DomSearchHelper::getAllNodesNoThrow(nodeName, nodeList);;
    

                        if(vector == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception(nodeName +" Node Not Found in search");
                    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    

                        }
                            
}


    public: static BasicArrayList getAllNodesNoThrow(std::string nodeName, NodeList nodeList){

    BasicArrayList nodeVector = BasicArrayListD();;
    

    int32_t numberOfNodes = nodeList.getLength();;
    




                        for (
    int32_t index = 0;index < numberOfNodes; index++)
        {

    Node node = nodeList.item(index);;
    

                        if(node.getNodeName().compareTo(nodeName) == 0)
                        
                                    {
                                    nodeVector.add(node);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nodeVector;
    
}


private: DomSearchHelper(){
}


};

            

