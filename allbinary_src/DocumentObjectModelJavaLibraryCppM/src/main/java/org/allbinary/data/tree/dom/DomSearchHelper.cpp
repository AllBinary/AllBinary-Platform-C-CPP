
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOMSEARCHHELPER_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOMSEARCHHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/DomSearchHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DomSearchHelper::DomSearchHelper(){
}


    auto DomSearchHelper::getNodeNoThrow(std::string nodeName, NodeList* nodeList) -> Node*{

    int32_t numberOfNodes = nodeList->getLength();;
    




                        for (
    int32_t index = 0;index < numberOfNodes; index++)
        {

    Node* node = nodeList->item(index);;
    

                        if(node->getNodeName()->compareTo(nodeName) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto DomSearchHelper::getNode(std::string nodeName, NodeList* nodeList) -> Node*{

    Node* node = DomSearchHelper::getNodeNoThrow(nodeName, nodeList);;
    

                        if(node != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf(nodeName) +JavaString::valueOf(" Node Not Found in search"));
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto DomSearchHelper::getChildNodeList(std::string nodeName, NodeList* nodeList) -> NodeList*{

    Node* node = DomSearchHelper::getNode(nodeName, nodeList);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node->getChildNodes();;
    
}


                //@Throws(Exception.constructor)
            
    auto DomSearchHelper::getAllNodes(std::string nodeName, NodeList* nodeList) -> BasicArrayList*{

    BasicArrayList* vector = DomSearchHelper::getAllNodesNoThrow(nodeName, nodeList);;
    

                        if(vector == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf(nodeName) +JavaString::valueOf(" Node Not Found in search"));
                    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return vector;
    

                        }
                            
}


    auto DomSearchHelper::getAllNodesNoThrow(std::string nodeName, NodeList* nodeList) -> BasicArrayList*{

    BasicArrayList* nodeVector = new BasicArrayListD();;
    

    int32_t numberOfNodes = nodeList->getLength();;
    




                        for (
    int32_t index = 0;index < numberOfNodes; index++)
        {

    Node* node = nodeList->item(index);;
    

                        if(node->getNodeName()->compareTo(nodeName) == 0)
                        
                                    {
                                    nodeVector->add(node);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nodeVector;
    
}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOMSEARCHHELPER_CPP
