
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Double.h"
        
#include <java/awt.h>
class BasicArrayList;
class BasicArrayListD;
class DefaultMutableTreeNode;
class MutableTreeNode;
class DomHelper;
class GameInputStrings;
class GPoint;
class PointFactory;
class BasicColorFactory;
class StatusFactory;
class CanvasDom;
class IntegerDimension;
class BasicGraphicsPipeline;

class LogUtil;
class PositionStrings;
class CommonStrings;
class BasicArrayList;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h"
class Color;
class Points;
class PointsDomUtil;
class Graphics2D;
class BasicStroke;
class PointsUtil;
class Graphics;
class MouseEvent;
class KeyEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LinesGraphicItem
            : public virtual Object
        , public GraphicItemInterface {

    private: static inline const std::string RECT = "rect";

    private: static inline const std::string ARC = "arc";

    private: static inline const std::string STRING = "string";

    private: static inline const std::string CHAR = "char";

    private: static inline const std::string IMAGE = "image";

    private: static inline int32_t item = 0;

    private: static inline const std::string NAME = "Line Tool";

    public: static std::string getStaticName();

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: GameInputStrings* gameInputStrings;

    private: DefaultMutableTreeNode* treeNode;

    private: BasicArrayList* pointTreeNodeVector;

    private: GPoint* currentMousePoint;

    private: GPoint* fulcrumPoint;

    private: bool active = false;

    private: double theta = 0;

    private: Color* color;

    private: Points* points;

public: LinesGraphicItem();

public: LinesGraphicItem(Node* linesNode);

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: void translate(int32_t x, int32_t y);

    public: void setRotate(double theta);

    public: void addRotate(double theta);

    public: void setAngle(double angle);

    public: void addAngle(double angle);

    public: MutableTreeNode* getTreeNode();

    public: std::string getName();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void addPoint(NodeList* pointNodes);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addPoint(GPoint* point);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: GPoint* removePoint();

    public: bool isActive();

    public: void deactivate();

    public: void activate();

                //@Throws(Exception.constructor)
            
    public: void duplicatePoints(BasicArrayList* list);

                //@Throws(Exception.constructor)
            
    public: GraphicItemInterface* duplicate();

    public: double getAngle();

    public: void setFulcrumPoint(GPoint* point);

    public: void paint(Graphics* g, double canvasAngle, IntegerDimension* dimension, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: Node* toDom(CanvasDom* canvasDom);

    public: bool isValid();

    public: Points* getPointsInterface();

    public: void setPointsInterface(Points* points);

    public: Color* getColor();

    public: void setColor(Color* color);

    public: void mouseClicked(java::awt::event::MouseEvent* mouseEvent, int32_t x, int32_t y);

    public: void mouseEntered(java::awt::event::MouseEvent* mouseEvent);

    public: void mouseExited(java::awt::event::MouseEvent* mouseEvent);

    public: void mousePressed(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseReleased(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseDragged(java::awt::event::MouseEvent* mouseEvent, int32_t xPixelsPerCell, int32_t yPixelsPerCell);

    public: void mouseMoved(java::awt::event::MouseEvent* mouseEvent, int32_t x, int32_t y);

    public: void keyPressed(java::awt::event::KeyEvent* keyEvent);

    public: void keyReleased(java::awt::event::KeyEvent* keyEvent);

    public: void keyTyped(java::awt::event::KeyEvent* keyEvent);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_LINESGRAPHICITEM_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/swing/tree/DefaultMutableTreeNode.h>)
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#endif
#if __has_include(<javax/swing/tree/MutableTreeNode.h>)
#include <javax/swing/tree/MutableTreeNode.h>
#endif
#if __has_include(<org/allbinary/dom/DomHelper.h>)
#include <org/allbinary/dom/DomHelper.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInputStrings.h>)
#include <org/allbinary/game/input/GameInputStrings.h>
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
#if __has_include(<org/allbinary/graphics/j2me/StatusFactory.h>)
#include <org/allbinary/graphics/j2me/StatusFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/IntegerDimension.h>
#endif
#if __has_include(<org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>)
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/math/PositionStrings.h>)
#include <org/allbinary/math/PositionStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
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
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/PointsDomUtil.h")
#include "org/allbinary/graphics/j2me/workarea/tools/PointsDomUtil.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/Graphics2D.h")
#include "org/allbinary/graphics/j2me/workarea/tools/Graphics2D.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/BasicStroke.h")
#include "org/allbinary/graphics/j2me/workarea/tools/BasicStroke.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/PointsUtil.h")
#include "org/allbinary/graphics/j2me/workarea/tools/PointsUtil.h"
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
    
