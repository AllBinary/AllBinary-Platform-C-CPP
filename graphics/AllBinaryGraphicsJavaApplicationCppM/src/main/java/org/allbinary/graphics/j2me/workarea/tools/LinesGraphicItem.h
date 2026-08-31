
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

      
#include <java/util/Vector.h>

      
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
        

    private: static const RECT: string = "rect";

    private: static const ARC: string = "arc";

    private: static const STRING: string = "string";

    private: static const CHAR: string = "char";

    private: static const IMAGE: string = "image";

    private: static item: int32_t = 0;

    private: static const NAME: string = "Line Tool";

    public static string getStaticName();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const gameInputStrings: GameInputStrings = GameInputStrings.getInstance()!;

    private: treeNode: DefaultMutableTreeNode;

    private: pointTreeNodeVector: Vector;

    private: currentMousePoint: GPoint;

    private: fulcrumPoint: GPoint;

    private: active: bool = false;

    private: theta: double = 0;

    private: color: Color = new Color(BasicColorFactory.getInstance()!.WHITE.intValue());

    private: points: Points;

public constructor ();

public constructor (Node linesNode);

                //@Throws(Exception.constructor)
            
    public init();

                //@Throws(Exception.constructor)
            
    public translate(int32_t x, int32_t y);

    public setRotate(double theta);

    public addRotate(double theta);

    public setAngle(double angle);

    public addAngle(double angle);

    public MutableTreeNode getTreeNode();

    public string getName();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    addPoint(NodeList pointNodes);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addPoint(GPoint point);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public GPoint removePoint();

    public bool isActive();

    public deactivate();

    public activate();

                //@Throws(Exception.constructor)
            
    public duplicatePoints(BasicArrayList list);

                //@Throws(Exception.constructor)
            
    public GraphicItemInterface duplicate();

    public double getAngle();

    public setFulcrumPoint(GPoint point);

    public paint(Graphics g, number canvasAngle, IntegerDimension dimension, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public Node toDom(CanvasDom canvasDom);

    public bool isValid();

    public Points getPointsInterface();

    public setPointsInterface(Points points);

    public Color getColor();

    public setColor(Color color);

    public mouseClicked(java.awt.event.MouseEvent mouseEvent, int32_t x, int32_t y);

    public mouseEntered(java.awt.event.MouseEvent mouseEvent);

    public mouseExited(java.awt.event.MouseEvent mouseEvent);

    public mousePressed(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public mouseReleased(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public mouseDragged(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public mouseMoved(java.awt.event.MouseEvent mouseEvent, int32_t x, int32_t y);

    public keyPressed(java.awt.event.KeyEvent keyEvent);

    public keyReleased(java.awt.event.KeyEvent keyEvent);

    public keyTyped(java.awt.event.KeyEvent keyEvent);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEM_H
