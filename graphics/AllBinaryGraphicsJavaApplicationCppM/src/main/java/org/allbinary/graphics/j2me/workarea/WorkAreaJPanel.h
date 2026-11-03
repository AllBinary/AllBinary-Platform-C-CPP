
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANEL_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANEL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <java/awt.h>
#include <java/util/EventListener.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedList.h>
#include <javax/swing.h>
class MutableTreeNode;
class DomHelper;
class StatusFactory;
class CanvasDom;
class CanvasJPanel;
class MyCanvasEvent;
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventListener.h>
class MyCanvasEventService;
class PropertiesJPanel;
class ToolJPanel;
class LOGGING;
class StdUtil;
class LogUtil;
class BasicArrayList;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/JPanel.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h"
class WorkAreaJTreeJPanel;
class Component;
class Dimension;
class WorkAreaDom;
class GridLayout;
class GridBagLayout;
class GridBagConstraints;
class KeyAdapter;
class KeyEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WorkAreaJPanel: public JPanel, public virtual WorkAreaJPanelInterface, public virtual MyCanvasEventListener, public virtual EventListener, public virtual Runnable {

    private: static inline org::w3c::dom::Document* document;

    public: static Document* getDocument();

    /*protected*/ public: LogUtil* logUtil;

    private: LinkedList* canvasJPanelList;

    private: JPanel* canvasHolderJPanel;

    private: std::string name;

    private: int32_t selectedFrame= 0;

    private: PropertiesJPanel* propertiesJPanel;

    private: WorkAreaJTreeJPanel* workAreaJTreeJPanel;

    private: bool isPlaying_ = false;

public: WorkAreaJPanel(std::string name, Dimension* dimension, int32_t x, int32_t y);

public: WorkAreaJPanel(WorkAreaDom* workAreaDom, Dimension* dimension);

    private: void initMyComponents(Dimension* dimension);

    private: HashMap<Object*, Object*>* getCanvasHashMap();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void play();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void stop();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isPlaying();

    public: std::string getName();

    public: void setName(std::string value);

    public: void disableCanvas();

    public: void enableCanvas();

    public: void deselect();

    public: void select();

    public: void changeZoom(int32_t factor);

    public: CanvasJPanel* getCurrentFrame();

    private: void initDuplicate(CanvasJPanel* newCanvasJPanel);

                //@Throws(Exception.constructor)
            
    private: void duplicate(MutableTreeNode* treeNode);

                //@Throws(Exception.constructor)
            
    public: void autoRotate(int32_t increments, int32_t totalAngle);

    public: void explodeAll();

                //@Throws(Exception.constructor)
            
    public: void autoExplode(int32_t numberOfFrames, int32_t explodeType);

                //@Throws(Exception.constructor)
            
    public: void autoMirror();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void select(int32_t index);

    private: void select(MutableTreeNode* treeNode);

                //@Throws(Exception.constructor)
            
    public: Document* toDocument();

    private: void initComponents();

    private: void innerJPanelKeyReleased(java::awt::event::KeyEvent* evt);

    private: void innerJPanelKeyPressed(java::awt::event::KeyEvent* evt);

    private: void innerJPanelKeyTyped(java::awt::event::KeyEvent* evt);

    public: void keyPressed(java::awt::event::KeyEvent* keyEvent);

    public: void keyReleased(java::awt::event::KeyEvent* keyEvent);

    public: void keyTyped(java::awt::event::KeyEvent* keyEvent);

    public: void delete_(MyCanvasEvent* evt);

                //@Throws(Exception.constructor)
            
    public: void duplicate(MyCanvasEvent* evt);

    public: void select(MyCanvasEvent* evt);

    public: void rotate(MyCanvasEvent* evt);

    public: void explode(MyCanvasEvent* evt);

                //@Throws(Exception.constructor)
            
    public: void autoExplode(MyCanvasEvent* evt);

                //@Throws(Exception.constructor)
            
    public: void center();

                //@Throws(Exception.constructor)
            
    public: void center(MyCanvasEvent* evt);

    public: void run();

    private: javax::swing::JPanel* innerJPanel;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANEL_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/util/EventListener.h>)
#include <java/util/EventListener.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/LinkedList.h>)
#include <java/util/LinkedList.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<javax/swing/tree/MutableTreeNode.h>)
#include <javax/swing/tree/MutableTreeNode.h>
#endif
#if __has_include(<org/allbinary/dom/DomHelper.h>)
#include <org/allbinary/dom/DomHelper.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/StatusFactory.h>)
#include <org/allbinary/graphics/j2me/StatusFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventListener.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventListener.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h>)
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/properties/PropertiesJPanel.h>)
#include <org/allbinary/graphics/j2me/workarea/properties/PropertiesJPanel.h>
#endif
#if __has_include(<org/allbinary/graphics/j2me/workarea/tools/ToolJPanel.h>)
#include <org/allbinary/graphics/j2me/workarea/tools/ToolJPanel.h>
#endif
#if __has_include(<org/allbinary/log/LOGGING.h>)
#include <org/allbinary/log/LOGGING.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/JPanel.h")
#include "org/allbinary/graphics/j2me/workarea/JPanel.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h")
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/WorkAreaJTreeJPanel.h")
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJTreeJPanel.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/Component.h")
#include "org/allbinary/graphics/j2me/workarea/Component.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/Dimension.h")
#include "org/allbinary/graphics/j2me/workarea/Dimension.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/WorkAreaDom.h")
#include "org/allbinary/graphics/j2me/workarea/WorkAreaDom.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/GridLayout.h")
#include "org/allbinary/graphics/j2me/workarea/GridLayout.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/GridBagLayout.h")
#include "org/allbinary/graphics/j2me/workarea/GridBagLayout.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/GridBagConstraints.h")
#include "org/allbinary/graphics/j2me/workarea/GridBagConstraints.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/KeyAdapter.h")
#include "org/allbinary/graphics/j2me/workarea/KeyAdapter.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/KeyEvent.h")
#include "org/allbinary/graphics/j2me/workarea/KeyEvent.h"
#endif

        #endif
    
