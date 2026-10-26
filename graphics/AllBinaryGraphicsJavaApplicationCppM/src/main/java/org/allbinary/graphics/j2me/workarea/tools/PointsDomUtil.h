
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PointsUtil.h"
#include "Document.h"

class PointsDomUtil
            : public Object
         {

    private: static PointsDomUtil instance() { return PointsDomUtil(); }

    public: static PointsDomUtil getInstance();

    public: const std::string LINES = "lines";

    public: const std::string POINTONE = "pointOne";

    public: const std::string POINTTWO = "pointTwo";

    private: const std::string ROTATEDPOINTONE = "rotatedPointOne";

    private: const std::string ROTATEDPOINTTWO = "rotatedPointTwo";

    private: const std::string LINE = "line";

                //@Throws(Exception.constructor)
            
    public: Node toDom(CanvasDom canvasDom, BasicArrayList pointVector);

    private: Node getPointNode(GPoint point, std::string pointName);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_POINTSDOMUTIL_H
