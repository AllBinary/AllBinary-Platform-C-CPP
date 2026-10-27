
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/animation/vector/VectorCenterGenerator.h>

      
#include <org/allbinary/dom/DomHelper.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/GraphicsStrings.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/Grid.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/Document.h"

class CanvasDom
            : public Object
         {

    public: static inline const std::string FRAME = "frame";

    public: static inline const std::string ROTATE = "rotate";

    public: static inline const std::string SIZE = "size";

    public: static inline const std::string X = "X";

    public: static inline const std::string Y = "Y";

    public: static inline const std::string ZOOM = "zoom";

    public: static inline const std::string GRID = "grid";

    public: static inline const std::string ENABLED = "enabled";

    public: static inline const std::string POSSIBLE = "possible";

    public: static inline const std::string GRAPHICITEMS = "graphicItems";

    public: static inline const std::string REAL_SIZE = "realSize";

    private: GraphicsStrings* graphicsStrings = GraphicsStrings::getInstance();

    private: HashMap<Object*, Object*>* graphicItemHashMap;

    private: double angle;

    private: IntegerDimension* dimension;

    private: Grid* grid;

public: CanvasDom(Node* canvasNode);

public: CanvasDom(CanvasJPanel* canvasJPanel);

    public: double getAngle();

    public: HashMap<Object*, Object*>* getGraphicItemHashMap();

    public: void setAngle(double angle);

                //@Throws(Exception.constructor)
            
    public: void setWorkArea(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: void setGrid(int32_t gridX, int32_t gridY);

    private: Node* getPointNode(GPoint* point, std::string pointName);

                //@Throws(Exception.constructor)
            
    public: Node* toDom();

    public: IntegerDimension* getDimension();

    public: void setDimension(IntegerDimension* dimension);

    public: Grid* getGrid();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASDOM_H
