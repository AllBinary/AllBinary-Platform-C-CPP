
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANEL_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h"
        

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
        #include "org/allbinary/graphics/j2me/workarea/JPanel.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaJTreeJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/Component.h"
#include "org/allbinary/graphics/j2me/workarea/Dimension.h"
#include "org/allbinary/graphics/j2me/workarea/WorkAreaDom.h"
#include "org/allbinary/graphics/j2me/workarea/GridLayout.h"
#include "org/allbinary/graphics/j2me/workarea/GridBagLayout.h"
#include "org/allbinary/graphics/j2me/workarea/GridBagConstraints.h"
#include "org/allbinary/graphics/j2me/workarea/KeyAdapter.h"
#include "org/allbinary/graphics/j2me/workarea/KeyEvent.h"


WorkAreaJPanel::WorkAreaJPanel(std::string name, Dimension* dimension, int32_t x, int32_t y) : logUtil(LogUtil::getInstance()){

        try {
            this->initComponents();
    
this->name= name;
    
this->initMyComponents(dimension);
    
this->workAreaJTreeJPanel= new WorkAreaJTreeJPanel(this->name);
    

    CanvasJPanel* canvasJPanel = new CanvasJPanel(this->workAreaJTreeJPanel, this->getSize(), x, y);;
    
this->canvasJPanelList->add(canvasJPanel);
    
this->selectedFrame= 0;
    
this->propertiesJPanel->set(this->workAreaJTreeJPanel);
    
this->canvasHolderJPanel->add(dynamic_cast<Component*>(canvasJPanel));
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


WorkAreaJPanel::WorkAreaJPanel(WorkAreaDom* workAreaDom, Dimension* dimension) : logUtil(LogUtil::getInstance()){

        try {
            this->initComponents();
    
this->name= workAreaDom->getName();
    
this->initMyComponents(dimension);
    

    BasicArrayList* canvasNodeList = workAreaDom->getCanvasNodes();;
    

    int32_t numberOfFrames = canvasNodeList->size();;
    




                        for (
    int32_t index = 0;index < numberOfFrames; index++)
        {

    Node* node = dynamic_cast<Node*>(canvasNodeList->get(index));;
    

    CanvasJPanel* canvasJPanel = new CanvasJPanel(this->workAreaJTreeJPanel, this->getSize(), new CanvasDom(node));;
    
this->canvasJPanelList->add(canvasJPanel);
    
}

this->selectedFrame= 0;
    
this->canvasHolderJPanel->add(dynamic_cast<Component*>(this->getCurrentFrame()));
    
this->propertiesJPanel->set(this->workAreaJTreeJPanel);
    

                //: 
} catch(Exception& e) 
            {

                        if(LOGGING::contains(LOGGING::LOADINGERROR))
                        
                                    {
                                    this->logUtil->put("Constructor Error", this, "WorkAreaJPanel", &e);
    

                                    }
                                



                            throw e;
                    
}

}


    auto WorkAreaJPanel::initMyComponents(Dimension* dimension) -> void{
this->workAreaJTreeJPanel= new WorkAreaJTreeJPanel(this->name);
    
this->canvasHolderJPanel= new JPanel();
    
this->canvasHolderJPanel->setSize(dimension);
    
this->canvasHolderJPanel->setLayout(new GridLayout(1, 1));
    
this->setSize(dimension);
    
this->canvasJPanelList= new LinkedList();
    

    GridBagLayout* gridBagLayout = new GridBagLayout();;
    

    GridBagConstraints* gridBagConstraints = new GridBagConstraints();;
    
this->innerJPanel->setLayout(gridBagLayout);
    
gridBagConstraints->gridx= 0;
    
gridBagConstraints->gridy= 0;
    
gridBagConstraints->gridwidth= 1;
    
gridBagConstraints->fill= java.awt->GridBagConstraints->BOTH;
    
gridBagConstraints->weightx= .05;
    
gridBagConstraints->weighty= .05;
    

    ToolJPanel* toolJPanel = new ToolJPanel();;
    
gridBagLayout->setConstraints(toolJPanel, gridBagConstraints);
    
this->innerJPanel->add(toolJPanel);
    
gridBagConstraints= new GridBagConstraints();
    
gridBagConstraints->gridx= 1;
    
gridBagConstraints->gridy= 0;
    
gridBagConstraints->gridwidth= 6;
    
gridBagConstraints->fill= java.awt->GridBagConstraints->BOTH;
    
gridBagConstraints->weightx= 1;
    
gridBagConstraints->weighty= 1;
    
gridBagLayout->setConstraints(this->canvasHolderJPanel, gridBagConstraints);
    
this->innerJPanel->add(this->canvasHolderJPanel);
    
gridBagConstraints= new GridBagConstraints();
    
gridBagConstraints->gridx= 8;
    
gridBagConstraints->gridy= 0;
    
gridBagConstraints->gridwidth= java.awt->GridBagConstraints->REMAINDER;
    
gridBagConstraints->fill= java.awt->GridBagConstraints->BOTH;
    
gridBagConstraints->weightx= .1;
    
gridBagConstraints->weighty= .1;
    
this->propertiesJPanel= new PropertiesJPanel();
    
gridBagLayout->setConstraints(this->propertiesJPanel, gridBagConstraints);
    
this->innerJPanel->add(this->propertiesJPanel);
    
MyCanvasEventService::addListener(dynamic_cast<MyCanvasEventListener*>(this));
    
}


    auto WorkAreaJPanel::getCanvasHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* canvasJPanelHashMap = StdUtil::getInstance()->createHashMap();;
    

    int32_t size = this->canvasJPanelList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    CanvasJPanel* canvasJPanel = dynamic_cast<CanvasJPanel*>(this->canvasJPanelList->get(index));;
    
canvasJPanelHashMap->put(canvasJPanel->getTreeNode(), int32_t(index));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return canvasJPanelHashMap;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto WorkAreaJPanel::play() -> void{
this->isPlaying_= true;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto WorkAreaJPanel::stop() -> void{
this->isPlaying_= false;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto WorkAreaJPanel::isPlaying() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isPlaying_;
    
}


    auto WorkAreaJPanel::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto WorkAreaJPanel::setName(std::string value) -> void{
this->name= value;
    
}


    auto WorkAreaJPanel::disableCanvas() -> void{
this->canvasHolderJPanel->removeAll();
    
}


    auto WorkAreaJPanel::enableCanvas() -> void{
this->canvasHolderJPanel->add(dynamic_cast<Component*>(this->getCurrentFrame()));
    
}


    auto WorkAreaJPanel::deselect() -> void{
JPanel::setVisible(false);
    
}


    auto WorkAreaJPanel::select() -> void{
JPanel::setVisible(true);
    

                        if(this->canvasHolderJPanel->getComponentCount() == 1)
                        
                                    {
                                    
    Component* component = this->canvasHolderJPanel->getComponent(0);;
    

                        if(component != 
                                    nullptr
                                )
                        
                                    {
                                    component->repaint();
    

                                    }
                                

                                    }
                                
}


    auto WorkAreaJPanel::changeZoom(int32_t factor) -> void{

    int32_t size = this->canvasJPanelList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    CanvasJPanel* canvasJPanel = dynamic_cast<CanvasJPanel*>(this->canvasJPanelList->get(index));;
    
canvasJPanel->getGrid()->setZoom(canvasJPanel->getGrid()->getZoom() +factor);
    
}

}


    auto WorkAreaJPanel::getCurrentFrame() -> CanvasJPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CanvasJPanel*>(this->canvasJPanelList->get(this->selectedFrame));
    
}


    auto WorkAreaJPanel::initDuplicate(CanvasJPanel* newCanvasJPanel) -> void{

                        if(newCanvasJPanel != 
                                    nullptr
                                )
                        
                                    {
                                    this->canvasJPanelList->add(newCanvasJPanel);
    
this->select(this->canvasJPanelList->size() -1);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJPanel::duplicate(MutableTreeNode* treeNode) -> void{

    HashMap<Object*, Object*>* canvasJPanelHashMap = this->getCanvasHashMap();;
    

                        if(canvasJPanelHashMap->containsKey(treeNode))
                        
                                    {
                                    
    int32_t frameInteger = JavaBoxes::unbox<int32_t>(canvasJPanelHashMap->get(treeNode));;
    

    CanvasJPanel* canvasJPanel = dynamic_cast<CanvasJPanel*>(this->canvasJPanelList->get(frameInteger));;
    
this->initDuplicate(canvasJPanel->duplicate());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJPanel::autoRotate(int32_t increments, int32_t totalAngle) -> void{

    int32_t incrementAngle = static_cast<int32_t>((totalAngle /increments));;
    




                        for (
    int32_t index = 1;index < increments; index++)
        {

    CanvasJPanel* canvasJPanel = dynamic_cast<CanvasJPanel*>(this->getCurrentFrame());;
    

    CanvasJPanel* newCanvasJPanel = canvasJPanel->duplicate();;
    
newCanvasJPanel->setAngle(incrementAngle *index);
    
this->initDuplicate(newCanvasJPanel);
    
}

}


    auto WorkAreaJPanel::explodeAll() -> void{

    CanvasJPanel* canvasJPanel = dynamic_cast<CanvasJPanel*>(this->getCurrentFrame());;
    
canvasJPanel->explodeAll();
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJPanel::autoExplode(int32_t numberOfFrames, int32_t explodeType) -> void{




                        for (
    int32_t index = 1;index < numberOfFrames; index++)
        {

    CanvasJPanel* canvasJPanel = dynamic_cast<CanvasJPanel*>(this->getCurrentFrame());;
    

    CanvasJPanel* newCanvasJPanel = canvasJPanel->duplicate();;
    
newCanvasJPanel->explode(index +1, explodeType);
    
this->initDuplicate(newCanvasJPanel);
    
}

}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJPanel::autoMirror() -> void{

    CanvasJPanel* canvasJPanel = dynamic_cast<CanvasJPanel*>(this->getCurrentFrame());;
    

    CanvasJPanel* newCanvasJPanel = canvasJPanel->duplicate();;
    
newCanvasJPanel->mirror();
    
this->initDuplicate(newCanvasJPanel);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto WorkAreaJPanel::select(int32_t index) -> void{

                        if(index < this->canvasJPanelList->size())
                        
                                    {
                                    
    CanvasJPanel* canvasJPanel = dynamic_cast<CanvasJPanel*>(this->canvasJPanelList->get(index));;
    

                        if(canvasJPanel != 
                                    nullptr
                                )
                        
                                    {
                                    this->canvasHolderJPanel->removeAll();
    
this->canvasHolderJPanel->add(canvasJPanel);
    
this->selectedFrame= index;
    
canvasJPanel->changed();
    
this->canvasHolderJPanel->repaint();
    
canvasJPanel->repaint();
    

                                    }
                                

                                    }
                                
}


    auto WorkAreaJPanel::select(MutableTreeNode* treeNode) -> void{

    HashMap<Object*, Object*>* canvasJPanelHashMap = this->getCanvasHashMap();;
    

    int32_t frameInteger = JavaBoxes::unbox<int32_t>(canvasJPanelHashMap->get(treeNode));;
    

                        if(true)
                        
                                    {
                                    this->select(frameInteger);
    

                                    }
                                
}


    auto WorkAreaJPanel::getDocument() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return WorkAreaJPanel::document;
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJPanel::toDocument() -> Document*{
WorkAreaJPanel::document= DomHelper::getInstance()->createDocument();
    

    Node* workAreaNode = WorkAreaJPanel::document->createElement(WorkAreaDom::WORKAREA);;
    

    Node* nameNode = WorkAreaJPanel::document->createElement(WorkAreaDom::NAME);;
    

    Node* nameTextNode = WorkAreaJPanel::document->createTextNode(this->name);;
    
nameNode->appendChild(nameTextNode);
    

    Node* framesNode = WorkAreaJPanel::document->createElement(WorkAreaDom::FRAMES);;
    

    int32_t size = this->canvasJPanelList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    CanvasJPanel* canvasJPanel = dynamic_cast<CanvasJPanel*>(this->canvasJPanelList->get(index));;
    
framesNode->appendChild(canvasJPanel->toDom());
    
}

workAreaNode->appendChild(nameNode);
    
workAreaNode->appendChild(framesNode);
    
WorkAreaJPanel::document->appendChild(workAreaNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return document;
    
}


    auto WorkAreaJPanel::initComponents() -> void{
this->innerJPanel= new javax::swing::JPanel();
    
setLayout(new java::awt::GridLayout(1, 1));
    
this->innerJPanel->addKeyListener([&]() {
    static thread_local WorkAreaJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::KeyAdapter {
    public:
    using java::awt::event::KeyAdapter::KeyAdapter;
    WorkAreaJPanel* outer = anonymousOuter0;

    public: void keyTyped(java::awt::event::KeyEvent* evt){
outer->innerJPanelKeyTyped(evt);
    
}

    public: void keyPressed(java::awt::event::KeyEvent* evt){
outer->innerJPanelKeyPressed(evt);
    
}

    public: void keyReleased(java::awt::event::KeyEvent* evt){
outer->innerJPanelKeyReleased(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->innerJPanel);
    
}


    auto WorkAreaJPanel::innerJPanelKeyReleased(java::awt::event::KeyEvent* evt) -> void{
StatusFactory::getInstance()->setStatus("Key Pressed1");
    
}


    auto WorkAreaJPanel::innerJPanelKeyPressed(java::awt::event::KeyEvent* evt) -> void{
StatusFactory::getInstance()->setStatus("Key Pressed2");
    
}


    auto WorkAreaJPanel::innerJPanelKeyTyped(java::awt::event::KeyEvent* evt) -> void{
StatusFactory::getInstance()->setStatus("Key Pressed3");
    
}


    auto WorkAreaJPanel::keyPressed(java::awt::event::KeyEvent* keyEvent) -> void{
this->getCurrentFrame()->keyPressed(keyEvent);
    
}


    auto WorkAreaJPanel::keyReleased(java::awt::event::KeyEvent* keyEvent) -> void{
}


    auto WorkAreaJPanel::keyTyped(java::awt::event::KeyEvent* keyEvent) -> void{
}


    auto WorkAreaJPanel::delete_(MyCanvasEvent* evt) -> void{

    HashMap<Object*, Object*>* canvasJPanelHashMap = this->getCanvasHashMap();;
    

                        if(canvasJPanelHashMap->containsKey(evt->getTreeNode()))
                        
                                    {
                                    this->canvasHolderJPanel->removeAll();
    

    int32_t frameInt = JavaBoxes::unbox<int32_t>(canvasJPanelHashMap->get(evt->getTreeNode()));;
    
this->canvasJPanelList->remove(frameInt);
    
this->select(frameInt);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJPanel::duplicate(MyCanvasEvent* evt) -> void{
this->duplicate(evt->getTreeNode());
    
}


    auto WorkAreaJPanel::select(MyCanvasEvent* evt) -> void{
this->select(evt->getTreeNode());
    
StatusFactory::getInstance()->setStatus("Frame Selected");
    
}


    auto WorkAreaJPanel::rotate(MyCanvasEvent* evt) -> void{

    HashMap<Object*, Object*>* canvasJPanelHashMap = this->getCanvasHashMap();;
    

    MutableTreeNode* treeNode = evt->getTreeNode();;
    

    int32_t frameInt = JavaBoxes::unbox<int32_t>(canvasJPanelHashMap->get(evt->getTreeNode()));;
    

    CanvasJPanel* canvasJPanel = dynamic_cast<CanvasJPanel*>(this->canvasJPanelList->get(frameInt));;
    

                        if(canvasJPanel != 
                                    nullptr
                                )
                        
                                    {
                                    canvasJPanel->addAngle(evt->getAngle());
    
this->select(frameInt);
    

                                    }
                                
StatusFactory::getInstance()->setStatus("Canvas Rotated");
    
}


    auto WorkAreaJPanel::explode(MyCanvasEvent* evt) -> void{
this->explodeAll();
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJPanel::autoExplode(MyCanvasEvent* evt) -> void{
this->autoExplode(10, 0);
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJPanel::center() -> void{

    CanvasJPanel* canvasJPanel = dynamic_cast<CanvasJPanel*>(this->getCurrentFrame());;
    
canvasJPanel->center();
    
}


                //@Throws(Exception.constructor)
            
    auto WorkAreaJPanel::center(MyCanvasEvent* evt) -> void{
this->center();
    
}


    auto WorkAreaJPanel::run() -> void{

        try {
            
        while(true)
        {

                        if(this->isPlaying())
                        
                                    {
                                    
    int32_t size = this->canvasJPanelList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(!this->isPlaying())
                        
                                    {
                                    break;

                    

                                    }
                                
this->select(index);
    
Thread::sleep(100);
    
}


                                    }
                                
                        else {
                            Thread::sleep(500);
    

                        }
                            
Thread::sleep(250);
    
}


                //: 
} catch(Exception& e) 
            {
}

}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_WORKAREAJPANEL_CPP
