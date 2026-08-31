
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

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
            #include "../../../../../java/lang/Thread.h"
        
            #include "../../../../../java/lang/Runnable.h"
        
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

class WorkAreaJPanel: public JPanel: public WorkAreaJPanelInterface, public MyCanvasEventListener, public EventListener, public Runnable {
        

    private: static document: org.w3c.dom.Document;

    public static Document getDocument();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: canvasJPanelList: LinkedList;

    private: canvasHolderJPanel: JPanel;

    private: name: string;

    private: selectedFrame: int32_t= 0;

    private: propertiesJPanel: PropertiesJPanel;

    private: workAreaJTreeJPanel: WorkAreaJTreeJPanel;

    private: isPlaying: bool = false;

public constructor (string name, Dimension dimension, int32_t x, int32_t y);

public constructor (WorkAreaDom workAreaDom, Dimension dimension);

    initMyComponents(Dimension dimension);

    HashMap<any, any> getCanvasHashMap();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public play();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public stop();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isPlaying();

    public string getName();

    public setName(string value);

    public disableCanvas();

    public enableCanvas();

    public deselect();

    public select();

    public changeZoom(int32_t factor);

    public CanvasJPanel getCurrentFrame();

    initDuplicate(CanvasJPanel newCanvasJPanel);

                //@Throws(Exception.constructor)
            
    duplicate(MutableTreeNode treeNode);

                //@Throws(Exception.constructor)
            
    public autoRotate(int32_t increments, int32_t totalAngle);

    public explodeAll();

                //@Throws(Exception.constructor)
            
    public autoExplode(int32_t numberOfFrames, int32_t explodeType);

                //@Throws(Exception.constructor)
            
    public autoMirror();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    select(int32_t index);

    select(MutableTreeNode treeNode);

                //@Throws(Exception.constructor)
            
    public Document toDocument();

    initComponents();

    innerJPanelKeyReleased(java.awt.event.KeyEvent evt);

    innerJPanelKeyPressed(java.awt.event.KeyEvent evt);

    innerJPanelKeyTyped(java.awt.event.KeyEvent evt);

    public keyPressed(java.awt.event.KeyEvent keyEvent);

    public keyReleased(java.awt.event.KeyEvent keyEvent);

    public keyTyped(java.awt.event.KeyEvent keyEvent);

    public delete(MyCanvasEvent evt);

                //@Throws(Exception.constructor)
            
    public duplicate(MyCanvasEvent evt);

    public select(MyCanvasEvent evt);

    public rotate(MyCanvasEvent evt);

    public explode(MyCanvasEvent evt);

                //@Throws(Exception.constructor)
            
    public autoExplode(MyCanvasEvent evt);

                //@Throws(Exception.constructor)
            
    public center();

                //@Throws(Exception.constructor)
            
    public center(MyCanvasEvent evt);

    public run();

    private: innerJPanel: javax.swing.JPanel;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANEL_H
