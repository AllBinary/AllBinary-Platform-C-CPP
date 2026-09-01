
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASDOM_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASDOM_H

            #include <vector>
        
            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../java/lang/Double.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/animation/vector/VectorCenterGenerator.h>

      
#include <org/allbinary/dom/DomHelper.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IntegerDimension.h"
#include "Grid.h"
#include "CanvasJPanel.h"
#include "Document.h"

class CanvasDom
            : public Object
         {

    public: static const std::string FRAME = "frame";

    public: static const std::string ROTATE = "rotate";

    public: static const std::string SIZE = "size";

    public: static const std::string X = "X";

    public: static const std::string Y = "Y";

    public: static const std::string ZOOM = "zoom";

    public: static const std::string GRID = "grid";

    public: static const std::string ENABLED = "enabled";

    public: static const std::string POSSIBLE = "possible";

    public: static const std::string GRAPHICITEMS = "graphicItems";

    public: static const std::string REAL_SIZE = "realSize";

    public: static const std::string WIDTH = "width";

    public: static const std::string HEIGHT = "height";

    private: HashMap<any, any> graphicItemHashMap;

    private: double angle;

    private: IntegerDimension dimension;

    private: Grid grid;

public: CanvasDom(Node canvasNode);

public: CanvasDom(CanvasJPanel canvasJPanel);

    public: double getAngle();

    public: HashMap<any, any> getGraphicItemHashMap();

    public: void setAngle(double angle);

                //@Throws(Exception.constructor)
            
    public: void setWorkArea(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: void setGrid(int32_t gridX, int32_t gridY);

    private: Node getPointNode(GPoint point, std::string pointName);

                //@Throws(Exception.constructor)
            
    public: Node toDom();

    public: IntegerDimension getDimension();

    public: void setDimension(IntegerDimension dimension);

    public: Grid getGrid();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASDOM_H
