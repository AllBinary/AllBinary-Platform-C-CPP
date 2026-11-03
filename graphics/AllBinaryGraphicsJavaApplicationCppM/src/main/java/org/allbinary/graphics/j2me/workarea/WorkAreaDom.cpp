
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREADOM_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREADOM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/WorkAreaDom.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/dom/DomHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

WorkAreaDom::WorkAreaDom(Document* document){

    NodeList* workAreaNodeList = document->getElementsByTagName(this->WORKAREA);;
    

                        if(workAreaNodeList != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t numberOfworkAreas = workAreaNodeList->getLength();;
    

                        if(numberOfworkAreas == 1)
                        
                                    {
                                    
    int32_t numberOfNodes = workAreaNodeList->getLength();;
    

    Node* nameNode = DomHelper::getInstance()->searchNodeList(this->NAME, workAreaNodeList->item(0)->getChildNodes());;
    

    Node* nameTextNode = nameNode->getFirstChild();;
    
this->name= nameTextNode->getNodeValue();
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Wrong Number of WorkAreas: ") +JavaString::valueOf(numberOfworkAreas));
                    

                        }
                            
this->canvasNodeList= DomHelper::getInstance()->getChildrenWithoutTextNodes(WorkAreaDom::FRAMES, workAreaNodeList->item(0)->getChildNodes());
    

                                    }
                                
                        else {
                            


                            throw Exception("workArea Node Not Found");
                    

                        }
                            
}


    auto WorkAreaDom::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto WorkAreaDom::getCanvasNodes() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->canvasNodeList;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREADOM_CPP
