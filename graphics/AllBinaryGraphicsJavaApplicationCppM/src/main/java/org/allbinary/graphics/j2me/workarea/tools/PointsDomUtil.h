
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSDOMUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSDOMUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
class GPoint;
class PointFactory;
class WorkAreaJPanel;
class CanvasDom;
class PositionStrings;
class BasicArrayList;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PointsUtil;
class Document;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PointsDomUtil
            : public virtual Object
         {

    private: static PointsDomUtil* instance_owner();
    private: static PointsDomUtil* instance;

    public: static PointsDomUtil* getInstance();


            
    public: PointsDomUtil();
        
    public: const std::string LINES = "lines";

    public: const std::string POINTONE = "pointOne";

    public: const std::string POINTTWO = "pointTwo";

    private: const std::string ROTATEDPOINTONE = "rotatedPointOne";

    private: const std::string ROTATEDPOINTTWO = "rotatedPointTwo";

    private: const std::string LINE = "line";

                //@Throws(Exception.constructor)
            
    public: Node* toDom(CanvasDom* canvasDom, BasicArrayList* pointVector);

    private: Node* getPointNode(GPoint* point, std::string pointName);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSDOMUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSDOMUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSDOMUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>)
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>
#endif
#if __has_include(<org/allbinary/math/PositionStrings.h>)
#include <org/allbinary/math/PositionStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/PointsUtil.h")
#include "org/allbinary/graphics/j2me/workarea/tools/PointsUtil.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/Document.h")
#include "org/allbinary/graphics/j2me/workarea/tools/Document.h"
#endif

        #endif
    
