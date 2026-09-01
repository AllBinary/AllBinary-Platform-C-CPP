
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

    std::string getName()

    void setColor(Color color)

    MutableTreeNode getTreeNode()

    Points getPointsInterface()

    void setPointsInterface(Points points)

    bool isValid()

    bool isActive()

    void deactivate()

    void activate()

    void setFulcrumPoint(GPoint point)

                //@Throws(Exception.constructor)
            
    void translate(int32_t x, int32_t y)

    void setRotate(double theta)

    void addRotate(double theta)

    void setAngle(double angle)

    void addAngle(double angle)

    double getAngle()

    void paint(Graphics g, number canvasAngle, IntegerDimension dimension, int32_t x, int32_t y)

                //@Throws(Exception.constructor)
            
    Node toDom(CanvasDom canvasDom)

    GPoint removePoint()

    void addPoint(GPoint point)

    void mouseClicked(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell)

    void mouseEntered(java::awt::event::MouseEvent mouseEvent)

    void mouseExited(java::awt::event::MouseEvent mouseEvent)

    void mousePressed(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell)

    void mouseReleased(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell)

    void mouseDragged(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell)

    void mouseMoved(java::awt::event::MouseEvent mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell)

    void keyPressed(java::awt::event::KeyEvent keyEvent)

    void keyReleased(java::awt::event::KeyEvent keyEvent)

    void keyTyped(java::awt::event::KeyEvent keyEvent)

                //@Throws(Exception.constructor)
            
    GraphicItemInterface duplicate()

};

            

