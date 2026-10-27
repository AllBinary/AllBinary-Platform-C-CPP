
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/log/LOGGING.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/SelectionToolFactory.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicsItemInterfaceFactoryInterface.h"
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h"
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItemFactory.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemBuilder.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"

auto GraphicItemFactory::instance_owner() -> GraphicItemFactory* { static std::unique_ptr<GraphicItemFactory> value(new GraphicItemFactory()); return value.get(); }
GraphicItemFactory* GraphicItemFactory::instance = GraphicItemFactory::instance_owner();

    auto GraphicItemFactory::getInstance() -> GraphicItemFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GraphicItemFactory::instance;
    
}


GraphicItemFactory::GraphicItemFactory() : DEFAULT(new SelectionToolFactory()){
this->graphicItems= StdUtil::getInstance()->createHashMap();
    
this->graphicItems->put(LinesGraphicItem::getStaticName(), new LinesGraphicItemFactory());
    
}


    auto GraphicItemFactory::getInstance(std::string itemName) -> GraphicsItemInterfaceFactoryInterface*{

    GraphicsItemInterfaceFactoryInterface* graphicsItemInterfaceFactoryInterface = dynamic_cast<GraphicsItemInterfaceFactoryInterface*>(this->graphicItems->get(itemName));;
    

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
            
    auto GraphicItemFactory::getInstance(BasicArrayList* graphicItemNodeList) -> HashMap<Object*, Object*>*{

    int32_t numberOfItems = graphicItemNodeList->size();;
    

    HashMap<Object*, Object*>* graphicItemHashMap = StdUtil::getInstance()->createHashMap();;
    

                        if(LOGGING::contains(LOGGING::MENUEVENT))
                        
                                    {
                                    
                                    }
                                




                        for (
    int32_t index = 0;index < numberOfItems; index++)
        {

    GraphicItemInterface* graphicItem = GraphicItemBuilder::getInstance(dynamic_cast<Node*>(graphicItemNodeList->get(index)));;
    
graphicItemHashMap->put(graphicItem->getTreeNode(), graphicItem);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicItemHashMap;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMFACTORY_CPP
