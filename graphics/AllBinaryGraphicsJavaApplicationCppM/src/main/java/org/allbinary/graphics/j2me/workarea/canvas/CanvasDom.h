
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
        

    public static const FRAME: string = "frame";

    public static const ROTATE: string = "rotate";

    public static const SIZE: string = "size";

    public static const X: string = "X";

    public static const Y: string = "Y";

    public static const ZOOM: string = "zoom";

    public static const GRID: string = "grid";

    public static const ENABLED: string = "enabled";

    public static const POSSIBLE: string = "possible";

    public static const GRAPHICITEMS: string = "graphicItems";

    public static const REAL_SIZE: string = "realSize";

    public static const WIDTH: string = "width";

    public static const HEIGHT: string = "height";

    private: graphicItemHashMap: HashMap<any, any>;

    private: angle: double;

    private: dimension: IntegerDimension;

    private: const grid: Grid;

public constructor (Node canvasNode);

public constructor (CanvasJPanel canvasJPanel);

    public double getAngle();

    public HashMap<any, any> getGraphicItemHashMap();

    public setAngle(double angle);

                //@Throws(Exception.constructor)
            
    public setWorkArea(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public setGrid(int32_t gridX, int32_t gridY);

    Node getPointNode(GPoint point, string pointName);

                //@Throws(Exception.constructor)
            
    public Node toDom();

    public IntegerDimension getDimension();

    public setDimension(IntegerDimension dimension);

    public Grid getGrid();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASDOM_H
