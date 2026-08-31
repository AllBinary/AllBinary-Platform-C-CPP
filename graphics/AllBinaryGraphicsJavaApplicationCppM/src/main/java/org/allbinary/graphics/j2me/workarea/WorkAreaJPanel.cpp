
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

    public static Document getDocument(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WorkAreaJPanel.document;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: canvasJPanelList: LinkedList;

    private: canvasHolderJPanel: JPanel;

    private: name: string;

    private: selectedFrame: int32_t= 0;

    private: propertiesJPanel: PropertiesJPanel;

    private: workAreaJTreeJPanel: WorkAreaJTreeJPanel;

    private: isPlaying: bool = false;

public constructor (string name, Dimension dimension, int32_t x, int32_t y){

            super();
        
        try {
            this.initComponents();
    
this.name= name;
    
this.initMyComponents(dimension);
    
this.workAreaJTreeJPanel= new WorkAreaJTreeJPanel(this.name);
    

    canvasJPanel: CanvasJPanel = new CanvasJPanel(this.workAreaJTreeJPanel, this.getSize(), x, y);;
    
this.canvasJPanelList!.add(canvasJPanel);
    
this.selectedFrame= 0;
    
this.propertiesJPanel!.set(this.workAreaJTreeJPanel);
    
this.canvasHolderJPanel!.add(canvasJPanel as Component);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


public constructor (WorkAreaDom workAreaDom, Dimension dimension){

            super();
        
        try {
            this.initComponents();
    
this.name= workAreaDom!.getName();
    
this.initMyComponents(dimension);
    

    canvasNodeList: BasicArrayList = workAreaDom!.getCanvasNodes()!;;
    

    numberOfFrames: int32_t = canvasNodeList!.size()!;;
    




                        for (
    index: int32_t = 0;index < numberOfFrames; index++)
        {

    node: Node = canvasNodeList!.get(index) as Node;;
    

    canvasJPanel: CanvasJPanel = new CanvasJPanel(this.workAreaJTreeJPanel, this.getSize(), new CanvasDom(node));;
    
this.canvasJPanelList!.add(canvasJPanel);
    
}

this.selectedFrame= 0;
    
this.canvasHolderJPanel!.add(this.getCurrentFrame() as Component);
    
this.propertiesJPanel!.set(this.workAreaJTreeJPanel);
    

                //: 
} catch(e) 
            {

                        if(LOGGING.contains(LOGGING.LOADINGERROR))
                        
                                    {
                                    this.logUtil!.put("Constructor Error", this, "WorkAreaJPanel", e);
    

                                    }
                                



                            throw e;
                    
}

}


    initMyComponents(Dimension dimension){
this.workAreaJTreeJPanel= new WorkAreaJTreeJPanel(this.name);
    
this.canvasHolderJPanel= new JPanel();
    
this.canvasHolderJPanel!.setSize(dimension);
    
this.canvasHolderJPanel!.setLayout(new GridLayout(1, 1));
    
this.setSize(dimension);
    
this.canvasJPanelList= new LinkedList();
    

    gridBagLayout: GridBagLayout = new GridBagLayout();;
    

    gridBagConstraints: GridBagConstraints = new GridBagConstraints();;
    
this.innerJPanel!.setLayout(gridBagLayout);
    
gridBagConstraints!.gridx= 0;
    
gridBagConstraints!.gridy= 0;
    
gridBagConstraints!.gridwidth= 1;
    
gridBagConstraints!.fill= java.awt.GridBagConstraints.BOTH;
    
gridBagConstraints!.weightx= .05;
    
gridBagConstraints!.weighty= .05;
    

    toolJPanel: ToolJPanel = new ToolJPanel();;
    
gridBagLayout!.setConstraints(toolJPanel, gridBagConstraints);
    
this.innerJPanel!.add(toolJPanel);
    
gridBagConstraints= new GridBagConstraints();
    
gridBagConstraints!.gridx= 1;
    
gridBagConstraints!.gridy= 0;
    
gridBagConstraints!.gridwidth= 6;
    
gridBagConstraints!.fill= java.awt.GridBagConstraints.BOTH;
    
gridBagConstraints!.weightx= 1;
    
gridBagConstraints!.weighty= 1;
    
gridBagLayout!.setConstraints(this.canvasHolderJPanel, gridBagConstraints);
    
this.innerJPanel!.add(this.canvasHolderJPanel);
    
gridBagConstraints= new GridBagConstraints();
    
gridBagConstraints!.gridx= 8;
    
gridBagConstraints!.gridy= 0;
    
gridBagConstraints!.gridwidth= java.awt.GridBagConstraints.REMAINDER;
    
gridBagConstraints!.fill= java.awt.GridBagConstraints.BOTH;
    
gridBagConstraints!.weightx= .1;
    
gridBagConstraints!.weighty= .1;
    
this.propertiesJPanel= new PropertiesJPanel();
    
gridBagLayout!.setConstraints(this.propertiesJPanel, gridBagConstraints);
    
this.innerJPanel!.add(this.propertiesJPanel);
    
MyCanvasEventService.addListener(this as MyCanvasEventListener);
    
}


    HashMap<any, any> getCanvasHashMap(){

    canvasJPanelHashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    size: int32_t = this.canvasJPanelList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    canvasJPanel: CanvasJPanel = this.canvasJPanelList!.get(index) as CanvasJPanel;;
    
canvasJPanelHashMap!.put(canvasJPanel!.getTreeNode(), new Integer(index));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return canvasJPanelHashMap;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public play(){
this.isPlaying= true;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public stop(){
this.isPlaying= false;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isPlaying(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isPlaying;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public setName(string value){
this.name= value;
    
}


    public disableCanvas(){
this.canvasHolderJPanel!.removeAll();
    
}


    public enableCanvas(){
this.canvasHolderJPanel!.add(this.getCurrentFrame() as Component);
    
}


    public deselect(){
super.setVisible(false);
    
}


    public select(){
super.setVisible(true);
    

                        if(this.canvasHolderJPanel!.getComponentCount() == 1)
                        
                                    {
                                    
    component: Component = this.canvasHolderJPanel!.getComponent(0)!;;
    

                        if(component != 
                                    null
                                )
                        
                                    {
                                    component.repaint();
    

                                    }
                                

                                    }
                                
}


    public changeZoom(int32_t factor){

    size: int32_t = this.canvasJPanelList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    canvasJPanel: CanvasJPanel = this.canvasJPanelList!.get(index) as CanvasJPanel;;
    
canvasJPanel!.getGrid()!.setZoom(canvasJPanel!.getGrid()!.getZoom() +factor);
    
}

}


    public CanvasJPanel getCurrentFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.canvasJPanelList!.get(this.selectedFrame) as CanvasJPanel;
    
}


    initDuplicate(CanvasJPanel newCanvasJPanel){

                        if(newCanvasJPanel != 
                                    null
                                )
                        
                                    {
                                    this.canvasJPanelList!.add(newCanvasJPanel);
    
this.select(this.canvasJPanelList!.size() -1);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    duplicate(MutableTreeNode treeNode){

    canvasJPanelHashMap: HashMap<any, any> = this.getCanvasHashMap()!;;
    

                        if(canvasJPanelHashMap!.containsKey(treeNode))
                        
                                    {
                                    
    frameInteger: Integer = canvasJPanelHashMap!.get(treeNode) as Integer;;
    

    canvasJPanel: CanvasJPanel = this.canvasJPanelList!.get(frameInteger!.intValue()) as CanvasJPanel;;
    
this.initDuplicate(canvasJPanel!.duplicate());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public autoRotate(int32_t increments, int32_t totalAngle){

    incrementAngle: int32_t = static_cast<int32_t>((totalAngle /increments));;
    




                        for (
    index: int32_t = 1;index < increments; index++)
        {

    canvasJPanel: CanvasJPanel = this.getCurrentFrame() as CanvasJPanel;;
    

    newCanvasJPanel: CanvasJPanel = canvasJPanel!.duplicate()!;;
    
newCanvasJPanel!.setAngle(incrementAngle *index);
    
this.initDuplicate(newCanvasJPanel);
    
}

}


    public explodeAll(){

    canvasJPanel: CanvasJPanel = this.getCurrentFrame() as CanvasJPanel;;
    
canvasJPanel!.explodeAll();
    
}


                //@Throws(Exception.constructor)
            
    public autoExplode(int32_t numberOfFrames, int32_t explodeType){




                        for (
    index: int32_t = 1;index < numberOfFrames; index++)
        {

    canvasJPanel: CanvasJPanel = this.getCurrentFrame() as CanvasJPanel;;
    

    newCanvasJPanel: CanvasJPanel = canvasJPanel!.duplicate()!;;
    
newCanvasJPanel!.explode(index +1, explodeType);
    
this.initDuplicate(newCanvasJPanel);
    
}

}


                //@Throws(Exception.constructor)
            
    public autoMirror(){

    canvasJPanel: CanvasJPanel = this.getCurrentFrame() as CanvasJPanel;;
    

    newCanvasJPanel: CanvasJPanel = canvasJPanel!.duplicate()!;;
    
newCanvasJPanel!.mirror();
    
this.initDuplicate(newCanvasJPanel);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    select(int32_t index){

                        if(index < this.canvasJPanelList!.size())
                        
                                    {
                                    
    canvasJPanel: CanvasJPanel = this.canvasJPanelList!.get(index) as CanvasJPanel;;
    

                        if(canvasJPanel != 
                                    null
                                )
                        
                                    {
                                    this.canvasHolderJPanel!.removeAll();
    
this.canvasHolderJPanel!.add(canvasJPanel);
    
this.selectedFrame= index;
    
canvasJPanel!.changed();
    
this.canvasHolderJPanel!.repaint();
    
canvasJPanel!.repaint();
    

                                    }
                                

                                    }
                                
}


    select(MutableTreeNode treeNode){

    canvasJPanelHashMap: HashMap<any, any> = this.getCanvasHashMap()!;;
    

    frameInteger: Integer = canvasJPanelHashMap!.get(treeNode) as Integer;;
    

                        if(frameInteger != 
                                    null
                                )
                        
                                    {
                                    this.select(frameInteger!.intValue());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public Document toDocument(){
WorkAreaJPanel.document= DomHelper.getInstance()!.createDocument();
    

    workAreaNode: Node = WorkAreaJPanel.document.createElement(WorkAreaDom.WORKAREA)!;;
    

    nameNode: Node = WorkAreaJPanel.document.createElement(WorkAreaDom.NAME)!;;
    

    nameTextNode: Node = WorkAreaJPanel.document.createTextNode(this.name)!;;
    
nameNode!.appendChild(nameTextNode);
    

    framesNode: Node = WorkAreaJPanel.document.createElement(WorkAreaDom.FRAMES)!;;
    

    size: int32_t = this.canvasJPanelList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    canvasJPanel: CanvasJPanel = this.canvasJPanelList!.get(index) as CanvasJPanel;;
    
framesNode!.appendChild(canvasJPanel!.toDom());
    
}

workAreaNode!.appendChild(nameNode);
    
workAreaNode!.appendChild(framesNode);
    
WorkAreaJPanel.document.appendChild(workAreaNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


    initComponents(){
this.innerJPanel= new javax.swing.JPanel();
    
setLayout(new java.awt.GridLayout(1, 1));
    
this.innerJPanel!.addKeyListener(new class extends java.awt.event.KeyAdapter
                                {
                                
    public keyTyped(java.awt.event.KeyEvent evt){
innerJPanelKeyTyped(evt);
    
}

    public keyPressed(java.awt.event.KeyEvent evt){
innerJPanelKeyPressed(evt);
    
}

    public keyReleased(java.awt.event.KeyEvent evt){
innerJPanelKeyReleased(evt);
    
}

                                }
                            );
    
add(this.innerJPanel);
    
}


    innerJPanelKeyReleased(java.awt.event.KeyEvent evt){
StatusFactory.getInstance()!.setStatus("Key Pressed1");
    
}


    innerJPanelKeyPressed(java.awt.event.KeyEvent evt){
StatusFactory.getInstance()!.setStatus("Key Pressed2");
    
}


    innerJPanelKeyTyped(java.awt.event.KeyEvent evt){
StatusFactory.getInstance()!.setStatus("Key Pressed3");
    
}


    public keyPressed(java.awt.event.KeyEvent keyEvent){
this.getCurrentFrame()!.keyPressed(keyEvent);
    
}


    public keyReleased(java.awt.event.KeyEvent keyEvent){
}


    public keyTyped(java.awt.event.KeyEvent keyEvent){
}


    public delete(MyCanvasEvent evt){

    canvasJPanelHashMap: HashMap<any, any> = this.getCanvasHashMap()!;;
    

                        if(canvasJPanelHashMap!.containsKey(evt.getTreeNode()))
                        
                                    {
                                    this.canvasHolderJPanel!.removeAll();
    

    frameInt: Integer = canvasJPanelHashMap!.get(evt.getTreeNode()) as Integer;;
    
this.canvasJPanelList!.remove(frameInt!.intValue());
    
this.select(frameInt!.intValue());
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public duplicate(MyCanvasEvent evt){
this.duplicate(evt.getTreeNode());
    
}


    public select(MyCanvasEvent evt){
this.select(evt.getTreeNode());
    
StatusFactory.getInstance()!.setStatus("Frame Selected");
    
}


    public rotate(MyCanvasEvent evt){

    canvasJPanelHashMap: HashMap<any, any> = this.getCanvasHashMap()!;;
    

    treeNode: MutableTreeNode = evt.getTreeNode()!;;
    

    frameInt: Integer = canvasJPanelHashMap!.get(evt.getTreeNode()) as Integer;;
    

    canvasJPanel: CanvasJPanel = this.canvasJPanelList!.get(frameInt!.intValue()) as CanvasJPanel;;
    

                        if(canvasJPanel != 
                                    null
                                )
                        
                                    {
                                    canvasJPanel!.addAngle(evt.getAngle());
    
this.select(frameInt!.intValue());
    

                                    }
                                
StatusFactory.getInstance()!.setStatus("Canvas Rotated");
    
}


    public explode(MyCanvasEvent evt){
this.explodeAll();
    
}


                //@Throws(Exception.constructor)
            
    public autoExplode(MyCanvasEvent evt){
this.autoExplode(10, 0);
    
}


                //@Throws(Exception.constructor)
            
    public center(){

    canvasJPanel: CanvasJPanel = this.getCurrentFrame() as CanvasJPanel;;
    
canvasJPanel!.center();
    
}


                //@Throws(Exception.constructor)
            
    public center(MyCanvasEvent evt){
this.center();
    
}


    public run(){

        try {
            
        while(true)
        {

                        if(this.isPlaying())
                        
                                    {
                                    
    size: int32_t = this.canvasJPanelList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

                        if(!this.isPlaying())
                        
                                    {
                                    break;

                    

                                    }
                                
this.select(index);
    
Thread.sleep(100);
    
}


                                    }
                                
                        else {
                            Thread.sleep(500);
    

                        }
                            
Thread.sleep(250);
    
}


                //: 
} catch(e) 
            {
}

}


    private: innerJPanel: javax.swing.JPanel;

};

            

