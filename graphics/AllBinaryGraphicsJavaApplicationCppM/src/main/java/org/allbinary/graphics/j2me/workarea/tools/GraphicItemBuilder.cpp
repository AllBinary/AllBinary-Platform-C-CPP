
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
        
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PointsDomUtil.h"
#include "LinesGraphicItem.h"
#include "GraphicItemInterface.h"

class GraphicItemBuilder
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static GraphicItemInterface getInstance(Node node){

    std::string graphicItemName = node.getNodeName();;
    

                        if(graphicItemName.compare(PointsDomUtil::getInstance().LINES) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LinesGraphicItem(node);
    

                                    }
                                
                        else {
                            


                            throw Exception("Graphic Item Does Not Exist: " +graphicItemName);
                    

                        }
                            
}


private: GraphicItemBuilder(){
}


};

            

