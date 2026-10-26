
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOL_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOL_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Double.h"
        
#include <java/awt.h>

      
#include <java/util/HashMap.h>

      
#include <javax/swing/tree/MutableTreeNode.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/RectangleCollisionPointUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GraphicItemInterface.h"
#include "Color.h"
#include "Points.h"
#include "LinesGraphicItem.h"
#include "Graphics.h"
#include "MouseEvent.h"
#include "MouseStrings.h"
#include "KeyEvent.h"

class SelectionTool
            : public Object
        : public GraphicItemInterface {

    private: static const std::string NAME = "Selection Tool";

    public: static std::string getStaticName();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: CanvasJPanel canvasJPanel;

    private: bool active = true;

public: SelectionTool(CanvasJPanel canvasJPanel);

    public: void setColor(Color color);

    public: MutableTreeNode getTreeNode();

    public: Points getPointsInterface();

    public: void setPointsInterface(Points points);

    public: bool isValid();

    public: bool isActive();

    public: void deactivate();

    public: void activate();

    public: void setFulcrumPoint(GPoint point);

                //@Throws(Exception.constructor)
            
    public: void translate(int32_t x, int32_t y);

    public: void setRotate(double theta);

    public: void addRotate(double theta);

    public: void setAngle(double angle);

    public: void addAngle(double angle);

    public: double getAngle();

    private: bool controlIdDown= false;

    private: void makeSelection();

    private: const Color rectColor = Color(BasicColorFactory::getInstance().RED.intValue());

    public: int32_t getXRect();

    public: int32_t getYRect();

    public: void paint(Graphics g, number canvasAngle, IntegerDimension dimension, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: Node toDom(CanvasDom canvasDom);

    public: GPoint removePoint();

    public: void addPoint(GPoint point);

    public: std::string getName();

    private: GPoint startPoint = PointFactory::getInstance().ZERO_ZERO;

    private: GPoint endPoint = this->startPoint;

    public: void mouseClicked(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseMoved(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseEntered(java::awt::event::MouseEvent mouseEvent);

    public: void mouseExited(java::awt::event::MouseEvent mouseEvent);

    public: void mousePressed(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseReleased(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseDragged(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void keyPressed(java::awt::event::KeyEvent keyEvent);

    public: void keyReleased(java::awt::event::KeyEvent keyEvent);

    public: void keyTyped(java::awt::event::KeyEvent keyEvent);

                //@Throws(Exception.constructor)
            
    public: GraphicItemInterface duplicate();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOL_H
