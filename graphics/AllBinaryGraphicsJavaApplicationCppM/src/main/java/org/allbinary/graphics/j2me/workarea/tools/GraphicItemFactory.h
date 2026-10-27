
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class LOGGING;
class StdUtil;
class BasicArrayList;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SelectionToolFactory;
class GraphicsItemInterfaceFactoryInterface;
class LinesGraphicItem;
class LinesGraphicItemFactory;
class GraphicItemBuilder;
class GraphicItemInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GraphicItemFactory
            : public virtual Object
         {

    private: static GraphicItemFactory* instance_owner();
    private: static GraphicItemFactory* instance;

    public: static GraphicItemFactory* getInstance();

    private: HashMap<Object*, Object*>* graphicItems;

    private: GraphicsItemInterfaceFactoryInterface* DEFAULT;

private: GraphicItemFactory();

    public: GraphicsItemInterfaceFactoryInterface* getInstance(std::string itemName);

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* getInstance(BasicArrayList* graphicItemNodeList);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/log/LOGGING.h>)
#include <org/allbinary/log/LOGGING.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/SelectionToolFactory.h")
#include "org/allbinary/graphics/j2me/workarea/tools/SelectionToolFactory.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/GraphicsItemInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicsItemInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h")
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItemFactory.h")
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItemFactory.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/GraphicItemBuilder.h")
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemBuilder.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h")
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"
#endif

        #endif
    
