
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
        



            #include "../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../../../java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/event/InputEvent.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptInput.h"
#include "MouseActionScriptInputInterface.h"
#include "Point.h"
#include "MouseActionScriptInputJPanel.h"
#include "MouseActionScriptInputData.h"
#include "MouseInputAutomationProcessor.h"

class MouseActionScriptInput: public BasicProfileActionScriptInput: public MouseActionScriptInputInterface {
        

    private: static const NAME: string = "Mouse";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: point: Point;

    private: buttons: int32_t= 0;

    private: mouseActionScriptInputJPanel: MouseActionScriptInputJPanel;

public constructor (Node node){
            super(NAME, node);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.point= new Point();
    

    actionNode: Node = DomSearchHelper.getNode(MouseActionScriptInputData.NAME, node.getChildNodes())!;;
    

                        if(actionNode != 
                                    null
                                )
                        
                                    {
                                    
    nodeList: NodeList = actionNode!.getChildNodes()!;;
    




                        for (
    index: int32_t = 0;index < nodeList!.getLength(); index++)
        {

    childNode: Node = nodeList!.item(index)!;;
    

                        if(childNode!.getNodeName()!.compareTo(MouseActionScriptInputData.BUTTONS) == 0)
                        
                                    {
                                    
    buttons: string = DomNodeHelper.getTextNodeValue(childNode)!;;
    
this.setButtonClicks(Integer.valueOf(buttons)!.intValue());
    

                                    }
                                
                             else 
                        if(childNode!.getNodeName()!.compareTo(MouseActionScriptInputData.MOVE) == 0)
                        
                                    {
                                    
    mouseXNode: Node = DomSearchHelper.getNode(MouseActionScriptInputData.MOVE_X, childNode!.getChildNodes())!;;
    

    mouseXString: string = DomNodeHelper.getTextNodeValue(mouseXNode)!;;
    

    mouseXInteger: Integer = Integer.valueOf(mouseXString)!;;
    

    mouseYNode: Node = DomSearchHelper.getNode(MouseActionScriptInputData.MOVE_Y, childNode!.getChildNodes())!;;
    

    mouseYString: string = DomNodeHelper.getTextNodeValue(mouseYNode)!;;
    

    mouseYInteger: Integer = Integer.valueOf(mouseYString)!;;
    

    newPoint: Point = new Point(mouseXInteger!.intValue(), mouseYInteger!.intValue());;
    
this.setPoint(newPoint);
    

                                    }
                                
                        else {
                            


                            throw new Exception("Action Script Input Unknown Node");
                    

                        }
                            
}


                                    }
                                
                        else {
                            


                            throw new Exception("Action Script Input Node Null");
                    

                        }
                            
this.setAllowsChildren(false);
    
this.mouseActionScriptInputJPanel= new MouseActionScriptInputJPanel(this);
    
}


public constructor (){
            super(NAME);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.point= new Point();
    
this.setAllowsChildren(false);
    
this.mouseActionScriptInputJPanel= new MouseActionScriptInputJPanel(this);
    
}


    public setPoint(Point point){
this.point= point;
    
}


    public Point getPoint(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.point;
    
}


    public int32_t getButtonClicks(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.buttons;
    
}


    public setButtonClicks(int32_t buttons){
this.buttons= buttons;
    
}


    public showDialog(){
this.mouseActionScriptInputJPanel!.getMouseActionJDialog()!.setVisible(true);
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(MouseActionScriptInputData.BUTTONS, Integer.toString(this.getButtonClicks()));
    
this.logUtil!.putF("HashMap: " +hashMap!.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = super.toXmlNode(document)!;;
    

    mouseNode: Node = ModDomHelper.createNodeWithValueNodes(document, MouseActionScriptInputData.NAME, this.toHashMap())!;;
    
node.appendChild(mouseNode);
    

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(MouseActionScriptInputData.MOVE_X, Integer.toString(this.getPoint()!.x));
    
hashMap!.put(MouseActionScriptInputData.MOVE_Y, Integer.toString(this.getPoint()!.y));
    
mouseNode!.appendChild(ModDomHelper.createNodeWithValueNodes(document, MouseActionScriptInputData.MOVE, hashMap));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public process(Long frame){
MouseInputAutomationProcessor.process(this);
    
}


    public log(){

    buttonStringBuffer: StringMaker = new StringMaker();;
    
buttonStringBuffer!.append("1: ");
    

    booleanFactory: BooleanFactory = BooleanFactory.getInstance()!;;
    

                        if((this.getButtonClicks()&InputEvent.BUTTON1_MASK) != 0)
                        
                                    {
                                    buttonStringBuffer!.append(booleanFactory!.TRUE_STRING);
    

                                    }
                                
                        else {
                            buttonStringBuffer!.append(booleanFactory!.FALSE_STRING);
    

                        }
                            
buttonStringBuffer!.append(" 2: ");
    

                        if((this.getButtonClicks()&InputEvent.BUTTON2_MASK) != 0)
                        
                                    {
                                    buttonStringBuffer!.append(booleanFactory!.TRUE_STRING);
    

                                    }
                                
                        else {
                            buttonStringBuffer!.append(booleanFactory!.FALSE_STRING);
    

                        }
                            
buttonStringBuffer!.append(" 3: ");
    

                        if((this.getButtonClicks()&InputEvent.BUTTON3_MASK) != 0)
                        
                                    {
                                    buttonStringBuffer!.append(booleanFactory!.TRUE_STRING);
    

                                    }
                                
                        else {
                            buttonStringBuffer!.append(booleanFactory!.FALSE_STRING);
    

                        }
                            
this.logUtil!.putF("Input Type: " +this.getInputRobotInterface()!.getName() +" Point: " +this.getPoint() +" Buttons Clicked: " +buttonStringBuffer!.toString(), this, "log");
    
}


};

            

