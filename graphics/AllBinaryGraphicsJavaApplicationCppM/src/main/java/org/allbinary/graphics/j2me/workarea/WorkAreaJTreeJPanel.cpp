
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
        



            #include <vector>
        
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

class WorkAreaJTreeJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: DefaultMutableTreeNode rootTreeNode;

    private: JTree workAreaJTree;

    private: BasicArrayList highlightedBasicArrayList;

public: WorkAreaJTreeJPanel(std::string workAreaName){
this->initComponents();
    
this->rootTreeNode= DefaultMutableTreeNode(workAreaName);
    
this->workAreaPropertiesJPanel.removeAll();
    
this->updateTree();
    
this->highlightedBasicArrayList= BasicArrayListD();
    
}


    public: void add(MutableTreeNode treeNode){
this->rootTreeNode.add(treeNode);
    
}


    public: void updateTree(){
this->workAreaJTree= JTree(this->rootTreeNode);
    
this->workAreaJTree.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
workAreaJTreeMousePressed(evt);
    
}

                                }
                            );
    
this->workAreaPropertiesJPanel.removeAll();
    
this->workAreaPropertiesJPanel.add(this->workAreaJTree);
    
}


    public: BasicArrayList getNode(std::vector<TreePath> treePathArray){

    BasicArrayList basicArrayList = BasicArrayListD();;
    

                        if(treePathArray != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < treePathArray.size(); index++)
        {
basicArrayList.add(this->getNode(treePathArray[index]!));
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicArrayList;
    
}


    public: DefaultMutableTreeNode getNode(TreePath treePath){

                        if(treePath != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::vector<Object*> obj = treePath.getPath();;
    

                        if(obj != 
                                    nullptr
                                )
                        
                                    {
                                    
    DefaultMutableTreeNode node = obj[obj.size() -1]! as DefaultMutableTreeNode;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: void deselectAll(){

    int32_t size = this->highlightedBasicArrayList.size();;
    
this->logUtil.putF("size: " +size, this, "deselectAll");
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    DefaultMutableTreeNode node = this->highlightedBasicArrayList.get(index) as DefaultMutableTreeNode;;
    
MyGraphicItemEventService::fire(MyGraphicItemEvent(MyGraphicItemEventSource(MyGraphicItemEventService::DESELECT, node)));
    
}

this->highlightedBasicArrayList.clear();
    
}


                //@Throws(Exception.constructor)
            
    public: void selectGraphicItem(DefaultMutableTreeNode node){
this->highlightedBasicArrayList.add(node);
    
MyGraphicItemEventService::fire(MyGraphicItemEvent(MyGraphicItemEventSource(MyGraphicItemEventService::SELECT, node)));
    
}


                //@Throws(Exception.constructor)
            
    public: void removeGraphicItem(DefaultMutableTreeNode node){
MyGraphicItemEventService::fire(MyGraphicItemEvent(MyGraphicItemEventSource(MyGraphicItemEventService::DELETE, node)));
    
}


                //@Throws(Exception.constructor)
            
    public: void removeCanvas(DefaultMutableTreeNode node){
MyCanvasEventService::fire(MyCanvasEvent(MyCanvasEventSource(MyCanvasEventService::DELETE, node)));
    
}


                //@Throws(Exception.constructor)
            
    public: void remove(TreePath treePath){

    DefaultMutableTreeNode node = this->getNode(treePath);;
    

                        if(node != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(node.getUserObject() instanceof CanvasTreeLabel)
                        
                                    {
                                    this->removeCanvas(node);
    

                                    }
                                
                        else {
                            this->removeGraphicItem(node);
    

                        }
                            

                                    }
                                

    DefaultMutableTreeNode parent = node.getParent() as DefaultMutableTreeNode;;
    
parent.remove(node);
    
}


                //@Throws(Exception.constructor)
            
    private: void copy(){

    TreePath treePath = this->workAreaJTree.getSelectionPath();;
    
this->copy(treePath);
    
this->updateTree();
    
this->expand();
    
this->repaint();
    
}


                //@Throws(Exception.constructor)
            
    private: void copy(TreePath treePath){

    DefaultMutableTreeNode node = this->getNode(treePath);;
    

                        if(node != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(node.getUserObject() instanceof CanvasTreeLabel)
                        
                                    {
                                    MyCanvasEventService::fire(MyCanvasEvent(MyCanvasEventSource(MyCanvasEventService::DUPLICATE, node)));
    

                                    }
                                
                        else {
                            MyGraphicItemEventService::fire(MyGraphicItemEvent(MyGraphicItemEventSource(MyGraphicItemEventService::DUPLICATE, node)));
    

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void rotate(TreePath treePath, double angle){

    DefaultMutableTreeNode node = this->getNode(treePath);;
    

                        if(node != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(node.getUserObject() instanceof CanvasTreeLabel)
                        
                                    {
                                    MyCanvasEventService::fire(MyCanvasEvent(MyCanvasEventSource(MyCanvasEventService::ROTATE, angle, node)));
    

                                    }
                                
                        else {
                            MyGraphicItemEventService::fire(MyGraphicItemEvent(MyGraphicItemEventSource(MyGraphicItemEventService::ROTATE, angle, node)));
    

                        }
                            

                                    }
                                
}


    public: MutableTreeNode getRootTreeNode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rootTreeNode;
    
}


    public: void expand(){
this->workAreaJTree.expandRow(0);
    
this->workAreaJTree.expandRow(1);
    
}


    public: void expand(TreePath treePath){
this->workAreaJTree.expandPath(treePath);
    
}


    private: void initComponents(){
itemJPopupMenu= javax::swing::JPopupMenu();
    
this->deleteJMenuItem= javax::swing::JMenuItem();
    
this->copyJMenuItem= javax::swing::JMenuItem();
    
this->rotateJMenuItem= javax::swing::JMenuItem();
    
this->itemJScrollPane1= javax::swing::JScrollPane();
    
this->workAreaPropertiesJPanel= javax::swing::JPanel();
    
itemJPopupMenu.addPopupMenuListener(class extends javax::swing::event::PopupMenuListener
                                {
                                
    public: void popupMenuCanceled(javax::swing::event::PopupMenuEvent evt){
}

    public: void popupMenuWillBecomeInvisible(javax::swing::event::PopupMenuEvent evt){
itemJPopupMenuPopupMenuWillBecomeInvisible(evt);
    
}

    public: void popupMenuWillBecomeVisible(javax::swing::event::PopupMenuEvent evt){
itemJPopupMenuPopupMenuWillBecomeVisible(evt);
    
}

                                }
                            );
    
this->deleteJMenuItem.setText("Delete");
    
this->deleteJMenuItem.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
deleteJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->itemJPopupMenu.add(this->deleteJMenuItem);
    
this->copyJMenuItem.setText("Copy");
    
this->copyJMenuItem.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
copyJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->itemJPopupMenu.add(this->copyJMenuItem);
    
this->rotateJMenuItem.setText("Rotate 45*");
    
this->rotateJMenuItem.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
rotateJMenuItemMousePressed(evt);
    
}

                                }
                            );
    
this->itemJPopupMenu.add(this->rotateJMenuItem);
    
setLayout(java::awt::GridLayout(1, 1));
    
this->workAreaPropertiesJPanel.addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mousePressed(java::awt::event::MouseEvent evt){
workAreaPropertiesJPanelMousePressed(evt);
    
}

                                }
                            );
    
this->workAreaPropertiesJPanel.setLayout(java::awt::GridLayout(1, 0));
    
this->itemJScrollPane1.setViewportView(this->workAreaPropertiesJPanel);
    
add(this->itemJScrollPane1);
    
}


    private: void rotateJMenuItemMousePressed(java::awt::event::MouseEvent evt){

        try {
            
    TreePath treePath = this->workAreaJTree.getSelectionPath();;
    
this->rotate(treePath, 45);
    
this->updateTree();
    
this->expand();
    
this->repaint();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "rotateJMenuItemMousePressed", e);
    
}

}


    private: void workAreaJTreeMousePressed(java::awt::event::MouseEvent evt){

        try {
            
    std::vector<TreePath> selectedTreePathArray = this->workAreaJTree.getSelectionPaths();;
    

    BasicArrayList list = this->getNode(selectedTreePathArray);;
    

                        if(list.size() > 0)
                        
                                    {
                                    
                        if((evt.getModifiers()&evt.BUTTON3_MASK) == evt.BUTTON3_MASK)
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < selectedTreePathArray.size(); index++)
        {

    DefaultMutableTreeNode defaultMutableTreeNode = list.get(index) as DefaultMutableTreeNode;;
    

                        if(defaultMutableTreeNode.getUserObject() instanceof CanvasTreeLabel)
                        
                                    {
                                    this->itemJPopupMenu.show(this, evt.getX(), evt.getY());
    

                                    }
                                
                        else {
                            this->itemJPopupMenu.show(this, evt.getX(), evt.getY());
    

                        }
                            
}


                                    }
                                

                        if((evt.getModifiers()&evt.BUTTON1_MASK) == evt.BUTTON1_MASK)
                        
                                    {
                                    this->deselectAll();
    




                        for (
    int32_t index = 0;index < selectedTreePathArray.size(); index++)
        {

    DefaultMutableTreeNode defaultMutableTreeNode = list.get(index) as DefaultMutableTreeNode;;
    

                        if(defaultMutableTreeNode.getUserObject() instanceof CanvasTreeLabel)
                        
                                    {
                                    MyCanvasEventService::fire(MyCanvasEvent(MyCanvasEventSource(MyCanvasEventService::SELECT, defaultMutableTreeNode)));
    

                                    }
                                
                        else {
                            this->selectGraphicItem(defaultMutableTreeNode);
    

                        }
                            
}


                                    }
                                

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "workAreaJTreeMousePressed", e);
    
}

}


    private: void itemJPopupMenuPopupMenuWillBecomeInvisible(javax::swing::event::PopupMenuEvent evt){
}


    private: void itemJPopupMenuPopupMenuWillBecomeVisible(javax::swing::event::PopupMenuEvent evt){
}


    private: void copyJMenuItemMousePressed(java::awt::event::MouseEvent evt){

        try {
            this->copy();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "copyJMenuItemMousePressed", e);
    
}

}


    private: void deleteJMenuItemMousePressed(java::awt::event::MouseEvent evt){

        try {
            
    std::vector<TreePath> selectedTreePathArray = this->workAreaJTree.getSelectionPaths();;
    




                        for (
    int32_t index = 0;index < selectedTreePathArray.size(); index++)
        {

    TreePath treePath = selectedTreePathArray[index];;
    
this->remove(treePath);
    
this->updateTree();
    
this->expand();
    
this->repaint();
    
}


                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "deleteJMenuItemMousePressed", e);
    
}

}


    private: void workAreaPropertiesJPanelMousePressed(java::awt::event::MouseEvent evt){
}


    private: javax::swing::JMenuItem copyJMenuItem;

    private: javax::swing::JMenuItem deleteJMenuItem;

    private: javax::swing::JPopupMenu itemJPopupMenu;

    private: javax::swing::JScrollPane itemJScrollPane1;

    private: javax::swing::JMenuItem rotateJMenuItem;

    private: javax::swing::JPanel workAreaPropertiesJPanel;

};

            

