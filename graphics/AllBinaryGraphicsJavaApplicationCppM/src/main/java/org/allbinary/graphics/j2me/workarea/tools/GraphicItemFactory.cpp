
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/log/LOGGING.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SelectionToolFactory.h"
#include "GraphicsItemInterfaceFactoryInterface.h"
#include "LinesGraphicItem.h"
#include "LinesGraphicItemFactory.h"
#include "GraphicItemBuilder.h"
#include "GraphicItemInterface.h"

class GraphicItemFactory
            : public Object
         {

    private: static GraphicItemFactory instance() { return GraphicItemFactory(); }

    public: static GraphicItemFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GraphicItemFactory::instance();
    
}


    private: HashMap<any, any> graphicItems;

    private: const GraphicsItemInterfaceFactoryInterface DEFAULT = SelectionToolFactory();

private: GraphicItemFactory(){
this->graphicItems= HashMap<any, any>();
    
this->graphicItems.put(LinesGraphicItem::getStaticName(), LinesGraphicItemFactory());
    
}


    public: GraphicsItemInterfaceFactoryInterface getInstance(std::string itemName){

    GraphicsItemInterfaceFactoryInterface graphicsItemInterfaceFactoryInterface = this->graphicItems.get(itemName) as GraphicsItemInterfaceFactoryInterface;;
    

                        if(graphicsItemInterfaceFactoryInterface == 
                                    nullptr
                                )
                        
                                    {
                                    graphicsItemInterfaceFactoryInterface= DEFAULT;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsItemInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<any, any> getInstance(BasicArrayList graphicItemNodeList){

    int32_t numberOfItems = graphicItemNodeList.size();;
    

    HashMap<any, any> graphicItemHashMap = HashMap<any, any>();;
    

                        if(LOGGING::contains(LOGGING::MENUEVENT))
                        
                                    {
                                    
                                    }
                                




                        for (
    int32_t index = 0;index < numberOfItems; index++)
        {

    GraphicItemInterface graphicItem = GraphicItemBuilder::getInstance(graphicItemNodeList.get(index) as Node);;
    
graphicItemHashMap.put(graphicItem.getTreeNode(), graphicItem);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicItemHashMap;
    
}


};

            

