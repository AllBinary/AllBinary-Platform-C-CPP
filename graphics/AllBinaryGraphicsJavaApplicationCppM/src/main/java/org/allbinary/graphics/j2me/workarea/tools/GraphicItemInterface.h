
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMINTERFACE_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMINTERFACE_H

            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Double.h"
        
#include <java/awt.h>

      
#include <javax/swing/tree/MutableTreeNode.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Color.h"
#include "Points.h"
#include "Graphics.h"
#include "MouseEvent.h"
#include "KeyEvent.h"

class GraphicItemInterface {
        

    string getName();

    setColor(Color color);

    MutableTreeNode getTreeNode();

    Points getPointsInterface();

    setPointsInterface(Points points);

    bool isValid();

    bool isActive();

    deactivate();

    activate();

    setFulcrumPoint(GPoint point);

                //@Throws(Exception.constructor)
            
    translate(int32_t x, int32_t y);

    setRotate(double theta);

    addRotate(double theta);

    setAngle(double angle);

    addAngle(double angle);

    double getAngle();

    paint(Graphics g, number canvasAngle, IntegerDimension dimension, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    Node toDom(CanvasDom canvasDom);

    GPoint removePoint();

    addPoint(GPoint point);

    mouseClicked(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    mouseEntered(java.awt.event.MouseEvent mouseEvent);

    mouseExited(java.awt.event.MouseEvent mouseEvent);

    mousePressed(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    mouseReleased(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    mouseDragged(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    mouseMoved(java.awt.event.MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    keyPressed(java.awt.event.KeyEvent keyEvent);

    keyReleased(java.awt.event.KeyEvent keyEvent);

    keyTyped(java.awt.event.KeyEvent keyEvent);

                //@Throws(Exception.constructor)
            
    GraphicItemInterface duplicate();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMINTERFACE_H
