
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJTREEJPANEL_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJTREEJPANEL_H

            #include "../../../../../java/lang/Exception.h"
        
#include <javax/swing.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <javax/swing/tree/MutableTreeNode.h>

      
#include <javax/swing/tree/TreePath.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/CanvasTreeLabel.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h>

      
#include <org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventSource.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventService.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventSource.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JTree.h"
#include "MouseAdapter.h"
#include "MouseEvent.h"
#include "JPopupMenu.h"
#include "JMenuItem.h"
#include "JScrollPane.h"
#include "PopupMenuListener.h"
#include "PopupMenuEvent.h"
#include "GridLayout.h"

class WorkAreaJTreeJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: rootTreeNode: DefaultMutableTreeNode;

    private: workAreaJTree: JTree;

    private: highlightedBasicArrayList: BasicArrayList;

public constructor (string workAreaName);

    public add(MutableTreeNode treeNode);

    public updateTree();

    public BasicArrayList getNode(std::vector<TreePath> treePathArray);

    public DefaultMutableTreeNode getNode(TreePath treePath);

                //@Throws(Exception.constructor)
            
    public deselectAll();

                //@Throws(Exception.constructor)
            
    public selectGraphicItem(DefaultMutableTreeNode node);

                //@Throws(Exception.constructor)
            
    public removeGraphicItem(DefaultMutableTreeNode node);

                //@Throws(Exception.constructor)
            
    public removeCanvas(DefaultMutableTreeNode node);

                //@Throws(Exception.constructor)
            
    public remove(TreePath treePath);

                //@Throws(Exception.constructor)
            
    copy();

                //@Throws(Exception.constructor)
            
    copy(TreePath treePath);

                //@Throws(Exception.constructor)
            
    public rotate(TreePath treePath, double angle);

    public MutableTreeNode getRootTreeNode();

    public expand();

    public expand(TreePath treePath);

    initComponents();

    rotateJMenuItemMousePressed(java.awt.event.MouseEvent evt);

    workAreaJTreeMousePressed(java.awt.event.MouseEvent evt);

    itemJPopupMenuPopupMenuWillBecomeInvisible(javax.swing.event.PopupMenuEvent evt);

    itemJPopupMenuPopupMenuWillBecomeVisible(javax.swing.event.PopupMenuEvent evt);

    copyJMenuItemMousePressed(java.awt.event.MouseEvent evt);

    deleteJMenuItemMousePressed(java.awt.event.MouseEvent evt);

    workAreaPropertiesJPanelMousePressed(java.awt.event.MouseEvent evt);

    private: copyJMenuItem: javax.swing.JMenuItem;

    private: deleteJMenuItem: javax.swing.JMenuItem;

    private: itemJPopupMenu: javax.swing.JPopupMenu;

    private: itemJScrollPane1: javax.swing.JScrollPane;

    private: rotateJMenuItem: javax.swing.JMenuItem;

    private: workAreaPropertiesJPanel: javax.swing.JPanel;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJTREEJPANEL_H
