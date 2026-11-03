
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJTREEJPANEL_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJTREEJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/WorkAreaJTreeJPanel.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/graphics/j2me/workarea/JPanel.h"
#include "org/allbinary/graphics/j2me/workarea/JTree.h"
#include "org/allbinary/graphics/j2me/workarea/MouseAdapter.h"
#include "org/allbinary/graphics/j2me/workarea/MouseEvent.h"
#include "org/allbinary/graphics/j2me/workarea/JPopupMenu.h"
#include "org/allbinary/graphics/j2me/workarea/JMenuItem.h"
#include "org/allbinary/graphics/j2me/workarea/JScrollPane.h"
#include "org/allbinary/graphics/j2me/workarea/PopupMenuListener.h"
#include "org/allbinary/graphics/j2me/workarea/PopupMenuEvent.h"
#include "org/allbinary/graphics/j2me/workarea/GridLayout.h"


WorkAreaJTreeJPanel::WorkAreaJTreeJPanel(std::string workAreaName) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->initComponents();
    
this->rootTreeNode= new DefaultMutableTreeNode(workAreaName);
    
this->workAreaPropertiesJPanel->removeAll();
    
this->updateTree();
    
this->highlightedBasicArrayList= new BasicArrayListD();
    
}


    auto WorkAreaJTreeJPanel::add(MutableTreeNode* treeNode) -> void{
this->rootTreeNode->add(treeNode);
    
}


    auto WorkAreaJTreeJPanel::updateTree() -> void{
this->workAreaJTree= new JTree(this->rootTreeNode);
    
this->workAreaJTree->addMouseListener([&]() {
    static thread_local WorkAreaJTreeJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    WorkAreaJTreeJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->workAreaJTreeMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->workAreaPropertiesJPanel->removeAll();
    
this->workAreaPropertiesJPanel->add(this->workAreaJTree);
    
}


    auto WorkAreaJTreeJPanel::getNode(std::vector<TreePath*> treePathArray) -> BasicArrayList*{

    BasicArrayList* basicArrayList = new BasicArrayListD();;
    

                        if(!treePathArray.empty())
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < treePathArray.size(); index++)
        {
basicArrayList->add(this->getNode(treePathArray[index]));
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return basicArrayList;
    
}


    auto WorkAreaJTreeJPanel::getNode(TreePath* treePath) -> DefaultMutableTreeNode*{

                        if(treePath != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::vector<Object*> obj = treePath->getPath();;
    

                        if(!obj.empty())
                        
                                    {
                                    
    DefaultMutableTreeNode* node = dynamic_cast<DefaultMutableTreeNode*>(obj[obj.size() -1]);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJTreeJPanel::deselectAll() -> void{

    int32_t size = this->highlightedBasicArrayList->size();;
    
this->logUtil->putF(JavaString::valueOf("size: ") +JavaString::valueOf(size), this, "deselectAll");
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    DefaultMutableTreeNode* node = dynamic_cast<DefaultMutableTreeNode*>(this->highlightedBasicArrayList->get(index));;
    
MyGraphicItemEventService::fire(new MyGraphicItemEvent(new MyGraphicItemEventSource(MyGraphicItemEventService::DESELECT, node)));
    
}

this->highlightedBasicArrayList->clear();
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJTreeJPanel::selectGraphicItem(DefaultMutableTreeNode* node) -> void{
this->highlightedBasicArrayList->add(node);
    
MyGraphicItemEventService::fire(new MyGraphicItemEvent(new MyGraphicItemEventSource(MyGraphicItemEventService::SELECT, node)));
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJTreeJPanel::removeGraphicItem(DefaultMutableTreeNode* node) -> void{
MyGraphicItemEventService::fire(new MyGraphicItemEvent(new MyGraphicItemEventSource(MyGraphicItemEventService::DELETE, node)));
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJTreeJPanel::removeCanvas(DefaultMutableTreeNode* node) -> void{
MyCanvasEventService::fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService::DELETE, node)));
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJTreeJPanel::remove(TreePath* treePath) -> void{

    DefaultMutableTreeNode* node = this->getNode(treePath);;
    

                        if(node != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(
                                        (dynamic_cast<const CanvasTreeLabel*>(node->getUserObject()) != nullptr)
                                    )
                        
                                    {
                                    this->removeCanvas(node);
    

                                    }
                                
                        else {
                            this->removeGraphicItem(node);
    

                        }
                            

                                    }
                                

    DefaultMutableTreeNode* parent = dynamic_cast<DefaultMutableTreeNode*>(node->getParent());;
    
parent->remove(node);
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJTreeJPanel::copy() -> void{

    TreePath* treePath = this->workAreaJTree->getSelectionPath();;
    
this->copy(treePath);
    
this->updateTree();
    
this->expand();
    
this->repaint();
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJTreeJPanel::copy(TreePath* treePath) -> void{

    DefaultMutableTreeNode* node = this->getNode(treePath);;
    

                        if(node != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(
                                        (dynamic_cast<const CanvasTreeLabel*>(node->getUserObject()) != nullptr)
                                    )
                        
                                    {
                                    MyCanvasEventService::fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService::DUPLICATE, node)));
    

                                    }
                                
                        else {
                            MyGraphicItemEventService::fire(new MyGraphicItemEvent(new MyGraphicItemEventSource(MyGraphicItemEventService::DUPLICATE, node)));
    

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJTreeJPanel::rotate(TreePath* treePath, double angle) -> void{

    DefaultMutableTreeNode* node = this->getNode(treePath);;
    

                        if(node != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(
                                        (dynamic_cast<const CanvasTreeLabel*>(node->getUserObject()) != nullptr)
                                    )
                        
                                    {
                                    MyCanvasEventService::fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService::ROTATE, angle, node)));
    

                                    }
                                
                        else {
                            MyGraphicItemEventService::fire(new MyGraphicItemEvent(new MyGraphicItemEventSource(MyGraphicItemEventService::ROTATE, angle, node)));
    

                        }
                            

                                    }
                                
}


    auto WorkAreaJTreeJPanel::getRootTreeNode() -> MutableTreeNode*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rootTreeNode;
    
}


    auto WorkAreaJTreeJPanel::expand() -> void{
this->workAreaJTree->expandRow(0);
    
this->workAreaJTree->expandRow(1);
    
}


    auto WorkAreaJTreeJPanel::expand(TreePath* treePath) -> void{
this->workAreaJTree->expandPath(treePath);
    
}


    auto WorkAreaJTreeJPanel::initComponents() -> void{
itemJPopupMenu= new javax::swing::JPopupMenu();
    
this->deleteJMenuItem= new javax::swing::JMenuItem();
    
this->copyJMenuItem= new javax::swing::JMenuItem();
    
this->rotateJMenuItem= new javax::swing::JMenuItem();
    
this->itemJScrollPane1= new javax::swing::JScrollPane();
    
this->workAreaPropertiesJPanel= new javax::swing::JPanel();
    
itemJPopupMenu->addPopupMenuListener([&]() {
    static thread_local WorkAreaJTreeJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public javax::swing::event::PopupMenuListener {
    public:
    using javax::swing::event::PopupMenuListener::PopupMenuListener;
    WorkAreaJTreeJPanel* outer = anonymousOuter0;

    public: void popupMenuCanceled(javax::swing::event::PopupMenuEvent* evt){
}

    public: void popupMenuWillBecomeInvisible(javax::swing::event::PopupMenuEvent* evt){
outer->itemJPopupMenuPopupMenuWillBecomeInvisible(evt);
    
}

    public: void popupMenuWillBecomeVisible(javax::swing::event::PopupMenuEvent* evt){
outer->itemJPopupMenuPopupMenuWillBecomeVisible(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->deleteJMenuItem->setText("Delete");
    
this->deleteJMenuItem->addMouseListener([&]() {
    static thread_local WorkAreaJTreeJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    WorkAreaJTreeJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->deleteJMenuItemMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->itemJPopupMenu->add(this->deleteJMenuItem);
    
this->copyJMenuItem->setText("Copy");
    
this->copyJMenuItem->addMouseListener([&]() {
    static thread_local WorkAreaJTreeJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    WorkAreaJTreeJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->copyJMenuItemMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->itemJPopupMenu->add(this->copyJMenuItem);
    
this->rotateJMenuItem->setText("Rotate 45*");
    
this->rotateJMenuItem->addMouseListener([&]() {
    static thread_local WorkAreaJTreeJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    WorkAreaJTreeJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->rotateJMenuItemMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->itemJPopupMenu->add(this->rotateJMenuItem);
    
setLayout(new java::awt::GridLayout(1, 1));
    
this->workAreaPropertiesJPanel->addMouseListener([&]() {
    static thread_local WorkAreaJTreeJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    WorkAreaJTreeJPanel* outer = anonymousOuter0;

    public: void mousePressed(java::awt::event::MouseEvent* evt){
outer->workAreaPropertiesJPanelMousePressed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->workAreaPropertiesJPanel->setLayout(new java::awt::GridLayout(1, 0));
    
this->itemJScrollPane1->setViewportView(this->workAreaPropertiesJPanel);
    
add(this->itemJScrollPane1);
    
}


    auto WorkAreaJTreeJPanel::rotateJMenuItemMousePressed(java::awt::event::MouseEvent* evt) -> void{

        try {
            
    TreePath* treePath = this->workAreaJTree->getSelectionPath();;
    
this->rotate(treePath, 45);
    
this->updateTree();
    
this->expand();
    
this->repaint();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "rotateJMenuItemMousePressed", &e);
    
}

}


    auto WorkAreaJTreeJPanel::workAreaJTreeMousePressed(java::awt::event::MouseEvent* evt) -> void{

        try {
            
    std::vector<TreePath*> selectedTreePathArray = this->workAreaJTree->getSelectionPaths();;
    

    BasicArrayList* list = this->getNode(selectedTreePathArray);;
    

                        if(list->size() > 0)
                        
                                    {
                                    
                        if((evt->getModifiers()&evt->BUTTON3_MASK) == evt->BUTTON3_MASK)
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < selectedTreePathArray.size(); index++)
        {

    DefaultMutableTreeNode* defaultMutableTreeNode = dynamic_cast<DefaultMutableTreeNode*>(list->get(index));;
    

                        if(
                                        (dynamic_cast<const CanvasTreeLabel*>(defaultMutableTreeNode->getUserObject()) != nullptr)
                                    )
                        
                                    {
                                    this->itemJPopupMenu->show(this, evt->getX(), evt->getY());
    

                                    }
                                
                        else {
                            this->itemJPopupMenu->show(this, evt->getX(), evt->getY());
    

                        }
                            
}


                                    }
                                

                        if((evt->getModifiers()&evt->BUTTON1_MASK) == evt->BUTTON1_MASK)
                        
                                    {
                                    this->deselectAll();
    




                        for (
    int32_t index = 0;index < selectedTreePathArray.size(); index++)
        {

    DefaultMutableTreeNode* defaultMutableTreeNode = dynamic_cast<DefaultMutableTreeNode*>(list->get(index));;
    

                        if(
                                        (dynamic_cast<const CanvasTreeLabel*>(defaultMutableTreeNode->getUserObject()) != nullptr)
                                    )
                        
                                    {
                                    MyCanvasEventService::fire(new MyCanvasEvent(new MyCanvasEventSource(MyCanvasEventService::SELECT, defaultMutableTreeNode)));
    

                                    }
                                
                        else {
                            this->selectGraphicItem(defaultMutableTreeNode);
    

                        }
                            
}


                                    }
                                

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "workAreaJTreeMousePressed", &e);
    
}

}


    auto WorkAreaJTreeJPanel::itemJPopupMenuPopupMenuWillBecomeInvisible(javax::swing::event::PopupMenuEvent* evt) -> void{
}


    auto WorkAreaJTreeJPanel::itemJPopupMenuPopupMenuWillBecomeVisible(javax::swing::event::PopupMenuEvent* evt) -> void{
}


    auto WorkAreaJTreeJPanel::copyJMenuItemMousePressed(java::awt::event::MouseEvent* evt) -> void{

        try {
            this->copy();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "copyJMenuItemMousePressed", &e);
    
}

}


    auto WorkAreaJTreeJPanel::deleteJMenuItemMousePressed(java::awt::event::MouseEvent* evt) -> void{

        try {
            
    std::vector<TreePath*> selectedTreePathArray = this->workAreaJTree->getSelectionPaths();;
    




                        for (
    int32_t index = 0;index < selectedTreePathArray.size(); index++)
        {

    TreePath* treePath = selectedTreePathArray[index];;
    
this->remove(treePath);
    
this->updateTree();
    
this->expand();
    
this->repaint();
    
}


                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "deleteJMenuItemMousePressed", &e);
    
}

}


    auto WorkAreaJTreeJPanel::workAreaPropertiesJPanelMousePressed(java::awt::event::MouseEvent* evt) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJTREEJPANEL_CPP
