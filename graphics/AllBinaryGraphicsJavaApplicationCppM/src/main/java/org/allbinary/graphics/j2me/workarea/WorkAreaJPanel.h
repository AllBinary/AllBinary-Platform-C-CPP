
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

            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <java/awt.h>

      
#include <java/util/EventListener.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/LinkedList.h>

      
#include <javax/swing.h>

      
#include <javax/swing/tree/MutableTreeNode.h>

      
#include <org/allbinary/dom/DomHelper.h>

      
#include <org/allbinary/graphics/j2me/StatusFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasDom.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventListener.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h>

      
#include <org/allbinary/graphics/j2me/workarea/properties/PropertiesJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/ToolJPanel.h>

      
#include <org/allbinary/log/LOGGING.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "WorkAreaJPanelInterface.h"
#include "WorkAreaJTreeJPanel.h"
#include "Component.h"
#include "Dimension.h"
#include "WorkAreaDom.h"
#include "GridLayout.h"
#include "GridBagLayout.h"
#include "GridBagConstraints.h"
#include "KeyAdapter.h"
#include "KeyEvent.h"

class WorkAreaJPanel: public JPanel, public WorkAreaJPanelInterface, public MyCanvasEventListener, public EventListener, public Runnable {

    private: static org::w3c::dom::Document document;

    public: static Document getDocument();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: LinkedList canvasJPanelList;

    private: JPanel canvasHolderJPanel;

    private: std::string name;

    private: int32_t selectedFrame= 0;

    private: PropertiesJPanel propertiesJPanel;

    private: WorkAreaJTreeJPanel workAreaJTreeJPanel;

    private: bool isPlaying = false;

public: WorkAreaJPanel(std::string name, Dimension dimension, int32_t x, int32_t y);

public: WorkAreaJPanel(WorkAreaDom workAreaDom, Dimension dimension);

    private: void initMyComponents(Dimension dimension);

    private: HashMap<Object*, Object*> getCanvasHashMap();
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

    public: CanvasJPanel getCurrentFrame();

    private: void initDuplicate(CanvasJPanel newCanvasJPanel);

                //@Throws(Exception.constructor)
            
    private: void duplicate(MutableTreeNode treeNode);

                //@Throws(Exception.constructor)
            
    public: void autoRotate(int32_t increments, int32_t totalAngle);

    public: void explodeAll();

                //@Throws(Exception.constructor)
            
    public: void autoExplode(int32_t numberOfFrames, int32_t explodeType);

                //@Throws(Exception.constructor)
            
    public: void autoMirror();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void select(int32_t index);

    private: void select(MutableTreeNode treeNode);

                //@Throws(Exception.constructor)
            
    public: Document toDocument();

    private: void initComponents();

    private: void innerJPanelKeyReleased(java::awt::event::KeyEvent evt);

    private: void innerJPanelKeyPressed(java::awt::event::KeyEvent evt);

    private: void innerJPanelKeyTyped(java::awt::event::KeyEvent evt);

    public: void keyPressed(java::awt::event::KeyEvent keyEvent);

    public: void keyReleased(java::awt::event::KeyEvent keyEvent);

    public: void keyTyped(java::awt::event::KeyEvent keyEvent);

    public: void delete_(MyCanvasEvent evt);

                //@Throws(Exception.constructor)
            
    public: void duplicate(MyCanvasEvent evt);

    public: void select(MyCanvasEvent evt);

    public: void rotate(MyCanvasEvent evt);

    public: void explode(MyCanvasEvent evt);

                //@Throws(Exception.constructor)
            
    public: void autoExplode(MyCanvasEvent evt);

                //@Throws(Exception.constructor)
            
    public: void center();

                //@Throws(Exception.constructor)
            
    public: void center(MyCanvasEvent evt);

    public: void run();

    private: javax::swing::JPanel innerJPanel;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANEL_H
