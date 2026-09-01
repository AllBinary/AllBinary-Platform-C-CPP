
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMFACTORY_H

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

    public: static GraphicItemFactory getInstance();

    private: HashMap<any, any> graphicItems;

    private: const GraphicsItemInterfaceFactoryInterface DEFAULT = SelectionToolFactory();

private: GraphicItemFactory();

    public: GraphicsItemInterfaceFactoryInterface getInstance(std::string itemName);

                //@Throws(Exception.constructor)
            
    public: HashMap<any, any> getInstance(BasicArrayList graphicItemNodeList);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMFACTORY_H
