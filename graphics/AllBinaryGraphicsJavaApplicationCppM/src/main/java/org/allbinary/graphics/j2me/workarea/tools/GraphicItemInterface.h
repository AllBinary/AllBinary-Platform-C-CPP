
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Double.h"
        
#include <java/awt.h>
class MutableTreeNode;
class GPoint;
class CanvasDom;
class IntegerDimension;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Color;
class Points;
class Graphics;
class MouseEvent;
class KeyEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GraphicItemInterface
            : public virtual Object
         {

    public: virtual std::string getName() = 0;

    public: virtual void setColor(Color* color) = 0;

    public: virtual MutableTreeNode* getTreeNode() = 0;

    public: virtual Points* getPointsInterface() = 0;

    public: virtual void setPointsInterface(Points* points) = 0;

    public: virtual bool isValid() = 0;

    public: virtual bool isActive() = 0;

    public: virtual void deactivate() = 0;

    public: virtual void activate() = 0;

    public: virtual void setFulcrumPoint(GPoint* point) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void translate(int32_t x, int32_t y) = 0;

    public: virtual void setRotate(double theta) = 0;

    public: virtual void addRotate(double theta) = 0;

    public: virtual void setAngle(double angle) = 0;

    public: virtual void addAngle(double angle) = 0;

    public: virtual double getAngle() = 0;

    public: virtual void paint(Graphics* g, double canvasAngle, IntegerDimension* dimension, int32_t x, int32_t y) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual Node* toDom(CanvasDom* canvasDom) = 0;

    public: virtual GPoint* removePoint() = 0;

    public: virtual void addPoint(GPoint* point) = 0;

    public: virtual void mouseClicked(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) = 0;

    public: virtual void mouseEntered(java::awt::event::MouseEvent* mouseEvent) = 0;

    public: virtual void mouseExited(java::awt::event::MouseEvent* mouseEvent) = 0;

    public: virtual void mousePressed(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) = 0;

    public: virtual void mouseReleased(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) = 0;

    public: virtual void mouseDragged(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) = 0;

    public: virtual void mouseMoved(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell) = 0;

    public: virtual void keyPressed(java::awt::event::KeyEvent* keyEvent) = 0;

    public: virtual void keyReleased(java::awt::event::KeyEvent* keyEvent) = 0;

    public: virtual void keyTyped(java::awt::event::KeyEvent* keyEvent) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual GraphicItemInterface* duplicate() = 0;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_GRAPHICITEMINTERFACE_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<javax/swing/tree/MutableTreeNode.h>)
#include <javax/swing/tree/MutableTreeNode.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/Color.h")
#include "org/allbinary/graphics/j2me/workarea/tools/Color.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/Points.h")
#include "org/allbinary/graphics/j2me/workarea/tools/Points.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/Graphics.h")
#include "org/allbinary/graphics/j2me/workarea/tools/Graphics.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/MouseEvent.h")
#include "org/allbinary/graphics/j2me/workarea/tools/MouseEvent.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/KeyEvent.h")
#include "org/allbinary/graphics/j2me/workarea/tools/KeyEvent.h"
#endif

        #endif
    
