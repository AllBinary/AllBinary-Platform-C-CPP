
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEM_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEM_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Math.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../java/lang/Double.h"
        
#include <java/awt.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <javax/swing/tree/MutableTreeNode.h>

      
#include <org/allbinary/dom/DomHelper.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/j2me/StatusFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h>

      
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GraphicItemInterface.h"
#include "Color.h"
#include "Points.h"
#include "PointsDomUtil.h"
#include "Graphics2D.h"
#include "BasicStroke.h"
#include "PointsUtil.h"
#include "Graphics.h"
#include "MouseEvent.h"
#include "KeyEvent.h"

class LinesGraphicItem
            : public Object
        : public GraphicItemInterface {

    private: static const std::string RECT = "rect";

    private: static const std::string ARC = "arc";

    private: static const std::string STRING = "string";

    private: static const std::string CHAR = "char";

    private: static const std::string IMAGE = "image";

    private: static int32_t item = 0;

    private: static const std::string NAME = "Line Tool";

    public: static std::string getStaticName();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const GameInputStrings gameInputStrings = GameInputStrings::getInstance();

    private: DefaultMutableTreeNode treeNode;

    private: BasicArrayList pointTreeNodeVector;

    private: GPoint currentMousePoint;

    private: GPoint fulcrumPoint;

    private: bool active = false;

    private: double theta = 0;

    private: Color color = Color(BasicColorFactory::getInstance().WHITE.intValue());

    private: Points points;

public: LinesGraphicItem();

public: LinesGraphicItem(Node linesNode);

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: void translate(int32_t x, int32_t y);

    public: void setRotate(double theta);

    public: void addRotate(double theta);

    public: void setAngle(double angle);

    public: void addAngle(double angle);

    public: MutableTreeNode getTreeNode();

    public: std::string getName();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void addPoint(NodeList pointNodes);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addPoint(GPoint point);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: GPoint removePoint();

    public: bool isActive();

    public: void deactivate();

    public: void activate();

                //@Throws(Exception.constructor)
            
    public: void duplicatePoints(BasicArrayList list);

                //@Throws(Exception.constructor)
            
    public: GraphicItemInterface duplicate();

    public: double getAngle();

    public: void setFulcrumPoint(GPoint point);

    public: void paint(Graphics g, number canvasAngle, IntegerDimension dimension, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: Node toDom(CanvasDom canvasDom);

    public: bool isValid();

    public: Points getPointsInterface();

    public: void setPointsInterface(Points points);

    public: Color getColor();

    public: void setColor(Color color);

    public: void mouseClicked(java::awt::event::MouseEvent mouseEvent, int32_t x, int32_t y);

    public: void mouseEntered(java::awt::event::MouseEvent mouseEvent);

    public: void mouseExited(java::awt::event::MouseEvent mouseEvent);

    public: void mousePressed(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseReleased(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseDragged(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseMoved(java::awt::event::MouseEvent mouseEvent, int32_t x, int32_t y);

    public: void keyPressed(java::awt::event::KeyEvent keyEvent);

    public: void keyReleased(java::awt::event::KeyEvent keyEvent);

    public: void keyTyped(java::awt::event::KeyEvent keyEvent);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEM_H
