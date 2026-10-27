
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMBUILDER_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMBUILDER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PointsDomUtil;
class LinesGraphicItem;
class GraphicItemInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GraphicItemBuilder
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static GraphicItemInterface* getInstance(Node* node);

private: GraphicItemBuilder();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMBUILDER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMBUILDER_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMBUILDER_H_COMPLETE
        #if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/PointsDomUtil.h")
#include "org/allbinary/graphics/j2me/workarea/tools/PointsDomUtil.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h")
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h")
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"
#endif

        #endif
    
