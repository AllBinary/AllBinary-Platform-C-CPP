
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_DOMNODEHELPER_CPP
        #define ORG_ALLBINARY_DATA_TREE_DOM_DOMNODEHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tree/dom/DomNodeHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tree/dom/DomSearchHelper.h"


DomNodeHelper::DomNodeHelper(){
}


    auto DomNodeHelper::getFirstChildElement(Node* parentNode) -> Node*{

    Node* node = parentNode->getFirstChild();;
    

                        if(node != 
                                    nullptr
                                 && node->getNodeType() != Node::ELEMENT_NODE)
                        
                                    {
                                    
    NodeList* nodeList = parentNode->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {
node= nodeList->item(index);
    

                        if(node->getNodeType() == 1)
                        
                                    {
                                    break;

                    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


    auto DomNodeHelper::getTextNodeValue(Node* node) -> std::string{

    Node* nodeTextNode = node->getFirstChild();;
    

                        if(nodeTextNode != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nodeTextNode->getNodeValue();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto DomNodeHelper::getTextNodeValue(std::string nodeName, NodeList* nodeList) -> std::string{

    Node* node = DomSearchHelper::getNode(nodeName, nodeList);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DomNodeHelper::getTextNodeValue(node);;
    
}


    auto DomNodeHelper::getTextNodesValue(Node* node) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    NodeList* nodeList = node->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* nodeTextNode = nodeList->item(index);;
    

                        if(nodeTextNode->getNodeType() == Node::TEXT_NODE)
                        
                                    {
                                    
                        if(nodeTextNode != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(nodeTextNode->getNodeValue());
    

                                    }
                                

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_DATA_TREE_DOM_DOMNODEHELPER_CPP
