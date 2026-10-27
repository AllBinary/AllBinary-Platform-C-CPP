
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

class DomNodeHelper
            : public Object
         {

    public: static Node* getFirstChildElement(Node* parentNode){

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


    public: static std::string getTextNodeValue(Node* node){

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
            
    public: static std::string getTextNodeValue(std::string nodeName, NodeList* nodeList){

    Node* node = DomSearchHelper::getNode(nodeName, nodeList);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomNodeHelper::getTextNodeValue(node);;
    
}


    public: static std::string getTextNodesValue(Node* node){

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


private: DomNodeHelper(){
}


};

            

