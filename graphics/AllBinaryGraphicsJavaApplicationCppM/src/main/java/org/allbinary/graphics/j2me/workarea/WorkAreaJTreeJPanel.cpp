
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

public constructor (string workAreaName){

            super();
        this.initComponents();
    
this.rootTreeNode= new DefaultMutableTreeNode(workAreaName);
    
this.workAreaPropertiesJPanel!.removeAll();
    
this.updateTree();
    
this.highlightedBasicArrayList= new BasicArrayListD();
    
}


    public add(MutableTreeNode treeNode){
this.rootTreeNode!.add(treeNode);
    
}


    public updateTree(){
this.workAreaJTree= new JTree(this.rootTreeNode);
    
this.workAreaJTree!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
workAreaJTreeMousePressed(evt);
    
}

                                }
                            );
    
this.workAreaPropertiesJPanel!.removeAll();
    
this.workAreaPropertiesJPanel!.add(this.workAreaJTree);
    
}


    public BasicArrayList getNode(std::vector<TreePath> treePathArray){

    basicArrayList: BasicArrayList = new BasicArrayListD();;
    

                        if(treePathArray != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < treePathArray!.length; index++)
        {
basicArrayList!.add(this.getNode(treePathArray[index]!));
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicArrayList;
    
}


    public DefaultMutableTreeNode getNode(TreePath treePath){

                        if(treePath != 
                                    null
                                )
                        
                                    {
                                    
    obj: std::vector<any> = treePath!.getPath()!;;
    

                        if(obj != 
                                    null
                                )
                        
                                    {
                                    
    node: DefaultMutableTreeNode = obj[obj.length -1]! as DefaultMutableTreeNode;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public deselectAll(){

    size: int32_t = this.highlightedBasicArrayList!.size()!;;
    
this.logUtil!.putF("size: " +size, this, "deselectAll");
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    node: DefaultMutableTreeNode = this.highlightedBasicArrayList!.get(index) as DefaultMutableTreeNode;;
    
MyGraphicItemEventService.fire(new MyGraphicItemEvent(new MyGraphicItemEventSource(MyGraphicItemEventService.DESELECT, node)));
    
}

this.highlightedBasicArrayList!.clear();
    
}


                //@Throws(Exception.constructor)
            
    public selectGraphicItem(DefaultMutableTreeNode node){
this.highlightedBasicArrayList!.add(node);
    
MyGraphicItemEventService.fire(new MyGraphicItemEvent(new MyGraphicItemEventSource(MyGraphicItemEventService.SELECT, node)));
    
}


                //@Throws(Exception.constructor)
            
    public removeGraphicItem(DefaultMutableTreeNode node){
MyGraphicItemEventService.fire(new MyGraphicItemEvent(new MyGraphicItemEventSource(MyGraphicItemEventService.DELETE, node)));
    
}


                //@Throws(Exception.constructor)
            
    public removeCanvas(DefaultMutableTreeNode node){
MyCanvasEventService.fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService.DELETE, node)));
    
}


                //@Throws(Exception.constructor)
            
    public remove(TreePath treePath){

    node: DefaultMutableTreeNode = this.getNode(treePath)!;;
    

                        if(node != 
                                    null
                                )
                        
                                    {
                                    
                        if(node.getUserObject() instanceof CanvasTreeLabel)
                        
                                    {
                                    this.removeCanvas(node);
    

                                    }
                                
                        else {
                            this.removeGraphicItem(node);
    

                        }
                            

                                    }
                                

    parent: DefaultMutableTreeNode = node.getParent() as DefaultMutableTreeNode;;
    
parent.remove(node);
    
}


                //@Throws(Exception.constructor)
            
    copy(){

    treePath: TreePath = this.workAreaJTree!.getSelectionPath()!;;
    
this.copy(treePath);
    
this.updateTree();
    
this.expand();
    
this.repaint();
    
}


                //@Throws(Exception.constructor)
            
    copy(TreePath treePath){

    node: DefaultMutableTreeNode = this.getNode(treePath)!;;
    

                        if(node != 
                                    null
                                )
                        
                                    {
                                    
                        if(node.getUserObject() instanceof CanvasTreeLabel)
                        
                                    {
                                    MyCanvasEventService.fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService.DUPLICATE, node)));
    

                                    }
                                
                        else {
                            MyGraphicItemEventService.fire(new MyGraphicItemEvent(new MyGraphicItemEventSource(MyGraphicItemEventService.DUPLICATE, node)));
    

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public rotate(TreePath treePath, double angle){

    node: DefaultMutableTreeNode = this.getNode(treePath)!;;
    

                        if(node != 
                                    null
                                )
                        
                                    {
                                    
                        if(node.getUserObject() instanceof CanvasTreeLabel)
                        
                                    {
                                    MyCanvasEventService.fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService.ROTATE, angle, node)));
    

                                    }
                                
                        else {
                            MyGraphicItemEventService.fire(new MyGraphicItemEvent(new MyGraphicItemEventSource(MyGraphicItemEventService.ROTATE, angle, node)));
    

                        }
                            

                                    }
                                
}


    public MutableTreeNode getRootTreeNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rootTreeNode;
    
}


    public expand(){
this.workAreaJTree!.expandRow(0);
    
this.workAreaJTree!.expandRow(1);
    
}


    public expand(TreePath treePath){
this.workAreaJTree!.expandPath(treePath);
    
}


    initComponents(){
itemJPopupMenu= new javax.swing.JPopupMenu();
    
this.deleteJMenuItem= new javax.swing.JMenuItem();
    
this.copyJMenuItem= new javax.swing.JMenuItem();
    
this.rotateJMenuItem= new javax.swing.JMenuItem();
    
this.itemJScrollPane1= new javax.swing.JScrollPane();
    
this.workAreaPropertiesJPanel= new javax.swing.JPanel();
    
itemJPopupMenu!.addPopupMenuListener(new class extends javax.swing.event.PopupMenuListener
                                {
                                
    public popupMenuCanceled(javax.swing.event.PopupMenuEvent evt){
}

    public popupMenuWillBecomeInvisible(javax.swing.event.PopupMenuEvent evt){
itemJPopupMenuPopupMenuWillBecomeInvisible(evt);
    
}

    public popupMenuWillBecomeVisible(javax.swing.event.PopupMenuEvent evt){
itemJPopupMenuPopupMenuWillBecomeVisible(evt);
    
}

                                }
                            );
    
this.deleteJMenuItem!.setText("Delete");
    
this.deleteJMenuItem!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
deleteJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this.itemJPopupMenu!.add(this.deleteJMenuItem);
    
this.copyJMenuItem!.setText("Copy");
    
this.copyJMenuItem!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
copyJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this.itemJPopupMenu!.add(this.copyJMenuItem);
    
this.rotateJMenuItem!.setText("Rotate 45*");
    
this.rotateJMenuItem!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
rotateJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this.itemJPopupMenu!.add(this.rotateJMenuItem);
    
setLayout(new java.awt.GridLayout(1, 1));
    
this.workAreaPropertiesJPanel!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mousePressed(java.awt.event.MouseEvent evt){
workAreaPropertiesJPanelMousePressed(evt);
    
}

                                }
                            );
    
this.workAreaPropertiesJPanel!.setLayout(new java.awt.GridLayout(1, 0));
    
this.itemJScrollPane1!.setViewportView(this.workAreaPropertiesJPanel);
    
add(this.itemJScrollPane1);
    
}


    rotateJMenuItemMousePressed(java.awt.event.MouseEvent evt){

        try {
            
    treePath: TreePath = this.workAreaJTree!.getSelectionPath()!;;
    
this.rotate(treePath, 45);
    
this.updateTree();
    
this.expand();
    
this.repaint();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "rotateJMenuItemMousePressed", e);
    
}

}


    workAreaJTreeMousePressed(java.awt.event.MouseEvent evt){

        try {
            
    selectedTreePathArray: std::vector<TreePath> = this.workAreaJTree!.getSelectionPaths()!;;
    

    list: BasicArrayList = this.getNode(selectedTreePathArray)!;;
    

                        if(list.size() > 0)
                        
                                    {
                                    
                        if((evt.getModifiers()&evt.BUTTON3_MASK) == evt.BUTTON3_MASK)
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < selectedTreePathArray!.length; index++)
        {

    defaultMutableTreeNode: DefaultMutableTreeNode = list.get(index) as DefaultMutableTreeNode;;
    

                        if(defaultMutableTreeNode!.getUserObject() instanceof CanvasTreeLabel)
                        
                                    {
                                    this.itemJPopupMenu!.show(this, evt.getX(), evt.getY());
    

                                    }
                                
                        else {
                            this.itemJPopupMenu!.show(this, evt.getX(), evt.getY());
    

                        }
                            
}


                                    }
                                

                        if((evt.getModifiers()&evt.BUTTON1_MASK) == evt.BUTTON1_MASK)
                        
                                    {
                                    this.deselectAll();
    




                        for (
    index: int32_t = 0;index < selectedTreePathArray!.length; index++)
        {

    defaultMutableTreeNode: DefaultMutableTreeNode = list.get(index) as DefaultMutableTreeNode;;
    

                        if(defaultMutableTreeNode!.getUserObject() instanceof CanvasTreeLabel)
                        
                                    {
                                    MyCanvasEventService.fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService.SELECT, defaultMutableTreeNode)));
    

                                    }
                                
                        else {
                            this.selectGraphicItem(defaultMutableTreeNode);
    

                        }
                            
}


                                    }
                                

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "workAreaJTreeMousePressed", e);
    
}

}


    itemJPopupMenuPopupMenuWillBecomeInvisible(javax.swing.event.PopupMenuEvent evt){
}


    itemJPopupMenuPopupMenuWillBecomeVisible(javax.swing.event.PopupMenuEvent evt){
}


    copyJMenuItemMousePressed(java.awt.event.MouseEvent evt){

        try {
            this.copy();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "copyJMenuItemMousePressed", e);
    
}

}


    deleteJMenuItemMousePressed(java.awt.event.MouseEvent evt){

        try {
            
    selectedTreePathArray: std::vector<TreePath> = this.workAreaJTree!.getSelectionPaths()!;;
    




                        for (
    index: int32_t = 0;index < selectedTreePathArray!.length; index++)
        {

    treePath: TreePath = selectedTreePathArray[index]!;;
    
this.remove(treePath);
    
this.updateTree();
    
this.expand();
    
this.repaint();
    
}


                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "deleteJMenuItemMousePressed", e);
    
}

}


    workAreaPropertiesJPanelMousePressed(java.awt.event.MouseEvent evt){
}


    private: copyJMenuItem: javax.swing.JMenuItem;

    private: deleteJMenuItem: javax.swing.JMenuItem;

    private: itemJPopupMenu: javax.swing.JPopupMenu;

    private: itemJScrollPane1: javax.swing.JScrollPane;

    private: rotateJMenuItem: javax.swing.JMenuItem;

    private: workAreaPropertiesJPanel: javax.swing.JPanel;

};

            

