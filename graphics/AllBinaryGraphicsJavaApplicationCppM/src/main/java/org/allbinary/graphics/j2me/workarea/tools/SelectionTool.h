
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Double.h"
        
#include <java/awt.h>
#include <java/util/HashMap.h>
class MutableTreeNode;
class GPoint;
class PointFactory;
class BasicColorFactory;
class CanvasDom;
class CanvasJPanel;
class IntegerDimension;
class LogUtil;
class RectangleCollisionPointUtil;
class CommonStrings;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"
class Color;
class Points;
class LinesGraphicItem;
class Graphics;
class MouseEvent;
class MouseStrings;
class KeyEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SelectionTool
            : public virtual Object
        , public virtual GraphicItemInterface {

    private: static inline const std::string NAME = "Selection Tool";

    public: static std::string getStaticName();

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: CanvasJPanel* canvasJPanel;

    private: bool active = true;

public: SelectionTool(CanvasJPanel* canvasJPanel);

    public: void setColor(Color* color);

    public: MutableTreeNode* getTreeNode();

    public: Points* getPointsInterface();

    public: void setPointsInterface(Points* points);

    public: bool isValid();

    public: bool isActive();

    public: void deactivate();

    public: void activate();

    public: void setFulcrumPoint(GPoint* point);

                //@Throws(Exception.constructor)
            
    public: void translate(int32_t x, int32_t y);

    public: void setRotate(double theta);

    public: void addRotate(double theta);

    public: void setAngle(double angle);

    public: void addAngle(double angle);

    public: double getAngle();

    private: bool controlIdDown= false;

    private: void makeSelection();

    private: Color* rectColor;

    public: int32_t getXRect();

    public: int32_t getYRect();

    public: void paint(Graphics* g, double canvasAngle, IntegerDimension* dimension, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: Node* toDom(CanvasDom* canvasDom);

    public: GPoint* removePoint();

    public: void addPoint(GPoint* point);

    public: std::string getName();

    private: GPoint* startPoint;

    private: GPoint* endPoint;

    public: void mouseClicked(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseMoved(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseEntered(java::awt::event::MouseEvent* mouseEvent);

    public: void mouseExited(java::awt::event::MouseEvent* mouseEvent);

    public: void mousePressed(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseReleased(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseDragged(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void keyPressed(java::awt::event::KeyEvent* keyEvent);

    public: void keyReleased(java::awt::event::KeyEvent* keyEvent);

    public: void keyTyped(java::awt::event::KeyEvent* keyEvent);

                //@Throws(Exception.constructor)
            
    public: GraphicItemInterface* duplicate();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_SELECTIONTOOL_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/swing/tree/MutableTreeNode.h>)
#include <javax/swing/tree/MutableTreeNode.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/math/RectangleCollisionPointUtil.h>)
#include <org/allbinary/math/RectangleCollisionPointUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h")
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/Color.h")
#include "org/allbinary/graphics/j2me/workarea/tools/Color.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/Points.h")
#include "org/allbinary/graphics/j2me/workarea/tools/Points.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h")
#include "org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/Graphics.h")
#include "org/allbinary/graphics/j2me/workarea/tools/Graphics.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/MouseEvent.h")
#include "org/allbinary/graphics/j2me/workarea/tools/MouseEvent.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/MouseStrings.h")
#include "org/allbinary/graphics/j2me/workarea/tools/MouseStrings.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/KeyEvent.h")
#include "org/allbinary/graphics/j2me/workarea/tools/KeyEvent.h"
#endif

        #endif
    
