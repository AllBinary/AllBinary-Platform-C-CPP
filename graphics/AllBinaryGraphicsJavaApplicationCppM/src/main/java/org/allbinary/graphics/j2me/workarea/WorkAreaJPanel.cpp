
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

    public: static Document getDocument(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WorkAreaJPanel::document;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: LinkedList canvasJPanelList;

    private: JPanel canvasHolderJPanel;

    private: std::string name;

    private: int32_t selectedFrame= 0;

    private: PropertiesJPanel propertiesJPanel;

    private: WorkAreaJTreeJPanel workAreaJTreeJPanel;

    private: bool isPlaying = false;

public: WorkAreaJPanel(std::string name, Dimension dimension, int32_t x, int32_t y){

        try {
            this->initComponents();
    
this->name= name;
    
this->initMyComponents(dimension);
    
this->workAreaJTreeJPanel= WorkAreaJTreeJPanel(this->name);
    

    CanvasJPanel canvasJPanel = CanvasJPanel(this->workAreaJTreeJPanel, this->getSize(), x, y);;
    
this->canvasJPanelList.add(canvasJPanel);
    
this->selectedFrame= 0;
    
this->propertiesJPanel.set(this->workAreaJTreeJPanel);
    
this->canvasHolderJPanel.add(canvasJPanel);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


public: WorkAreaJPanel(WorkAreaDom workAreaDom, Dimension dimension){

        try {
            this->initComponents();
    
this->name= workAreaDom.getName();
    
this->initMyComponents(dimension);
    

    BasicArrayList canvasNodeList = workAreaDom.getCanvasNodes();;
    

    int32_t numberOfFrames = canvasNodeList.size();;
    




                        for (
    int32_t index = 0;index < numberOfFrames; index++)
        {

    Node node = canvasNodeList.get(index);;
    

    CanvasJPanel canvasJPanel = CanvasJPanel(this->workAreaJTreeJPanel, this->getSize(), CanvasDom(node));;
    
this->canvasJPanelList.add(canvasJPanel);
    
}

this->selectedFrame= 0;
    
this->canvasHolderJPanel.add(this->getCurrentFrame());
    
this->propertiesJPanel.set(this->workAreaJTreeJPanel);
    

                //: 
} catch(e) 
            {

                        if(LOGGING::contains(LOGGING::LOADINGERROR))
                        
                                    {
                                    this->logUtil.put("Constructor Error", this, "WorkAreaJPanel", e);
    

                                    }
                                



                            throw e;
                    
}

}


    private: void initMyComponents(Dimension dimension){
this->workAreaJTreeJPanel= WorkAreaJTreeJPanel(this->name);
    
this->canvasHolderJPanel= JPanel();
    
this->canvasHolderJPanel.setSize(dimension);
    
this->canvasHolderJPanel.setLayout(GridLayout(1, 1));
    
this->setSize(dimension);
    
this->canvasJPanelList= LinkedList();
    

    GridBagLayout gridBagLayout = GridBagLayout();;
    

    GridBagConstraints gridBagConstraints = GridBagConstraints();;
    
this->innerJPanel.setLayout(gridBagLayout);
    
gridBagConstraints.gridx= 0;
    
gridBagConstraints.gridy= 0;
    
gridBagConstraints.gridwidth= 1;
    
gridBagConstraints.fill= java.awt.GridBagConstraints.BOTH;
    
gridBagConstraints.weightx= .05;
    
gridBagConstraints.weighty= .05;
    

    ToolJPanel toolJPanel = ToolJPanel();;
    
gridBagLayout.setConstraints(toolJPanel, gridBagConstraints);
    
this->innerJPanel.add(toolJPanel);
    
gridBagConstraints= GridBagConstraints();
    
gridBagConstraints.gridx= 1;
    
gridBagConstraints.gridy= 0;
    
gridBagConstraints.gridwidth= 6;
    
gridBagConstraints.fill= java.awt.GridBagConstraints.BOTH;
    
gridBagConstraints.weightx= 1;
    
gridBagConstraints.weighty= 1;
    
gridBagLayout.setConstraints(this->canvasHolderJPanel, gridBagConstraints);
    
this->innerJPanel.add(this->canvasHolderJPanel);
    
gridBagConstraints= GridBagConstraints();
    
gridBagConstraints.gridx= 8;
    
gridBagConstraints.gridy= 0;
    
gridBagConstraints.gridwidth= java.awt.GridBagConstraints.REMAINDER;
    
gridBagConstraints.fill= java.awt.GridBagConstraints.BOTH;
    
gridBagConstraints.weightx= .1;
    
gridBagConstraints.weighty= .1;
    
this->propertiesJPanel= PropertiesJPanel();
    
gridBagLayout.setConstraints(this->propertiesJPanel, gridBagConstraints);
    
this->innerJPanel.add(this->propertiesJPanel);
    
MyCanvasEventService::addListener(this);
    
}


    private: HashMap<Object*, Object*> getCanvasHashMap(){

    HashMap<Object*, Object*> canvasJPanelHashMap = StdUtil::getInstance().createHashMap();;
    

    int32_t size = this->canvasJPanelList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    CanvasJPanel canvasJPanel = this->canvasJPanelList.get(index);;
    
canvasJPanelHashMap.put(canvasJPanel.getTreeNode(), Integer(index));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return canvasJPanelHashMap;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void play(){
this->isPlaying= true;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void stop(){
this->isPlaying= false;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isPlaying(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isPlaying;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setName(std::string value){
this->name= value;
    
}


    public: void disableCanvas(){
this->canvasHolderJPanel.removeAll();
    
}


    public: void enableCanvas(){
this->canvasHolderJPanel.add(this->getCurrentFrame());
    
}


    public: void deselect(){
super.setVisible(false);
    
}


    public: void select(){
super.setVisible(true);
    

                        if(this->canvasHolderJPanel.getComponentCount() == 1)
                        
                                    {
                                    
    Component component = this->canvasHolderJPanel.getComponent(0);;
    

                        if(component != 
                                    nullptr
                                )
                        
                                    {
                                    component.repaint();
    

                                    }
                                

                                    }
                                
}


    public: void changeZoom(int32_t factor){

    int32_t size = this->canvasJPanelList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    CanvasJPanel canvasJPanel = this->canvasJPanelList.get(index);;
    
canvasJPanel.getGrid().setZoom(canvasJPanel.getGrid().getZoom() +factor);
    
}

}


    public: CanvasJPanel getCurrentFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->canvasJPanelList.get(this->selectedFrame);
    
}


    private: void initDuplicate(CanvasJPanel newCanvasJPanel){

                        if(newCanvasJPanel != 
                                    nullptr
                                )
                        
                                    {
                                    this->canvasJPanelList.add(newCanvasJPanel);
    
this->select(this->canvasJPanelList.size() -1);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void duplicate(MutableTreeNode treeNode){

    HashMap<Object*, Object*> canvasJPanelHashMap = this->getCanvasHashMap();;
    

                        if(canvasJPanelHashMap.containsKey(treeNode))
                        
                                    {
                                    
    Integer frameInteger = canvasJPanelHashMap.get(treeNode);;
    

    CanvasJPanel canvasJPanel = this->canvasJPanelList.get(frameInteger.intValue());;
    
this->initDuplicate(canvasJPanel.duplicate());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void autoRotate(int32_t increments, int32_t totalAngle){

    int32_t incrementAngle = static_cast<int32_t>((totalAngle /increments));;
    




                        for (
    int32_t index = 1;index < increments; index++)
        {

    CanvasJPanel canvasJPanel = this->getCurrentFrame();;
    

    CanvasJPanel newCanvasJPanel = canvasJPanel.duplicate();;
    
newCanvasJPanel.setAngle(incrementAngle *index);
    
this->initDuplicate(newCanvasJPanel);
    
}

}


    public: void explodeAll(){

    CanvasJPanel canvasJPanel = this->getCurrentFrame();;
    
canvasJPanel.explodeAll();
    
}


                //@Throws(Exception.constructor)
            
    public: void autoExplode(int32_t numberOfFrames, int32_t explodeType){




                        for (
    int32_t index = 1;index < numberOfFrames; index++)
        {

    CanvasJPanel canvasJPanel = this->getCurrentFrame();;
    

    CanvasJPanel newCanvasJPanel = canvasJPanel.duplicate();;
    
newCanvasJPanel.explode(index +1, explodeType);
    
this->initDuplicate(newCanvasJPanel);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void autoMirror(){

    CanvasJPanel canvasJPanel = this->getCurrentFrame();;
    

    CanvasJPanel newCanvasJPanel = canvasJPanel.duplicate();;
    
newCanvasJPanel.mirror();
    
this->initDuplicate(newCanvasJPanel);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: void select(int32_t index){

                        if(index < this->canvasJPanelList.size())
                        
                                    {
                                    
    CanvasJPanel canvasJPanel = this->canvasJPanelList.get(index);;
    

                        if(canvasJPanel != 
                                    nullptr
                                )
                        
                                    {
                                    this->canvasHolderJPanel.removeAll();
    
this->canvasHolderJPanel.add(canvasJPanel);
    
this->selectedFrame= index;
    
canvasJPanel.changed();
    
this->canvasHolderJPanel.repaint();
    
canvasJPanel.repaint();
    

                                    }
                                

                                    }
                                
}


    private: void select(MutableTreeNode treeNode){

    HashMap<Object*, Object*> canvasJPanelHashMap = this->getCanvasHashMap();;
    

    Integer frameInteger = canvasJPanelHashMap.get(treeNode);;
    

                        if(frameInteger != 
                                    nullptr
                                )
                        
                                    {
                                    this->select(frameInteger.intValue());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: Document toDocument(){
WorkAreaJPanel::document= DomHelper::getInstance().createDocument();
    

    Node workAreaNode = WorkAreaJPanel::document.createElement(WorkAreaDom::WORKAREA);;
    

    Node nameNode = WorkAreaJPanel::document.createElement(WorkAreaDom::NAME);;
    

    Node nameTextNode = WorkAreaJPanel::document.createTextNode(this->name);;
    
nameNode.appendChild(nameTextNode);
    

    Node framesNode = WorkAreaJPanel::document.createElement(WorkAreaDom::FRAMES);;
    

    int32_t size = this->canvasJPanelList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    CanvasJPanel canvasJPanel = this->canvasJPanelList.get(index);;
    
framesNode.appendChild(canvasJPanel.toDom());
    
}

workAreaNode.appendChild(nameNode);
    
workAreaNode.appendChild(framesNode);
    
WorkAreaJPanel::document.appendChild(workAreaNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


    private: void initComponents(){
this->innerJPanel= javax::swing::JPanel();
    
setLayout(java::awt::GridLayout(1, 1));
    
this->innerJPanel.addKeyListener(class extends java::awt::event::KeyAdapter
                                {
                                
    public: void keyTyped(java::awt::event::KeyEvent evt){
innerJPanelKeyTyped(evt);
    
}

    public: void keyPressed(java::awt::event::KeyEvent evt){
innerJPanelKeyPressed(evt);
    
}

    public: void keyReleased(java::awt::event::KeyEvent evt){
innerJPanelKeyReleased(evt);
    
}

                                }
                            );
    
add(this->innerJPanel);
    
}


    private: void innerJPanelKeyReleased(java::awt::event::KeyEvent evt){
StatusFactory::getInstance().setStatus("Key Pressed1");
    
}


    private: void innerJPanelKeyPressed(java::awt::event::KeyEvent evt){
StatusFactory::getInstance().setStatus("Key Pressed2");
    
}


    private: void innerJPanelKeyTyped(java::awt::event::KeyEvent evt){
StatusFactory::getInstance().setStatus("Key Pressed3");
    
}


    public: void keyPressed(java::awt::event::KeyEvent keyEvent){
this->getCurrentFrame().keyPressed(keyEvent);
    
}


    public: void keyReleased(java::awt::event::KeyEvent keyEvent){
}


    public: void keyTyped(java::awt::event::KeyEvent keyEvent){
}


    public: void delete_(MyCanvasEvent evt){

    HashMap<Object*, Object*> canvasJPanelHashMap = this->getCanvasHashMap();;
    

                        if(canvasJPanelHashMap.containsKey(evt.getTreeNode()))
                        
                                    {
                                    this->canvasHolderJPanel.removeAll();
    

    Integer frameInt = canvasJPanelHashMap.get(evt.getTreeNode());;
    
this->canvasJPanelList.remove(frameInt.intValue());
    
this->select(frameInt.intValue());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void duplicate(MyCanvasEvent evt){
this->duplicate(evt.getTreeNode());
    
}


    public: void select(MyCanvasEvent evt){
this->select(evt.getTreeNode());
    
StatusFactory::getInstance().setStatus("Frame Selected");
    
}


    public: void rotate(MyCanvasEvent evt){

    HashMap<Object*, Object*> canvasJPanelHashMap = this->getCanvasHashMap();;
    

    MutableTreeNode treeNode = evt.getTreeNode();;
    

    Integer frameInt = canvasJPanelHashMap.get(evt.getTreeNode());;
    

    CanvasJPanel canvasJPanel = this->canvasJPanelList.get(frameInt.intValue());;
    

                        if(canvasJPanel != 
                                    nullptr
                                )
                        
                                    {
                                    canvasJPanel.addAngle(evt.getAngle());
    
this->select(frameInt.intValue());
    

                                    }
                                
StatusFactory::getInstance().setStatus("Canvas Rotated");
    
}


    public: void explode(MyCanvasEvent evt){
this->explodeAll();
    
}


                //@Throws(Exception.constructor)
            
    public: void autoExplode(MyCanvasEvent evt){
this->autoExplode(10, 0);
    
}


                //@Throws(Exception.constructor)
            
    public: void center(){

    CanvasJPanel canvasJPanel = this->getCurrentFrame();;
    
canvasJPanel.center();
    
}


                //@Throws(Exception.constructor)
            
    public: void center(MyCanvasEvent evt){
this->center();
    
}


    public: void run(){

        try {
            
        while(true)
        {

                        if(this->isPlaying())
                        
                                    {
                                    
    int32_t size = this->canvasJPanelList.size();;
    




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
} catch(e) 
            {
}

}


    private: javax::swing::JPanel innerJPanel;

};

            

